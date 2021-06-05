#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QPainter>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

    virtual void paintEvent(QPaintEvent *event);



private slots:

    void on_Enter_Hole_button_clicked();

    void on_Enter_button_clicked();

    void on_reset_Button_clicked();


    void on_Allocate_button_clicked();

    void on_segments_number_button_clicked();

    void on_enter_segment_clicked();

    void on_segments_table_cellDoubleClicked(int row, int column);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
