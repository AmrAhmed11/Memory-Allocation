/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *input_control_widget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *Memory_size;
    QLabel *label_2;
    QLineEdit *Holes_number;
    QPushButton *Enter_button;
    QLabel *label_3;
    QLineEdit *hole_Address;
    QLabel *label_4;
    QLineEdit *hole_Size;
    QPushButton *Enter_Hole_button;
    QPushButton *reset_Button;
    QWidget *output_widget;
    QTableWidget *segments_table;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(847, 637);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        input_control_widget = new QWidget(centralwidget);
        input_control_widget->setObjectName(QString::fromUtf8("input_control_widget"));
        input_control_widget->setGeometry(QRect(0, 0, 401, 381));
        widget = new QWidget(input_control_widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 0, 381, 381));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        Memory_size = new QLineEdit(widget);
        Memory_size->setObjectName(QString::fromUtf8("Memory_size"));

        gridLayout->addWidget(Memory_size, 0, 2, 1, 2);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        Holes_number = new QLineEdit(widget);
        Holes_number->setObjectName(QString::fromUtf8("Holes_number"));

        gridLayout->addWidget(Holes_number, 1, 2, 1, 2);

        Enter_button = new QPushButton(widget);
        Enter_button->setObjectName(QString::fromUtf8("Enter_button"));

        gridLayout->addWidget(Enter_button, 2, 1, 1, 2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        hole_Address = new QLineEdit(widget);
        hole_Address->setObjectName(QString::fromUtf8("hole_Address"));

        gridLayout->addWidget(hole_Address, 3, 2, 1, 2);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        hole_Size = new QLineEdit(widget);
        hole_Size->setObjectName(QString::fromUtf8("hole_Size"));

        gridLayout->addWidget(hole_Size, 4, 2, 1, 2);

        Enter_Hole_button = new QPushButton(widget);
        Enter_Hole_button->setObjectName(QString::fromUtf8("Enter_Hole_button"));

        gridLayout->addWidget(Enter_Hole_button, 5, 1, 1, 1);

        reset_Button = new QPushButton(widget);
        reset_Button->setObjectName(QString::fromUtf8("reset_Button"));

        gridLayout->addWidget(reset_Button, 6, 3, 1, 1);

        output_widget = new QWidget(centralwidget);
        output_widget->setObjectName(QString::fromUtf8("output_widget"));
        output_widget->setGeometry(QRect(400, 0, 441, 381));
        segments_table = new QTableWidget(centralwidget);
        if (segments_table->columnCount() < 3)
            segments_table->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        segments_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        segments_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        segments_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        segments_table->setObjectName(QString::fromUtf8("segments_table"));
        segments_table->setEnabled(false);
        segments_table->setGeometry(QRect(10, 390, 821, 192));
        segments_table->setAutoFillBackground(false);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 847, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Memory size", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Holes number", nullptr));
        Enter_button->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Address", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Size", nullptr));
        Enter_Hole_button->setText(QCoreApplication::translate("MainWindow", "Enter hole", nullptr));
        reset_Button->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        QTableWidgetItem *___qtablewidgetitem = segments_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Process", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = segments_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Segment Address ", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = segments_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Segment Size", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
