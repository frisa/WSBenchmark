#ifndef CPUTABLEMODEL_H
#define CPUTABLEMODEL_H

#include <QAbstractTableModel>

class CpuTableModel : public QAbstractTableModel
{
    Q_OBJECT

public:
    explicit CpuTableModel(QObject *parent = nullptr);

    // Header:
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

    // Basic functionality:
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

private:
};

#endif // CPUTABLEMODEL_H
