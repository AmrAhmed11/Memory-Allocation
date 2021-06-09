#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

QVector<process> new_processes;
process temp_process;
memory mm;
int holesNumber = 0;
int segmentsNumber = 0;
int processNumber=1;
int segmentNumber=1;
int counter =1;
    


//drawing variables
QVector<QPoint> drawingData;

int isDrawing = 0;

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPoint drawingLimits(300, this->size().height() - 50);

   QPainter painter(this);
   painter.setBrush(Qt::darkGray);

   QPen pen;

   pen.setColor(Qt::black);
   pen.setWidth(2);

   painter.setPen(pen);

    // draw main memory window
    painter.drawRect(QRect(ui->output_widget->pos().x()+drawingData.last().x(),ui->output_widget->pos().y()+drawingData.last().y(),drawingLimits.x(),drawingLimits.y()));
    painter.drawText(ui->output_widget->pos().x()-5,ui->output_widget->pos().y()+25,"0");
//    if(mm.size != 0){
//        painter.drawText(ui->output_widget->pos().x()-20,ui->output_widget->pos().y()+drawingLimits.y(),QString::number(mm.size));
//    }

        // draw holes and segments
        int i = 0;
        int j = 0;
        memory temp = mm;

        if(mm.holes.size() != 0 || mm.segments.size() != 0){


       hole currentH = temp.holes.front();
       segment currentS;
       if(mm.segments.size()!= 0){
            currentS = temp.segments.front();
       }

       double factor = drawingLimits.y()/mm.size;

        while(i < mm.holes.size() || j < mm.segments.size()){
            if(temp.holes.size() > 0){
                if(currentH.base < currentS.base || temp.segments.size() == 0){
                    //draw hole
                    painter.setBrush(Qt::white);
                    pen.setColor(Qt::black);
                    pen.setWidth(2);

                   painter.setPen(pen);

                    painter.drawRect(QRect(ui->output_widget->pos().x()+drawingData.last().x(),ui->output_widget->pos().y()+drawingData.last().y()+(currentH.base*factor),drawingLimits.x(),(currentH.limit*factor)+25));
                    painter.drawText(ui->output_widget->pos().x()+(drawingLimits.x()/2)-10,ui->output_widget->pos().y()+drawingData.last().y()+(((currentH.base+currentH.limit/2)*factor)),"Hole " + QString::number(currentH.id));

//                   painter.drawText(ui->output_widget->pos().x()+(drawingLimits.x())-70,ui->output_widget->pos().y()+drawingData.last().y()+(((currentH.base)*factor))+20,"Start : " + QString::number(currentH.base));
                   painter.drawText(ui->output_widget->pos().x()-15,ui->output_widget->pos().y()+drawingData.last().y()+(((currentH.base+currentH.limit)*factor))-5, QString::number(currentH.base + currentH.limit));

                   temp.holes.erase(temp.holes.begin());
                   if(temp.holes.size() > 0){
                       currentH = temp.holes.front();
                   } else {

                    }
                    i += 1;
                }
            }  if(temp.segments.size() > 0){
                if(currentH.base > currentS.base || temp.holes.size() == 0){
                    //draw segment
                    QColor color = 0xffffff - currentS.process_number*50;
                    painter.setBrush(color);


                    pen.setColor(Qt::black);
                    pen.setWidth(2);

                    painter.setPen(pen);
                    painter.drawRect(QRect(ui->output_widget->pos().x()+drawingData.last().x(),ui->output_widget->pos().y()+drawingData.last().y() + (currentS.base*factor),drawingLimits.x(),(currentS.limit*factor)+25));
                    color = 0xffffff + currentS.process_number*50;
                    pen.setColor(color);
                    pen.setWidth(2);

                    painter.setPen(pen);
                    painter.drawText(ui->output_widget->pos().x()+20,ui->output_widget->pos().y()+drawingData.last().y()+(((currentS.base+currentS.limit/2)*factor)),"P"+QString::number(currentS.process_number)+ " - " + currentS.name);

                    pen.setColor(Qt::black);
                    pen.setWidth(2);

                    painter.setPen(pen);
//                   painter.drawText(ui->output_widget->pos().x()+(drawingLimits.x())-70,ui->output_widget->pos().y()+drawingData.last().y()+(((currentS.base)*factor))+20,"Start : " + QString::number(currentS.base));
                   painter.drawText(ui->output_widget->pos().x()-15,ui->output_widget->pos().y()+drawingData.last().y()+(((currentS.base+currentS.limit)*factor))-5,QString::number(currentS.base + currentS.limit));

                   temp.segments.erase(temp.segments.begin());
                   if(temp.segments.size() > 0){
                       currentS = temp.segments.front();
                   }
                   j += 1;

               }
           }

       }

    }

}


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    drawingData.push_back(QPoint(10,10));
    mm.size = 0;

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
    ui->Done->hide();
    ui->Allocation_Method->hide();
    ui->Allocation_Method_Button->hide();

}

MainWindow::~MainWindow()
{
    delete ui;
}







