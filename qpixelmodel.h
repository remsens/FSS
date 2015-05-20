#ifndef QPIXELMODEL_H
#define QPIXELMODEL_H

#include <QObject>

class QPixelModel : public QObject
{
    Q_OBJECT
public:
    explicit QPixelModel(QObject *parent = 0);
    ~QPixelModel();

signals:

public slots:
};

#endif // QPIXELMODEL_H
