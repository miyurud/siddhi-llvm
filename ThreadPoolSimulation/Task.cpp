//
// Created by tharsanan on 8/2/19.
//

#include "Task.h"

void Task::perform() {
    taskFunction();
}

void Task::addTask(function<void()> taskToAdd) {
    taskFunction = taskToAdd;
}
