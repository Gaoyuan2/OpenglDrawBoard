/********************************************************************************
** Form generated from reading UI file 'opengl.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENGL_H
#define UI_OPENGL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "glview.h"

QT_BEGIN_NAMESPACE

class Ui_opengl
{
public:
    QWidget *centralwidget;
    QPushButton *Line;
    QPushButton *Triangle;
    QPushButton *Circle;
    QPushButton *Rect;
    QPushButton *RoundRect;
    QPushButton *Arc;
    QPushButton *Move;
    QPushButton *Delete;
    glview *widget;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QMenu *menuFIle;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *opengl)
    {
        if (opengl->objectName().isEmpty())
            opengl->setObjectName(QString::fromUtf8("opengl"));
        opengl->resize(800, 600);
        centralwidget = new QWidget(opengl);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Line = new QPushButton(centralwidget);
        Line->setObjectName(QString::fromUtf8("Line"));
        Line->setGeometry(QRect(10, 90, 91, 41));
        Triangle = new QPushButton(centralwidget);
        Triangle->setObjectName(QString::fromUtf8("Triangle"));
        Triangle->setGeometry(QRect(122, 87, 91, 41));
        Circle = new QPushButton(centralwidget);
        Circle->setObjectName(QString::fromUtf8("Circle"));
        Circle->setGeometry(QRect(10, 150, 91, 41));
        Rect = new QPushButton(centralwidget);
        Rect->setObjectName(QString::fromUtf8("Rect"));
        Rect->setGeometry(QRect(122, 147, 91, 41));
        RoundRect = new QPushButton(centralwidget);
        RoundRect->setObjectName(QString::fromUtf8("RoundRect"));
        RoundRect->setGeometry(QRect(12, 207, 91, 41));
        Arc = new QPushButton(centralwidget);
        Arc->setObjectName(QString::fromUtf8("Arc"));
        Arc->setGeometry(QRect(122, 207, 91, 41));
        Move = new QPushButton(centralwidget);
        Move->setObjectName(QString::fromUtf8("Move"));
        Move->setGeometry(QRect(10, 310, 91, 31));
        Delete = new QPushButton(centralwidget);
        Delete->setObjectName(QString::fromUtf8("Delete"));
        Delete->setGeometry(QRect(120, 310, 91, 31));
        widget = new glview(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(230, 10, 561, 551));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 400, 31, 31));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/opengl/Resources/white.png);"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(100, 450, 31, 31));
        pushButton_4->setStyleSheet(QString::fromUtf8("border-image: url(:/opengl/Resources/grey.png);"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 400, 31, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/opengl/Resources/yellow.png);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 360, 91, 31));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(50, 450, 31, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image: url(:/opengl/Resources/red.png);"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(50, 480, 71, 31));
        pushButton_5->setStyleSheet(QString::fromUtf8("border-image: url(:/opengl/Resources/deepgrey.png);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 50, 91, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 260, 91, 31));
        opengl->setCentralWidget(centralwidget);
        menubar = new QMenuBar(opengl);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuFIle = new QMenu(menubar);
        menuFIle->setObjectName(QString::fromUtf8("menuFIle"));
        opengl->setMenuBar(menubar);
        statusbar = new QStatusBar(opengl);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        opengl->setStatusBar(statusbar);

        menubar->addAction(menuFIle->menuAction());

        retranslateUi(opengl);

        QMetaObject::connectSlotsByName(opengl);
    } // setupUi

    void retranslateUi(QMainWindow *opengl)
    {
        opengl->setWindowTitle(QCoreApplication::translate("opengl", "opengl", nullptr));
        Line->setText(QCoreApplication::translate("opengl", "Line", nullptr));
        Triangle->setText(QCoreApplication::translate("opengl", "Triangle", nullptr));
        Circle->setText(QCoreApplication::translate("opengl", "Circle", nullptr));
        Rect->setText(QCoreApplication::translate("opengl", "Rect", nullptr));
        RoundRect->setText(QCoreApplication::translate("opengl", "RoundRect", nullptr));
        Arc->setText(QCoreApplication::translate("opengl", "Arc", nullptr));
        Move->setText(QCoreApplication::translate("opengl", "\347\247\273\345\212\250", nullptr));
        Delete->setText(QCoreApplication::translate("opengl", "\345\210\240\351\231\244", nullptr));
        pushButton->setText(QCoreApplication::translate("opengl", "\347\231\275", nullptr));
        pushButton_4->setText(QCoreApplication::translate("opengl", "\347\201\260", nullptr));
        pushButton_2->setText(QCoreApplication::translate("opengl", "\351\273\204", nullptr));
        label->setText(QCoreApplication::translate("opengl", "\351\242\234\350\211\262\357\274\232", nullptr));
        pushButton_3->setText(QCoreApplication::translate("opengl", "\347\272\242", nullptr));
        pushButton_5->setText(QCoreApplication::translate("opengl", "\351\273\221\347\201\260", nullptr));
        label_2->setText(QCoreApplication::translate("opengl", "\345\275\242\347\212\266\351\200\211\346\213\251\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("opengl", "\345\212\237\350\203\275\346\223\215\344\275\234\357\274\232", nullptr));
        menuFIle->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class opengl: public Ui_opengl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENGL_H
