#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>

class mythread : public QThread
{
    Q_OBJECT
public:
    explicit mythread(QObject *parent = nullptr);
    void run();//protect �麯��,�̴߳�����,����ֱ�ӵ��ã���Ҫͨ��start�������м�ӵ���

signals:

};

#endif // MYTHREAD_H
