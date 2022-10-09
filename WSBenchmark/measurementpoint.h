#ifndef MEASUREMENTPOINT_H
#define MEASUREMENTPOINT_H

#endif // MEASUREMENTPOINT_H

template<typename T>
class MeasurementPoint{
    T x;
    T y;
public:
    MeasurementPoint(const T &x, const T &y) : x(x), y(y) {}
};
