#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QtCharts>
#include <QSvgGenerator>
#include <QtXlsx/QtXlsx>

#include "chartview.h"


QT_CHARTS_USE_NAMESPACE


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    //���մ������ݽ��н�������
    void data_get();

    //�����������ڴ���Ϣ
    void detach_zero_memory(int min_size, int max_size);

    //������ǰ��׼��
    void progress_bar_prepartion();

    //�������һ���ڴ���Ϣ
    void detach_one_memory(int min_size, int max_size);

    //������ڶ����ڴ���Ϣ
    void detach_two_memory();

    //������������ڴ���Ϣ
    void detach_three_memory();

    //�ⲿ���������ڲ���Ա����
    static MainWindow* getInstance();

private slots:

    //���ڽ��������ź���Ӧ�ۺ���
    void serialPort_readyRead();

    //�����ô�����
    void on_searchButton_clicked();

    //�򿪴�����Ӧ�ۺ���
    void on_openButton_clicked();

    //����������ۺ���
    void on_clearButton_clicked();

    //�����ڴ�malloc��free������Ӧ�ۺ���
    void on_analyseButton_clicked();

    //ֹͣ�߳���Ӧ�ۺ���
    void stopThread();

    //���зֶ��ڴ������Ӧ�ۺ���
    void on_detachButton_clicked();

    //����Ĭ�ϲ���
    void update_detach_value();

    //�����ڴ���������Ӧ�ۺ���
    void on_saveButton_clicked();

    //����������ʾЧ���캯��
    void change_style();

    //�߿����ú���
    void setMainWindowPalette();

    //ͼƬ����Ϊsvg��ʽ����
    void SaveChartViewSvg();

private:

    void wheelEvent(QWheelEvent *event);

    Ui::MainWindow *ui;
    QSerialPort serial;
    ChartView *chartView;
    QChart* m_chart_1;// ͼ�����
    QLineSeries* lineSeries_1;// ϵ��һ
    QLineSeries* lineSeries_2;// ϵ�ж�
    QLineSeries* lineSeries_3;// ϵ����

    QXlsx::Document xlsx;

    bool isStopping;
};

#endif // MAINWINDOW_H
