#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"


int holesNumber;
int memorySize;

void MainWindow::paintEvent(QPaintEvent *event)
{

    QPainter painter(this);
    painter.setBrush(Qt::white);

    QPen pen;

    pen.setColor(Qt::black);
    pen.setWidth(2);

    painter.setPen(pen);
    painter.drawRect(QRect(ui->output_widget->pos().x(),ui->output_widget->pos().y(),200,200));

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
    ui->Enter_Hole_button->hide();
    ui->Holes_number->setText("");
    ui->Memory_size->setText("");

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
}

