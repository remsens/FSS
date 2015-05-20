#ifndef QPREVIEWFRAMEMODEL_H
#define QPREVIEWFRAMEMODEL_H

#include <QObject>

class QPreviewFrameModel : public QObject
{
    Q_OBJECT
public:
    explicit QPreviewFrameModel(QObject *parent = 0);
    ~QPreviewFrameModel();

signals:

public slots:
};

#endif // QPREVIEWFRAMEMODEL_H
