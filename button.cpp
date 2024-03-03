#include "button.h"
#include "ui_button.h"

#include <QDebug>

Button::Button(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Button)
{
    ui->setupUi(this);
}

Button::~Button()
{
    delete ui;
}



void Button::on_pushButton_clicked()
{
    qDebug() << "clicked 1";
}




void Button::on_pushButton_2_clicked()
{
    qDebug() << "clicked 2";
}



