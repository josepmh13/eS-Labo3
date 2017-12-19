#ifndef RADIO_H
#define RADIO_H

#include <QWidget>

namespace Ui {
class Radio;
}

class Radio : public QWidget
{
    Q_OBJECT

public:
    explicit Radio(QWidget *parent = 0);
    ~Radio();

private slots:
    void on_btn_previous_clicked();

    void on_btn_next_clicked();

    void on_pushButton_clicked();

private:
    Ui::Radio *ui;

signals:
    void HomeClicked();

};

#endif // RADIO_H

