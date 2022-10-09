#include <memory>
#include "measurement.h"

Measurement::Measurement()
{
    auto point = std::make_unique<MeasurementPoint<int>>(1,3);
    _data.emplace_back(point);
}
