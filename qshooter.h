#ifndef QSHOOTER_H
#define QSHOOTER_H

#include <QObject>

class QShooter : public QObject
{
    Q_OBJECT
public:
    explicit QShooter(QObject *parent = 0);
    ~QShooter();

signals:

public slots:
};

#endif // QSHOOTER_H
