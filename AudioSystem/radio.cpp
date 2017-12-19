#include "radio.h"
#include "ui_radio.h"

Radio::Radio(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Radio)
{
    ui->setupUi(this);
}

Radio::~Radio()
{
    delete ui;
}

void Radio::on_btn_previous_clicked()
{
    double actual_station = ui->lcdNumber->value();
    double prev_station = actual_station - 0.3;
    ui->lcdNumber->display(prev_station);
}

void Radio::on_btn_next_clicked()
{
    double actual_station = ui->lcdNumber->value();
    double next_station = actual_station + 0.3;
    ui->lcdNumber->display(next_station);
}


void Radio::on_pushButton_clicked()
{
    emit HomeClicked();
}
