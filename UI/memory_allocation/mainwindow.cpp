#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"
#include <QDebug>

int holesNumber;
int memorySize;
int segmentsNumber;
int processNumber=1;
int segmentNumber=1;
void MainWindow::paintEvent(QPaintEvent *event)
{

    QPainter painter(this);
    painter.setBrush(Qt::white);

    QPen pen;

    pen.setColor(Qt::black);
    pen.setWidth(2);

    painter.setPen(pen);
    painter.drawRect(QRect(ui->output_widget->pos().x()+20,ui->output_widget->pos().y(),200,200));

}


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->hole_Address->hide();
    ui->hole_Size->hide();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->label_5->hide();
    ui->label_6->hide();
    ui->label_7->hide();

    ui->segments_number->hide();
    ui->segment_name->hide();
    ui->segment_size->hide();

    ui->Enter_Hole_button->hide();
    ui->Allocate_button->hide();

    ui->segments_number_button->hide();
    ui->enter_segment->hide();

}

MainWindow::~MainWindow()
{
    delete ui;
}







void MainWindow::on_Enter_button_clicked()
{
    if(ui->Holes_number->text().toInt() && ui->Memory_size->text().toInt()){
        holesNumber = ui->Holes_number->text().toInt();
        memorySize = ui->Memory_size->text().toInt();
        ui->Holes_number->setDisabled(true);
        ui->Memory_size->setDisabled(true);
        ui->hole_Address->show();
        ui->hole_Size->show();
        ui->label_3->show();
        ui->label_4->show();
        ui->Enter_Hole_button->show();
        ui->Enter_button->hide();
    }

}


void MainWindow::on_Enter_Hole_button_clicked()
{
    if(ui->hole_Address->text().toInt() && ui->hole_Size->text().toInt()){
        holesNumber--;
        int rowPosition = ui->segments_table->rowCount();
        ui->segments_table->insertRow(rowPosition);
        ui->segments_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        QString HoleName = "Hole "+QString::number(ui->segments_table->rowCount());
        QString holeAddress =ui->hole_Address->text();
        QString HoleSize = ui->hole_Size->text();
        ui->segments_table->setItem(rowPosition , 0, new QTableWidgetItem(HoleName));
        ui->segments_table->setItem(rowPosition , 1, new QTableWidgetItem(holeAddress));
        ui->segments_table->setItem(rowPosition , 2, new QTableWidgetItem(HoleSize));
        ui->hole_Address->setText("");
        ui->hole_Size->setText("");
        if(holesNumber == 0){


            ui->Allocate_button->show();
            ui->hole_Address->hide();
            ui->hole_Size->hide();
            ui->label_3->hide();
            ui->label_4->hide();
            ui->Enter_Hole_button->hide();
        }
    }
}





void MainWindow::on_reset_Button_clicked()
{
    ui->Enter_button->show();
    ui->Holes_number->setEnabled(true);
    ui->Memory_size->setEnabled(true);
    ui->Holes_number->setText("");
    ui->Memory_size->setText("");
    ui->hole_Address->setText("");
    ui->hole_Size->setText("");
    ui->hole_Address->hide();
    ui->hole_Size->hide();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->Enter_Hole_button->hide();
    ui->segments_table->model()->removeRows(0,ui->segments_table->rowCount());
    ui->segment_name->hide();
    ui->label_6->hide();
    ui->label_7->hide();
    ui->segment_size->hide();
    ui->enter_segment->hide();

    ui->segment_name->setText("");
    ui->segment_size->setText("");
    ui->segments_number->setText("");
    ui->segments_number->hide();
    ui->label_5->hide();
    ui->segments_number_button->hide();
    ui->Allocate_button->hide();

}


void MainWindow::on_Allocate_button_clicked()
{
    ui->segments_number->show();
    ui->label_5->show();
    ui->segments_number_button->show();

}


void MainWindow::on_segments_number_button_clicked()
{
    segmentsNumber = ui->segments_number->text().toInt();
    ui->segments_number->hide();
    ui->label_5->hide();
    ui->segments_number_button->hide();
    int segmentRow = ui->segments_table->rowCount();
    ui->segments_table->insertRow(segmentRow);
    QString process = "Process "+QString::number(processNumber);
    ui->segments_table->setItem(segmentRow , 0, new QTableWidgetItem(process));
    ui->segments_table->setItem(segmentRow , 3, new QTableWidgetItem("DeAllocate Process"));
    ui->segments_table->item(segmentRow , 3)->setForeground(QBrush(QColor(255, 0, 0)));
    ui->segment_name->show();
    ui->label_6->show();
    ui->label_7->show();
    ui->segment_size->show();
    ui->enter_segment->show();
    ui->segments_number->setText("");

}


void MainWindow::on_enter_segment_clicked()
{
    segmentsNumber--;
    QString segmentName =  ui->segment_name->text();
    QString segmentSize =  ui->segment_size->text();
    int segmentRow = ui->segments_table->rowCount();
    ui->segments_table->insertRow(segmentRow);
    ui->segments_table->setItem(segmentRow , 0, new QTableWidgetItem(QString::number(segmentNumber)));
    segmentNumber++;
    ui->segments_table->setItem(segmentRow , 1, new QTableWidgetItem(segmentName));
    ui->segments_table->setItem(segmentRow , 2, new QTableWidgetItem(segmentSize));
    if(segmentsNumber==0){
        segmentNumber=1;
        processNumber++;
        ui->segment_name->hide();
        ui->label_6->hide();
        ui->label_7->hide();
        ui->segment_size->hide();
        ui->enter_segment->hide();

    }
    ui->segment_name->setText("");
    ui->segment_size->setText("");
}


void MainWindow::on_segments_table_cellDoubleClicked(int row, int column)
{
    int i=0;
    QString string2 = ui->segments_table->item(row,0)->text();
    bool process = string2.contains('P');
    while(1){
        QString string1 = ui->segments_table->item(row,0)->text();
        if(  process == true || string1 == QString::number(i))
        {
            process=false;
            ui->segments_table->removeRow(row);
            if(row == ui->segments_table->rowCount()){
                break;
            }
        }
        else{
            break;
        }
        i++;
    }
}

