#include "cputablemodel.h"

CpuTableModel::CpuTableModel(QObject *parent)
    : QAbstractTableModel(parent)
{
    // load some default data
    unsigned int columnCount = 2;
    unsigned int rowCount = 5;

    for (unsigned int idx = 0; idx<rowCount; idx++)
    {

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
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
