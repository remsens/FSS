#ifndef QCAMMODULE_H
#define QCAMMODULE_H

#include <QObject>

class QCamModule : public QObject
{
    Q_OBJECT
public:
    explicit QCamModule(QObject *parent = 0);
    ~QCamModule();

signals:

public slots:
};

#endif // QCAMMODULE_H
