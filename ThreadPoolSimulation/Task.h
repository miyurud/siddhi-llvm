//
// Created by tharsanan on 8/2/19.
//

#ifndef MOCKSPFORLLVMOPTIMIZATION_TASK_H
#define MOCKSPFORLLVMOPTIMIZATION_TASK_H

#include <functional>

using namespace std;
class Task {
    function<void()> taskFunction;
public:
    void perform();
    void addTask(function<void()> taskToAdd);
};


#endif //MOCKSPFORLLVMOPTIMIZATION_TASK_H
