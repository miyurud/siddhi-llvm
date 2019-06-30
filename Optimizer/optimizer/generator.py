import config
import numpy as np
import matplotlib.pyplot as plt
import random
import math

def generate_sample(iterations):
    segmentSize = 1 / iterations
    initial_sample = []
    for x in range(iterations):
        configuration = config.SIDDHI_CONFIG
        for i in (config.SIDDHI_CONFIG):
            variableMin = config.SIDDHI_CONFIG_THRESHOLDS[i][0]
            variableMax = config.SIDDHI_CONFIG_THRESHOLDS[i][1]

            segmentMin = x * segmentSize
            point = segmentMin + (random.random() * segmentSize)
            pointValue = (point * (variableMax - variableMin)) + variableMin
            # should round these values
            configuration[i] = math.ceil(pointValue)
        initial_sample.append(configuration.copy())
    return initial_sample


def generate_graph_for_smapling_test():
    # TODO :in testing,observed sampling mostly follow diagonal pattern,tackle this
    p = generate_sample(10)
    plt.figure(figsize=[5, 5])
    plt.scatter([dic['buffersize'] for dic in p], [dic['thread_pool_size'] for dic in p], c='r')
    plt.show()

def visualize_climb(arr):
    plt.xlabel('iterations')
    plt.ylabel('Throughput')
    plt.title('Climbing process')
    plt.plot(range(len(arr)), arr, color='g')
    plt.show()

def find_neighbours(config_array):
    # TODO:yet to implement
    # should find all the neighbors for the current state
    neighbours = []
    for x in config.SIDDHI_CONFIG:
        continue
    return 1


def find_random_neighbor(current_state, step_range):
    rand_neighbbor = np.copy(current_state)
    x = np.random.randint(0, len(current_state))
    changed_state=-1
    while(changed_state<=0):
        step_size = list(config.SIDDHI_CONFIG_THRESHOLDS.values())[x][2]
        changed_state = current_state[x] +step_range[np.random.randint(0, len(step_range) - 1)] * step_size
    rand_neighbbor[x] = changed_state
    # TODO:check boundary min max values
    return rand_neighbbor