void MainWindow::on_Enter_button_clicked()
{

    if( ui->Memory_size->text().isEmpty()){
        QMessageBox messageBox;
        messageBox.warning(0,"Error","Memory Size field empty");
        messageBox.setFixedSize(500,200);
    }
    else if(ui->Memory_size->text().toInt() <= 0){
//ERROR MSG
        QMessageBox messageBox;
        messageBox.warning(0,"Error","Memory Size Cannot be -ve or Zero");
        messageBox.setFixedSize(500,200);
    }
    else{
        mm.size = ui->Memory_size->text().toInt();
        ui->Memory_size->setDisabled(true);
        ui->hole_Address->show();
        ui->hole_Size->show();
        ui->label_3->show();
        ui->label_4->show();
        ui->Enter_Hole_button->show();
        ui->Done->show();
        ui->Enter_button->hide();


    }

}


void MainWindow::on_Enter_Hole_button_clicked()
{
    hole h;
    h.base = ui->hole_Address->text().toInt();
    h.limit = ui->hole_Size->text().toInt();
    h.id = ui->segments_table->rowCount();

    if(ui->hole_Address->text().isEmpty() || ui->hole_Size->text().isEmpty()){
//ERROR MSG
        QMessageBox messageBox;
        messageBox.warning(0,"Error","Empty hole address or size field");
        messageBox.setFixedSize(500,200);
    }
    else if(ui->hole_Size->text().toInt() <= 0 ){
//ERROR MSG

        QMessageBox messageBox;
        messageBox.warning(0,"Error","hole size cannot be -ve or zero");
        messageBox.setFixedSize(500,200);
    }
    else if( ui->hole_Address->text().toInt() < 0 || ui->hole_Address->text().toInt() >= mm.size){
//ERROR MSG
        QMessageBox messageBox;
        messageBox.warning(0,"Error","hole address out of bounds");
        messageBox.setFixedSize(500,200);
    }
    else{
        if(validateHole(mm, h)){
            holesNumber--;
            int rowPosition = ui->segments_table->rowCount();
            ui->segments_table->insertRow(rowPosition);
            ui->segments_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
            QString HoleName = "Hole "+QString::number(ui->segments_table->rowCount() - 1);
            QString holeAddress =ui->hole_Address->text();
            QString HoleSize = ui->hole_Size->text();
            ui->segments_table->setItem(rowPosition , 0, new QTableWidgetItem(HoleName));
            ui->segments_table->setItem(rowPosition , 1, new QTableWidgetItem(holeAddress));
            ui->segments_table->setItem(rowPosition , 2, new QTableWidgetItem(HoleSize));
            ui->hole_Address->setText("");
            ui->hole_Size->setText("");
            ui->hole_Address->hide();
            ui->hole_Size->hide();
            ui->label_3->hide();
            ui->label_4->hide();
            ui->Enter_button->show();
            ui->Enter_Hole_button->hide();
        }
        else{
//ERROR MSG
            QMessageBox messageBox;
            messageBox.warning(0,"Error","hole not valid");
            messageBox.setFixedSize(500,200);
        }
    }
}





void MainWindow::on_reset_Button_clicked()
{
    new_processes.clear();
    temp_process.segments.clear();
    mm.holes.clear();
    mm.segments.clear();
    mm.size = 0;
    update();


    ui->Done->hide();
    ui->Enter_button->show();
    ui->Memory_size->setEnabled(true);
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
    ui->Allocation_Method->hide();
    ui->Allocation_Method_Button->hide();

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
    temp_process.id = counter;
    temp_process.segments.clear();

    ui->segments_number->show();
    ui->label_5->show();
    ui->segments_number_button->show();

}


