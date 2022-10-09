#ifndef SOLUTIONMODEL_H
#define SOLUTIONMODEL_H

#include <QObject>
#include "measurement.h"

class solutionModel : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ nameGet NOTIFY nameChanged)
public:
    explicit solutionModel(QObject *parent = nullptr);
    QString nameGet() const;

private:
    Measurement _measurement;

signals:
    void nameChanged(QString name);
};

#endif // SOLUTIONMODEL_H
