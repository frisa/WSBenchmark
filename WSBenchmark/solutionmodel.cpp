#include "solutionmodel.h"
#include "measurement.h"

solutionModel::solutionModel(QObject *parent)
    : QObject{parent}
{
    _measurement = new Measurement{{1, 2}, {2, 3}, {3, 5}};
}

QString solutionModel::nameGet() const
{
    QString name = "MySolution";
    return name;
}
