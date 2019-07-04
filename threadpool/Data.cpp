/**
Copyright 2019 Siddhi-LLVM Team
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include "Data.h"

int Data::getWeight() const {
    return weight;
}

void Data::setWeight(int weight) {
    Data::weight = weight;
}

const std::chrono::_V2::high_resolution_clock::time_point &Data::getIijTime() const {
    return iijTime;
}

void Data::setIijTime(const std::chrono::_V2::high_resolution_clock::time_point &iijTime) {
    Data::iijTime = iijTime;
}
