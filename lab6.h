#ifndef LAB6_H
#define LAB6_H

#include <QWidget>
#include <QMessageBox>

namespace Ui {
class Lab6;
}

class Lab6 : public QWidget
{
    Q_OBJECT

public:
    explicit Lab6(QWidget *parent = nullptr);
    ~Lab6();


    //Второй способ
private slots:
    //    void on_btn_error_clicked();

    //    void on_btn_warning_clicked();

    //    void on_btn_information_clicked();

    void on_btn_close_clicked();



public:
    void onErrorButtonClicked();
    void onWarningButtonClicked();
    void onInformationButtonClicked();

private:
    Ui::Lab6 *ui;
};

#endif // LAB6_H
