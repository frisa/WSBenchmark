#ifndef SOLUTIONMODEL_H
#define SOLUTIONMODEL_H

#include <QObject>

class solutionModel : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ nameGet NOTIFY nameChanged)
public:
    explicit solutionModel(QObject *parent = nullptr);
    QString nameGet() const;

signals:
    void nameChanged(QString name);

};

#endif // SOLUTIONMODEL_H
