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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QPushButton *Enter_Hole_button;
    QLabel *label_6;
    QPushButton *Allocate_button;
    QPushButton *reset_Button;
    QLineEdit *hole_Size;
    QLabel *label_7;
    QLineEdit *Holes_number;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *Memory_size;
    QTableWidget *segments_table;
    QPushButton *enter_segment;
    QLineEdit *segments_number;
    QLabel *label_4;
    QPushButton *Enter_button;
    QLineEdit *segment_name;
    QPushButton *segments_number_button;
    QLineEdit *hole_Address;
    QLabel *label_5;
    QWidget *output_widget;
    QLineEdit *segment_size;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1117, 1093);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        Enter_Hole_button = new QPushButton(centralwidget);
        Enter_Hole_button->setObjectName(QString::fromUtf8("Enter_Hole_button"));

        gridLayout_2->addWidget(Enter_Hole_button, 14, 0, 1, 2);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 20, 0, 1, 2);

        Allocate_button = new QPushButton(centralwidget);
        Allocate_button->setObjectName(QString::fromUtf8("Allocate_button"));

        gridLayout_2->addWidget(Allocate_button, 16, 0, 1, 2);

        reset_Button = new QPushButton(centralwidget);
        reset_Button->setObjectName(QString::fromUtf8("reset_Button"));

        gridLayout_2->addWidget(reset_Button, 27, 0, 1, 2);

        hole_Size = new QLineEdit(centralwidget);
        hole_Size->setObjectName(QString::fromUtf8("hole_Size"));

        gridLayout_2->addWidget(hole_Size, 11, 0, 1, 2);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 22, 0, 1, 2);

        Holes_number = new QLineEdit(centralwidget);
        Holes_number->setObjectName(QString::fromUtf8("Holes_number"));

        gridLayout_2->addWidget(Holes_number, 3, 0, 1, 2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 6, 0, 1, 2);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 2);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 2);

        Memory_size = new QLineEdit(centralwidget);
        Memory_size->setObjectName(QString::fromUtf8("Memory_size"));

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
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
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
"	min-height : 700px;\n"
"	max-width :1500px;\n"
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

        gridLayout_2->addWidget(segments_table, 28, 0, 2, 1);

        enter_segment = new QPushButton(centralwidget);
        enter_segment->setObjectName(QString::fromUtf8("enter_segment"));

        gridLayout_2->addWidget(enter_segment, 25, 0, 1, 2);

        segments_number = new QLineEdit(centralwidget);
        segments_number->setObjectName(QString::fromUtf8("segments_number"));

        gridLayout_2->addWidget(segments_number, 18, 0, 1, 2);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 8, 0, 1, 2);

        Enter_button = new QPushButton(centralwidget);
        Enter_button->setObjectName(QString::fromUtf8("Enter_button"));

        gridLayout_2->addWidget(Enter_button, 5, 0, 1, 2);

        segment_name = new QLineEdit(centralwidget);
        segment_name->setObjectName(QString::fromUtf8("segment_name"));

        gridLayout_2->addWidget(segment_name, 21, 0, 1, 2);

        segments_number_button = new QPushButton(centralwidget);
        segments_number_button->setObjectName(QString::fromUtf8("segments_number_button"));

        gridLayout_2->addWidget(segments_number_button, 19, 0, 1, 2);

        hole_Address = new QLineEdit(centralwidget);
        hole_Address->setObjectName(QString::fromUtf8("hole_Address"));

        gridLayout_2->addWidget(hole_Address, 7, 0, 1, 2);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 17, 0, 1, 2);

        output_widget = new QWidget(centralwidget);
        output_widget->setObjectName(QString::fromUtf8("output_widget"));
        output_widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"min-width: 300px;\n"
"\n"
"}"));

        gridLayout_2->addWidget(output_widget, 28, 1, 2, 1);

        segment_size = new QLineEdit(centralwidget);
        segment_size->setObjectName(QString::fromUtf8("segment_size"));

        gridLayout_2->addWidget(segment_size, 24, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 26, 0, 1, 2);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1117, 26));
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
        Enter_Hole_button->setText(QCoreApplication::translate("MainWindow", "Enter hole", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Segment Name", nullptr));
        Allocate_button->setText(QCoreApplication::translate("MainWindow", "Add New Process", nullptr));
        reset_Button->setText(QCoreApplication::translate("MainWindow", "RESET", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Segment Size", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Address", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Holes number", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Memory size", nullptr));
        QTableWidgetItem *___qtablewidgetitem = segments_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Process", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = segments_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Segment Address ", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = segments_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Segment Size", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = segments_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "deAllocate", nullptr));
        enter_segment->setText(QCoreApplication::translate("MainWindow", "Enter Segment", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Size", nullptr));
        Enter_button->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
        segments_number_button->setText(QCoreApplication::translate("MainWindow", "Enter Segments Information", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Segments Number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
