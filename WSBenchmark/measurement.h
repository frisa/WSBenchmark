#ifndef MEASUREMENT_H
#define MEASUREMENT_H

#include <vector>
#include <memory>
#include "measurementpoint.h"
#include <initializer_list>

using namespace std;

class Measurement
{
public:
    Measurement();
    // initializer list constructor
    Measurement(std::initializer_list<MeasurementPoint<int>> lst);
private:
    std::vector<MeasurementPoint<int>> _data;
};

#endif // MEASUREMENT_H
