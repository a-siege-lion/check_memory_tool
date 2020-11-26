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


private:

    void wheelEvent(QWheelEvent *event);

    Ui::MainWindow *ui;
    QSerialPort serial;
    ChartView *chartView;
    QChart* m_chart_1;// ͼ�����

    QLineSeries* series0 = NULL;
    QLineSeries* series1 = NULL;

    QLineSeries* series2 = NULL;
    QLineSeries* series3 = NULL;

    QLineSeries* series4 = NULL;
    QLineSeries* series5 = NULL;


    QLineSeries* series6 = NULL;
    QLineSeries* series7 = NULL;

    QLineSeries* series8 = NULL;
    QLineSeries* series9 = NULL;

    QLineSeries* series10 = NULL;
    QLineSeries* series11 = NULL;

    QLineSeries* series12 = NULL;
    QLineSeries* series13 = NULL;

    QLineSeries* series14 = NULL;
    QLineSeries* series15 = NULL;

    QLineSeries* series16 = NULL;
    QLineSeries* series17 = NULL;

    QLineSeries* series18 = NULL;
    QLineSeries* series19 = NULL;

    QLineSeries* series20 = NULL;
    QLineSeries* series21 = NULL;

    QXlsx::Document xlsx;

    bool isStopping;



};

#endif // MAINWINDOW_H
