#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

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

    void showMessage(QString message);

private slots:
    void on_executeButton_clicked();

    void on_clearButton_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
