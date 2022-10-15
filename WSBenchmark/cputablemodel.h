#ifndef CPUTABLEMODEL_H
#define CPUTABLEMODEL_H

#include <QAbstractTableModel>
#include <measurementpoint.h>
#include <initializer_list>

class CpuTableModel : public QAbstractTableModel
{
    Q_OBJECT

public:
    explicit CpuTableModel(QObject *parent = nullptr);
    CpuTableModel(std::initializer_list<MeasurementPoint<int>> lst = {{0,0}});

    // Header:
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

    // Basic functionality:
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

private:
    std::vector<MeasurementPoint<int>> _data;

};

#endif // CPUTABLEMODEL_H
