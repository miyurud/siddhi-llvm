import csv
import subprocess


def getMetrics():
    latency = 0
    throughput = 0
    # read from csv
    with open('/home/kiroshkumar/PycharmProjects/Optimizer/optimizer/result.csv') as csv_file:
        csv_reader = csv.reader(csv_file, delimiter=',')
        for row in csv_reader:
            latency = int(row[0])
            throughput = int(row[1])
    return [latency, throughput]


def change_config(param1, param2):
    # TODO: run number of times and get the average
    command = "/home/kiroshkumar/PycharmProjects/Optimizer/optimizer/sp.sh " + str(param1) + " " + str(param2)
    subprocess.run(command, shell=True)


def write_best_configuration_w_results(metrics,configs):
    if(len(metrics)!=0 and len(configs)!=0):
        position = metrics.index(max(metrics))
        # TODO:write the results somewhere
        return configs[position]
    else:
        return 0
