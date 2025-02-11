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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QComboBox *Allocation_Method;
    QLabel *label_7;
    QLineEdit *segment_size;
    QPushButton *Allocation_Method_Button;
    QPushButton *Enter_button;
    QLineEdit *segment_name;
    QLabel *label_5;
    QLineEdit *hole_Size;
    QSpacerItem *verticalSpacer;
    QLineEdit *segments_number;
    QPushButton *Enter_Hole_button;
    QPushButton *segments_number_button;
    QLabel *label_3;
    QPushButton *Allocate_button;
    QPushButton *pushButton;
    QLabel *label_6;
    QPushButton *Done;
    QPushButton *enter_segment;
    QPushButton *reset_Button;
    QLineEdit *hole_Address;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *Memory_size;
    QTableWidget *segments_table;
    QVBoxLayout *verticalLayout;
    QWidget *output_widget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1038, 1603);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        Allocation_Method = new QComboBox(centralwidget);
        Allocation_Method->addItem(QString());
        Allocation_Method->addItem(QString());
        Allocation_Method->addItem(QString());
        Allocation_Method->setObjectName(QString::fromUtf8("Allocation_Method"));
        Allocation_Method->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"border-radius: 5px;\n"
"background-color: #FFF;\n"
"height: 40px;\n"
"color: black;\n"
"}"));

        gridLayout_2->addWidget(Allocation_Method, 29, 0, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_7->setFont(font);

        gridLayout_2->addWidget(label_7, 22, 0, 1, 3);

        segment_size = new QLineEdit(centralwidget);
        segment_size->setObjectName(QString::fromUtf8("segment_size"));
        segment_size->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border-radius:5px;\n"
"height: 30px;\n"
" border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"}"));

        gridLayout_2->addWidget(segment_size, 24, 0, 1, 3);

        Allocation_Method_Button = new QPushButton(centralwidget);
        Allocation_Method_Button->setObjectName(QString::fromUtf8("Allocation_Method_Button"));
        Allocation_Method_Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 5px;\n"
"background-color: #04AA6D;\n"
"height: 40px;\n"
"color: white;\n"
"}"));

        gridLayout_2->addWidget(Allocation_Method_Button, 31, 0, 1, 1);

        Enter_button = new QPushButton(centralwidget);
        Enter_button->setObjectName(QString::fromUtf8("Enter_button"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Century Gothic"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        Enter_button->setFont(font1);
        Enter_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 5px;\n"
"background-color: #04AA6D;\n"
"height: 40px;\n"
"color: white;\n"
"\n"
"}"));

        gridLayout_2->addWidget(Enter_button, 3, 0, 1, 2);

        segment_name = new QLineEdit(centralwidget);
        segment_name->setObjectName(QString::fromUtf8("segment_name"));
        segment_name->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border-radius:5px;\n"
"height: 30px;\n"
" border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"}"));

        gridLayout_2->addWidget(segment_name, 21, 0, 1, 3);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout_2->addWidget(label_5, 17, 0, 1, 2);

        hole_Size = new QLineEdit(centralwidget);
        hole_Size->setObjectName(QString::fromUtf8("hole_Size"));
        hole_Size->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border-radius:5px;\n"
"height: 30px;\n"
" border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"}"));

        gridLayout_2->addWidget(hole_Size, 9, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 28, 0, 1, 1);

        segments_number = new QLineEdit(centralwidget);
        segments_number->setObjectName(QString::fromUtf8("segments_number"));
        segments_number->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border-radius:5px;\n"
"height: 30px;\n"
" border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"}"));

        gridLayout_2->addWidget(segments_number, 18, 0, 1, 2);

        Enter_Hole_button = new QPushButton(centralwidget);
        Enter_Hole_button->setObjectName(QString::fromUtf8("Enter_Hole_button"));
        Enter_Hole_button->setFont(font1);
        Enter_Hole_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 5px;\n"
"background-color: #04AA6D;\n"
"height: 40px;\n"
"color: white;\n"
"}"));

        gridLayout_2->addWidget(Enter_Hole_button, 12, 0, 1, 2);

        segments_number_button = new QPushButton(centralwidget);
        segments_number_button->setObjectName(QString::fromUtf8("segments_number_button"));
        segments_number_button->setFont(font1);
        segments_number_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 5px;\n"
"background-color: #04AA6D;\n"
"height: 40px;\n"
"color: white;\n"
"}"));

        gridLayout_2->addWidget(segments_number_button, 19, 0, 1, 2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout_2->addWidget(label_3, 4, 0, 1, 2);

        Allocate_button = new QPushButton(centralwidget);
        Allocate_button->setObjectName(QString::fromUtf8("Allocate_button"));
        Allocate_button->setFont(font1);
        Allocate_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 5px;\n"
"background-color: #04AA6D;\n"
"height: 40px;\n"
"color: white;\n"
"}"));

        gridLayout_2->addWidget(Allocate_button, 16, 0, 1, 2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 5px;\n"
"background-color: #04AA6D;\n"
"height: 40px;\n"
"color: white;\n"
"}"));

        gridLayout_2->addWidget(pushButton, 32, 0, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout_2->addWidget(label_6, 20, 0, 1, 2);

        Done = new QPushButton(centralwidget);
        Done->setObjectName(QString::fromUtf8("Done"));
        Done->setFont(font1);
        Done->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 5px;\n"
"background-color: #04AA6D;\n"
"height: 40px;\n"
"color: white;\n"
"}"));

        gridLayout_2->addWidget(Done, 13, 0, 1, 2);

        enter_segment = new QPushButton(centralwidget);
        enter_segment->setObjectName(QString::fromUtf8("enter_segment"));
        enter_segment->setFont(font1);
        enter_segment->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 5px;\n"
