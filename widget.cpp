#include "widget.h"
#include "ui_widget.h"
#include <QtMath>
#include <QString>
#include <QWidget>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_0_clicked()
{
    a+="0";
    ui->lineEdit->setText(a);
}

void Widget::on_pushButton_1_clicked()
{
    a+="1";
    ui->lineEdit->setText(a);
}


void Widget::on_pushButton_2_clicked()
{
    a+="2";
    ui->lineEdit->setText(a);
}


void Widget::on_pushButton_3_clicked()
{
    a+="3";
    ui->lineEdit->setText(a);
}


void Widget::on_pushButton_4_clicked()
{
    a+="4";
    ui->lineEdit->setText(a);
}


void Widget::on_pushButton_5_clicked()
{
    a+="5";
    ui->lineEdit->setText(a);
}


void Widget::on_pushButton_6_clicked()
{
    a+="6";
    ui->lineEdit->setText(a);
}


void Widget::on_pushButton_7_clicked()
{
    a+="7";
    ui->lineEdit->setText(a);
}


void Widget::on_pushButton_8_clicked()
{
    a+="8";
    ui->lineEdit->setText(a);
}


void Widget::on_pushButton_9_clicked()
{
    a+="9";
    ui->lineEdit->setText(a);
}


void Widget::on_pushButton_dot_clicked()
{
    a+=".";
    ui->lineEdit->setText(a);
}


void Widget::on_pushButton_divi_clicked()
{
    b.insert(0,a);
    a.clear();
    b.insert(1,"/");
    ui->lineEdit->setText(a);
}


void Widget::on_pushButton_mult_clicked()
{
    b.insert(0,a);
    a.clear();
    b.insert(1,"*");
    ui->lineEdit->setText(a);
}


void Widget::on_pushButton_minus_clicked()
{
    b.insert(0,a);
    a.clear();
    b.insert(1,"-");
    ui->lineEdit->setText(a);
}


void Widget::on_pushButton_add_clicked()
{
    b.insert(0,a);
    a.clear();
    b.insert(1,"+");
    ui->lineEdit->setText(a);

}


void Widget::on_pushButton_equal_clicked()
{
    if(!a.isEmpty() && !b.isEmpty()){
        b.insert(2,a);
        int v3;
        if(b.at(1)=="+")
        {
            v3=QString(b.at(0)).toInt()+QString(b.at(2)).toInt();
            a=QString::number(v3);
            ui->lineEdit->setText(a);
        }else if(b.at(1)=="-")
        {
            v3=QString(b.at(0)).toInt()-QString(b.at(2)).toInt();
            //ui->lineEdit->setText(QString::number(v3));
            //a=QString::number(v3);
            a=QString::number(v3);
            ui->lineEdit->setText(a);
        }else if(b.at(1)=="*")
        {
            v3=QString(b.at(0)).toInt()*QString(b.at(2)).toInt();
            a=QString::number(v3);
            ui->lineEdit->setText(a);
            //ui->lineEdit->setText(QString::number(v3));
        }else if(b.at(1)=="/")
        {
            v3=QString(b.at(0)).toInt()/QString(b.at(2)).toInt();
            a=QString::number(v3);
            ui->lineEdit->setText(a);
            //ui->lineEdit->setText(QString::number(v3));
        }else if(b.at(1)=="%")
        {
            v3=QString(b.at(0)).toInt()%QString(b.at(2)).toInt();
            a=QString::number(v3);
            ui->lineEdit->setText(a);
            //ui->lineEdit->setText(QString::number(v3));
        }
    }
}


void Widget::on_pushButton_rociprocal_clicked()
{
    double v4;  // 使用 double 类型
    double inputValue = QString(a).toDouble();  // 获取输入的 double 值

    if (inputValue == 0) {
        ui->lineEdit->setText("Error: Division by zero");  // 检查除以零的情况
    } else {
        v4 = 1 / inputValue;  // 计算倒数
        a = QString::number(v4);  // 将结果转换为 QString
        ui->lineEdit->setText(a);  // 显示结果
    }
}


void Widget::on_pushButton_square_clicked()
{
    int v4;
    v4=QString(a).toInt()*QString(a).toInt();
    ui->lineEdit->setText(QString::number(v4));
    a=QString::number(v4);
}


void Widget::on_pushButton_evolution_clicked()
{
    int v4;
    v4=qSqrt(QString(a).toInt());
    ui->lineEdit->setText(QString::number(v4));
    a=QString::number(v4);
}


void Widget::on_pushButton_delete_clicked()
{
    a.chop(1);
    ui->lineEdit->setText(a);
}


void Widget::on_pushButton_mod_clicked()
{
    b.insert(0,a);
    a.clear();
    b.insert(1,"%");
    ui->lineEdit->setText(a);
}


void Widget::on_pushButton_reve_clicked()
{
    a.insert(0,"-");
    ui->lineEdit->setText(a);
}


void Widget::on_pushButton_clear_clicked()
{
    a.clear();
    b.clear();
    ui->lineEdit->setText("0");

}

