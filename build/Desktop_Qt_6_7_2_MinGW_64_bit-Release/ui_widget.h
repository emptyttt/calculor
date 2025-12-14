/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_reve;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_rociprocal;
    QPushButton *pushButton_square;
    QPushButton *pushButton_evolution;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_divi;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_mult;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_0;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_add;
    QPushButton *pushButton_equal;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(419, 498);
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(40, 20, 341, 81));
        pushButton_clear = new QPushButton(Widget);
        pushButton_clear->setObjectName("pushButton_clear");
        pushButton_clear->setGeometry(QRect(40, 120, 71, 41));
        pushButton_reve = new QPushButton(Widget);
        pushButton_reve->setObjectName("pushButton_reve");
        pushButton_reve->setGeometry(QRect(130, 120, 71, 41));
        pushButton_mod = new QPushButton(Widget);
        pushButton_mod->setObjectName("pushButton_mod");
        pushButton_mod->setGeometry(QRect(220, 120, 71, 41));
        pushButton_delete = new QPushButton(Widget);
        pushButton_delete->setObjectName("pushButton_delete");
        pushButton_delete->setGeometry(QRect(310, 120, 71, 41));
        pushButton_rociprocal = new QPushButton(Widget);
        pushButton_rociprocal->setObjectName("pushButton_rociprocal");
        pushButton_rociprocal->setGeometry(QRect(40, 180, 71, 41));
        pushButton_square = new QPushButton(Widget);
        pushButton_square->setObjectName("pushButton_square");
        pushButton_square->setGeometry(QRect(130, 180, 71, 41));
        pushButton_evolution = new QPushButton(Widget);
        pushButton_evolution->setObjectName("pushButton_evolution");
        pushButton_evolution->setGeometry(QRect(220, 180, 71, 41));
        pushButton_7 = new QPushButton(Widget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(40, 240, 71, 41));
        pushButton_8 = new QPushButton(Widget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(130, 240, 71, 41));
        pushButton_9 = new QPushButton(Widget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(220, 240, 71, 41));
        pushButton_divi = new QPushButton(Widget);
        pushButton_divi->setObjectName("pushButton_divi");
        pushButton_divi->setGeometry(QRect(310, 180, 71, 41));
        pushButton_4 = new QPushButton(Widget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(40, 300, 71, 41));
        pushButton_5 = new QPushButton(Widget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(130, 300, 71, 41));
        pushButton_6 = new QPushButton(Widget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(220, 300, 71, 41));
        pushButton_mult = new QPushButton(Widget);
        pushButton_mult->setObjectName("pushButton_mult");
        pushButton_mult->setGeometry(QRect(310, 240, 71, 41));
        pushButton_1 = new QPushButton(Widget);
        pushButton_1->setObjectName("pushButton_1");
        pushButton_1->setGeometry(QRect(40, 360, 71, 41));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(130, 360, 71, 41));
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(220, 360, 71, 41));
        pushButton_minus = new QPushButton(Widget);
        pushButton_minus->setObjectName("pushButton_minus");
        pushButton_minus->setGeometry(QRect(310, 300, 71, 41));
        pushButton_0 = new QPushButton(Widget);
        pushButton_0->setObjectName("pushButton_0");
        pushButton_0->setGeometry(QRect(40, 420, 161, 41));
        pushButton_dot = new QPushButton(Widget);
        pushButton_dot->setObjectName("pushButton_dot");
        pushButton_dot->setGeometry(QRect(220, 420, 71, 41));
        pushButton_add = new QPushButton(Widget);
        pushButton_add->setObjectName("pushButton_add");
        pushButton_add->setGeometry(QRect(310, 360, 71, 41));
        pushButton_equal = new QPushButton(Widget);
        pushButton_equal->setObjectName("pushButton_equal");
        pushButton_equal->setGeometry(QRect(310, 420, 71, 41));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("Widget", "AC", nullptr));
        pushButton_reve->setText(QCoreApplication::translate("Widget", "+/-", nullptr));
        pushButton_mod->setText(QCoreApplication::translate("Widget", "%", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("Widget", "\342\206\220", nullptr));
        pushButton_rociprocal->setText(QCoreApplication::translate("Widget", "1/x", nullptr));
        pushButton_square->setText(QCoreApplication::translate("Widget", "x^2", nullptr));
        pushButton_evolution->setText(QCoreApplication::translate("Widget", "x^(1/2)", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Widget", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Widget", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Widget", "9", nullptr));
        pushButton_divi->setText(QCoreApplication::translate("Widget", "\342\236\227", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Widget", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Widget", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Widget", "6", nullptr));
        pushButton_mult->setText(QCoreApplication::translate("Widget", "\342\234\226", nullptr));
        pushButton_1->setText(QCoreApplication::translate("Widget", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "3", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("Widget", "\342\236\226", nullptr));
        pushButton_0->setText(QCoreApplication::translate("Widget", "0", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("Widget", ".", nullptr));
        pushButton_add->setText(QCoreApplication::translate("Widget", "\342\236\225", nullptr));
        pushButton_equal->setText(QCoreApplication::translate("Widget", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
