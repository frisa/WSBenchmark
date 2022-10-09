#include <memory>
#include "measurement.h"

Measurement::Measurement()
{
    auto point = MeasurementPoint<int>(1,3);
    _data.push_back(point);
    _data.push_back(MeasurementPoint<int>(2,4));
}
