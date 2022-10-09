#ifndef MEASUREMENT_H
#define MEASUREMENT_H

#include <vector>
#include <memory>
#include "measurementpoint.h"

using namespace std;

class Measurement
{
public:
    Measurement();
private:
    std::vector<MeasurementPoint<int>> _data;
};

#endif // MEASUREMENT_H