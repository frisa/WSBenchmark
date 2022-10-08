#include "solutionmodel.h"

solutionModel::solutionModel(QObject *parent)
    : QObject{parent}
{

}

QString solutionModel::nameGet() const
{
    QString name = "MySolution";
    return name;
}
