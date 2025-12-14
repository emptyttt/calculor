#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    QString a;
    QStringList b;
    QString c;

private slots:
    void on_pushButton_0_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();



    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_dot_clicked();

    void on_pushButton_divi_clicked();

    void on_pushButton_mult_clicked();

    void on_pushButton_minus_clicked();

    void on_pushButton_add_clicked();

    void on_pushButton_equal_clicked();

    void on_pushButton_rociprocal_clicked();

    void on_pushButton_square_clicked();

    void on_pushButton_evolution_clicked();

    void on_pushButton_delete_clicked();

    void on_pushButton_mod_clicked();

    void on_pushButton_reve_clicked();

    void on_pushButton_clear_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
