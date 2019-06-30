import generator
import metrics as sp
import constant


def hill_climb(no_samples, restarts, is_history=True):
    all_best_metrics = []
    all_best_configs = []
    history_arr = []
    for i in range(restarts + 1):
        # best_metrics = [0, 0]
        samples = generator.generate_sample(no_samples)
        temp_metrics = []
        for x in range(len(samples)):
            sp.change_config(samples[x]['buffersize'], samples[x]['thread_pool_size'])
            [latency, throughput] = sp.getMetrics()
            temp_metrics.append([latency, throughput].copy())

        best_metrics, position = get_best_samp_configuration(temp_metrics);
        history_arr.append(best_metrics[1])
        # print("best_mat ",best_metrics)
        # print("best config",samples[position])
        attempts = 0
        iterations = 0
        nei_range = 0
        start_state = [samples[position]['buffersize'], samples[position]['thread_pool_size']]
        while (iterations < constant.MAX_ITERATIONS and attempts < constant.MAX_ATTEMPTS):
            iterations += 1
            current_config = generator.find_random_neighbor([start_state[0], start_state[1]],
                                                            constant.NEIGHBORHOOD_RANGE[nei_range])

            sp.change_config(current_config[0], current_config[1])
            [new_latency, new_throughput] = sp.getMetrics()

            if (is_fit([new_latency, new_throughput], best_metrics)):
                print("found :", current_config, [new_latency, new_throughput])
                start_state = current_config.copy()
                best_metrics = [new_latency, new_throughput]
                all_best_metrics.append(new_throughput)
                all_best_configs.append([start_state[0], start_state[1]])
                attempts = 0
            else:
                attempts += 1
                if (attempts == 3):
                    nei_range = 1
                if (attempts == 5):
                    nei_range == 2
            if (is_history):
                history_arr.append(new_throughput)

    print(history_arr)
    # print(all_best_metrics)
    # print(all_best_configs)

    print(sp.write_best_configuration_w_results(all_best_metrics,all_best_configs))
    generator.visualize_climb(history_arr)


def get_best_samp_configuration(results):
    best = results[0]
    counter = 0
    # for item in results:
    for x in range(len(results)):
        if results[x][1] > best[1]:
            # if results[x][1] > constant.THROUGHPUT_THRESHOLD:
            best = results[x]
            counter = x
    return best, counter


def is_fit(conf_arr, best):
    # for now only considering throughput function to be high
    if (conf_arr[1] > best[1]):
        return True
    return False


def get_polynomial_best():
    return 1