void MainWindow::on_segments_number_button_clicked()
{
    if(ui->segments_number->text().isEmpty()){
        QMessageBox messageBox;
        messageBox.warning(0,"Error","segments number field empty");
        messageBox.setFixedSize(500,200);
    }
    else if(ui->segments_number->text().toInt() <= 0){
//ERROR MSG
        QMessageBox messageBox;
        messageBox.warning(0,"Error","segments number cannot be -ve or zero");
        messageBox.setFixedSize(500,200);
    }
    else{
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
}


void MainWindow::on_enter_segment_clicked()
{
    if(ui->segment_name->text().isEmpty() || ui->segment_size->text().isEmpty()){
//ERROR MSG
        QMessageBox messageBox;
        messageBox.warning(0,"Error","segments name or size field empty");
        messageBox.setFixedSize(500,200);
    }
    else if(ui->segment_size->text().toInt() <= 0){
//ERROR MSG
        QMessageBox messageBox;
        messageBox.warning(0,"Error","segment size cannot be -ve or zero");
        messageBox.setFixedSize(500,200);
    }
    else{
        segment new_segment;
        new_segment.name =  ui->segment_name->text();
        new_segment.limit =  ui->segment_size->text().toInt();
        new_segment.process_number = counter;
        temp_process.segments.push_back(new_segment);

        segmentsNumber--;
        int segmentRow = ui->segments_table->rowCount();
        ui->segments_table->insertRow(segmentRow);
        ui->segments_table->setItem(segmentRow , 0, new QTableWidgetItem(QString::number(segmentNumber)));
        segmentNumber++;
        ui->segments_table->setItem(segmentRow , 1, new QTableWidgetItem(ui->segment_name->text()));
        ui->segments_table->setItem(segmentRow , 2, new QTableWidgetItem(ui->segment_size->text()));

        if(segmentsNumber==0){
            new_processes.push_back(temp_process);
            counter++;
            segmentNumber=1;
            processNumber++;
            ui->segment_name->hide();
            ui->label_6->hide();
            ui->label_7->hide();
            ui->segment_size->hide();
            ui->enter_segment->hide();

            ui->Allocation_Method->show();
            ui->Allocation_Method_Button->show();
        }
        ui->segment_name->setText("");
        ui->segment_size->setText("");
    }
}


void MainWindow::on_segments_table_cellDoubleClicked(int row, int column)
{
    int i=0;
    QString string2 = ui->segments_table->item(row,0)->text();
    bool process = string2.contains('P');
    if(process == true){
        if(string2.contains('l')){
            int deallocated_index = string2.mid(10,1).toInt();
            deallocation(mm,-deallocated_index);
            update();
        }
        else{
            int deallocated_index = string2.mid(8,1).toInt();
            deallocation(mm,deallocated_index);
            update();
        }
    }
    table_Draw();
}

void MainWindow::table_Draw(){
    ui->segments_table->model()->removeRows(0,ui->segments_table->rowCount());
    for(int i =0;i<mm.holes.size();i++){
        int segmentRow = ui->segments_table->rowCount();
        ui->segments_table->insertRow(segmentRow);
        ui->segments_table->setItem(segmentRow , 0, new QTableWidgetItem("Hole " + QString::number(mm.holes[i].id)));
        ui->segments_table->setItem(segmentRow , 1, new QTableWidgetItem(QString::number(mm.holes[i].base)));
        ui->segments_table->setItem(segmentRow , 2, new QTableWidgetItem(QString::number(mm.holes[i].limit)));
    }
    int o;
    for(int i =0;i<mm.segments.size();i++){
        if( i==0 || mm.segments[i].process_number != o){
            if(mm.segments[i].name.contains('P')){
                int segmentRow = ui->segments_table->rowCount();
                ui->segments_table->insertRow(segmentRow);
                ui->segments_table->setItem(segmentRow , 0, new QTableWidgetItem(mm.segments[i].name));
                ui->segments_table->setItem(segmentRow , 1, new QTableWidgetItem(QString::number(mm.segments[i].base)));
                ui->segments_table->setItem(segmentRow , 2, new QTableWidgetItem(QString::number(mm.segments[i].limit)));
                ui->segments_table->setItem(segmentRow , 3, new QTableWidgetItem("DeAllocate Process"));
                ui->segments_table->item(segmentRow , 3)->setForeground(QBrush(QColor(255, 0, 0)));
                continue;
            }
            int segmentRow = ui->segments_table->rowCount();
            ui->segments_table->insertRow(segmentRow);
            ui->segments_table->setItem(segmentRow , 0, new QTableWidgetItem("Process " + QString::number(mm.segments[i].process_number)));
            ui->segments_table->setItem(segmentRow , 3, new QTableWidgetItem("DeAllocate Process"));
            ui->segments_table->item(segmentRow , 3)->setForeground(QBrush(QColor(255, 0, 0)));
        }
        o = mm.segments[i].process_number;
        int segmentRow = ui->segments_table->rowCount();
        ui->segments_table->insertRow(segmentRow);
        ui->segments_table->setItem(segmentRow , 1, new QTableWidgetItem(mm.segments[i].name));
        ui->segments_table->setItem(segmentRow , 2, new QTableWidgetItem(QString::number(mm.segments[i].limit)));
    }
}

void MainWindow::on_Done_clicked()
{
    input(mm);
    table_Draw();
    update();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->Enter_Hole_button->hide();
    ui->hole_Address->hide();
    ui->hole_Size->hide();
    ui->Done->hide();
    ui->Allocate_button->show();
    ui->Enter_button->hide();
}


void MainWindow::on_Allocation_Method_Button_clicked()
{
    QString Method = QVariant(ui->Allocation_Method->currentIndex()).toString();
    if(Method == '0'){//Best fit
        Method = '1';
        allocation(mm,new_processes,Method);
        new_processes.clear();
        update();
    }
    else if(Method == '1'){//First Fit
        Method = '2';
        allocation(mm,new_processes,Method);
        new_processes.clear();
        update();
    }
    else if(Method == '2'){//Worst Fit
        Method = '3';
        allocation(mm,new_processes,Method);
        new_processes.clear();
        update();
    }
    table_Draw();
    ui->Allocation_Method_Button->hide();
    ui->Allocation_Method->hide();
}

