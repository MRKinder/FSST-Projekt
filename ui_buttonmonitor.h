/********************************************************************************
** Form generated from reading UI file 'buttonmonitor.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUTTONMONITOR_H
#define UI_BUTTONMONITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ButtonMonitor
{
public:
    QLabel *but1;
    QLabel *but2;
    QLabel *but3;

    void setupUi(QWidget *ButtonMonitor)
    {
        if (ButtonMonitor->objectName().isEmpty())
            ButtonMonitor->setObjectName(QStringLiteral("ButtonMonitor"));
        ButtonMonitor->resize(522, 444);
        but1 = new QLabel(ButtonMonitor);
        but1->setObjectName(QStringLiteral("but1"));
        but1->setGeometry(QRect(60, 80, 81, 281));
        but1->setStyleSheet(QLatin1String("background-color:rgb(0, 0, 0);\n"
"Text-color:rgb(255, 255, 255)"));
        but2 = new QLabel(ButtonMonitor);
        but2->setObjectName(QStringLiteral("but2"));
        but2->setGeometry(QRect(190, 70, 91, 301));
        but2->setStyleSheet(QLatin1String("background-color:rgb(0, 0, 0);\n"
"Text-color:rgb(255, 255, 255)"));
        but3 = new QLabel(ButtonMonitor);
        but3->setObjectName(QStringLiteral("but3"));
        but3->setGeometry(QRect(340, 70, 91, 301));
        but3->setStyleSheet(QLatin1String("background-color:rgb(0, 0, 0);\n"
"Text-color:rgb(255, 255, 255);"));

        retranslateUi(ButtonMonitor);

        QMetaObject::connectSlotsByName(ButtonMonitor);
    } // setupUi

    void retranslateUi(QWidget *ButtonMonitor)
    {
        ButtonMonitor->setWindowTitle(QApplication::translate("ButtonMonitor", "ButtonMonitor", Q_NULLPTR));
        but1->setText(QApplication::translate("ButtonMonitor", "TextLabel", Q_NULLPTR));
        but2->setText(QApplication::translate("ButtonMonitor", "TextLabel", Q_NULLPTR));
        but3->setText(QApplication::translate("ButtonMonitor", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ButtonMonitor: public Ui_ButtonMonitor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTTONMONITOR_H
