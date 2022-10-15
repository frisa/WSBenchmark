#include "cputablemodel.h"
#include "initializer_list"
#include "measurementpoint.h"

CpuTableModel::CpuTableModel(QObject *parent)
    : QAbstractTableModel(parent)
{
}

CpuTableModel::CpuTableModel(std::initializer_list<MeasurementPoint<int>> lst)
{
    for (const auto itm: lst)
    {
        _data.emplace_back(itm);
    }
}

QVariant CpuTableModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

int CpuTableModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent)
    if (parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int CpuTableModel::columnCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent)
    if (parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant CpuTableModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
    {
        return QVariant();
    }
    if (role == Qt::DisplayRole)
    {
        return _data[index.row()]->at(index.column());
    }
    else
    {
        return QVariant();
    }
}
