#ifndef __CHARTVIEW_H__
#define __CHARTVIEW_H__

#include <QChartView>
#include <QRubberBand>

QT_CHARTS_USE_NAMESPACE

class ChartView : public QChartView
{
public:
    ChartView(QChart *chart, QWidget *parent = 0);

protected:

    //�������̿��Ʋ���ͼ�¼�
    void keyPressEvent(QKeyEvent *event);

    //������������Ʋ���ͼ�¼�
    void mousePressEvent(QMouseEvent *event);

    //���������ƶ����Ʋ���ͼ�¼�
    void mouseMoveEvent(QMouseEvent *event);

    //���������Ҽ��ָ�����ͼ�¼�
    void mouseReleaseEvent(QMouseEvent *event);

private:
    bool isClicking;

    int xOld;
    int yOld;
};




#endif /* __CHARTVIEW_H__ */
