#ifndef MESSAGESTATISTICS_H
#define MESSAGESTATISTICS_H

#include <QWidget>

namespace Ui {
class MessageStatistics;
}

class MessageStatistics : public QWidget
{
    Q_OBJECT
    
public:
    explicit MessageStatistics(QWidget *parent = 0);
    ~MessageStatistics();
public slots:
    void sendCountIncrease();
    void recvCountIncrease();
    void successCountIncrease();
    void failCountIncrease();
    
private:
    Ui::MessageStatistics *ui;
    qint32 sendCount;
    qint32 recvCount;
    qint32 successCount;
    qint32 failCount;
};

#endif // MESSAGESTATISTICS_H
