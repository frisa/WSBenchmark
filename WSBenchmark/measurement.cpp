#include <memory>
#include "measurement.h"

Measurement::Measurement()
{
    const size_t sizeOfData = 100;
    _data.reserve(sizeOfData);
}

Measurement::Measurement(std::initializer_list<MeasurementPoint<int> > lst)
{
    for(auto itm: lst)
    {
        _data.push_back(itm);
    }
}
