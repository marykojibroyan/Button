#ifndef BUTTON_H
#define BUTTON_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Button;
}
QT_END_NAMESPACE

class Button : public QMainWindow
{
    Q_OBJECT

public:
    Button(QWidget *parent = nullptr);
    ~Button();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Button *ui;
};
#endif // BUTTON_H