"background-color: #04AA6D;\n"
"height: 40px;\n"
"color: white;\n"
"}"));

        gridLayout_2->addWidget(enter_segment, 25, 0, 1, 2);

        reset_Button = new QPushButton(centralwidget);
        reset_Button->setObjectName(QString::fromUtf8("reset_Button"));
        reset_Button->setFont(font1);
        reset_Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 5px;\n"
"background-color: #04AA6D;\n"
"height: 40px;\n"
"color: white;\n"
"}"));

        gridLayout_2->addWidget(reset_Button, 33, 0, 1, 1);

        hole_Address = new QLineEdit(centralwidget);
        hole_Address->setObjectName(QString::fromUtf8("hole_Address"));
        hole_Address->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border-radius:5px;\n"
"height: 30px;\n"
" border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"}"));

        gridLayout_2->addWidget(hole_Address, 5, 0, 1, 2);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout_2->addWidget(label, 0, 0, 1, 2);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout_2->addWidget(label_4, 6, 0, 1, 2);

        Memory_size = new QLineEdit(centralwidget);
        Memory_size->setObjectName(QString::fromUtf8("Memory_size"));
        Memory_size->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border-radius:5px;\n"
"height: 30px;\n"
" border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"}"));

        gridLayout_2->addWidget(Memory_size, 1, 0, 1, 2);

        segments_table = new QTableWidget(centralwidget);
        if (segments_table->columnCount() < 4)
            segments_table->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        segments_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        segments_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        segments_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font2);
        __qtablewidgetitem3->setBackground(QColor(255, 255, 255));
        __qtablewidgetitem3->setForeground(brush);
        segments_table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        segments_table->setObjectName(QString::fromUtf8("segments_table"));
        segments_table->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(6);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(segments_table->sizePolicy().hasHeightForWidth());
        segments_table->setSizePolicy(sizePolicy);
        segments_table->setMouseTracking(false);
        segments_table->setLayoutDirection(Qt::LeftToRight);
        segments_table->setAutoFillBackground(false);
        segments_table->setStyleSheet(QString::fromUtf8("QTableWidget{\n"
"	max-height : 1500px;\n"
"	min-height : 500px;\n"
"	margin-top: 10px;\n"
"}"));
        segments_table->setFrameShape(QFrame::StyledPanel);
        segments_table->setFrameShadow(QFrame::Sunken);
        segments_table->setShowGrid(true);
        segments_table->setSortingEnabled(false);
        segments_table->setColumnCount(4);
        segments_table->horizontalHeader()->setVisible(false);
        segments_table->horizontalHeader()->setCascadingSectionResizes(false);
        segments_table->horizontalHeader()->setMinimumSectionSize(33);
        segments_table->horizontalHeader()->setDefaultSectionSize(157);
        segments_table->horizontalHeader()->setHighlightSections(true);
        segments_table->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        segments_table->horizontalHeader()->setStretchLastSection(true);
        segments_table->verticalHeader()->setCascadingSectionResizes(true);
        segments_table->verticalHeader()->setProperty("showSortIndicator", QVariant(false));

        gridLayout_2->addWidget(segments_table, 34, 0, 2, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        gridLayout_3->addLayout(verticalLayout, 0, 3, 1, 1);

        output_widget = new QWidget(centralwidget);
        output_widget->setObjectName(QString::fromUtf8("output_widget"));
        output_widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"min-width: 300px;\n"
"margin-right: 20px;\n"
"}"));

        gridLayout_3->addWidget(output_widget, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1038, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Memory Allocation", nullptr));
        Allocation_Method->setItemText(0, QCoreApplication::translate("MainWindow", "Best Fit", nullptr));
        Allocation_Method->setItemText(1, QCoreApplication::translate("MainWindow", "First Fit", nullptr));
        Allocation_Method->setItemText(2, QCoreApplication::translate("MainWindow", "Worst FIt", nullptr));

        label_7->setText(QCoreApplication::translate("MainWindow", "Segment Size", nullptr));
        Allocation_Method_Button->setText(QCoreApplication::translate("MainWindow", "Allocate", nullptr));
        Enter_button->setText(QCoreApplication::translate("MainWindow", "Add New Hole", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Segments Number", nullptr));
        Enter_Hole_button->setText(QCoreApplication::translate("MainWindow", "Enter hole", nullptr));
        segments_number_button->setText(QCoreApplication::translate("MainWindow", "Enter Segments Information", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Address", nullptr));
        Allocate_button->setText(QCoreApplication::translate("MainWindow", "Add New Process", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Compact", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Segment Name", nullptr));
        Done->setText(QCoreApplication::translate("MainWindow", "Done", nullptr));
        enter_segment->setText(QCoreApplication::translate("MainWindow", "Enter Segment", nullptr));
        reset_Button->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Memory size", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Size", nullptr));
        QTableWidgetItem *___qtablewidgetitem = segments_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Process", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = segments_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Segment Address ", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = segments_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Segment Size", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = segments_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "deAllocate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
