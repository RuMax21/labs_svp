#include "lab6.h"
#include "ui_lab6.h"

Lab6::Lab6(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Lab6)
{
    ui->setupUi(this);

    connect(ui->btn_error, &QPushButton::clicked, this, &Lab6::onErrorButtonClicked);
    connect(ui->btn_warning, &QPushButton::clicked, this, &Lab6::onWarningButtonClicked);
    connect(ui->btn_information, &QPushButton::clicked, this, &Lab6::onInformationButtonClicked);
}

Lab6::~Lab6()
{
    delete ui;
}

void Lab6::onErrorButtonClicked(){
    QMessageBox::critical(this,"Ошибка", "тут могла бы быть ваша реклама");
}
void Lab6::onWarningButtonClicked(){
    QMessageBox::warning(this, "Внимание", "тут могла бы быть ваша реклама");
}
void Lab6::onInformationButtonClicked(){
    QMessageBox::information(this, "Информация", "тут могла бы быть ваша реклама");
}
//Второй способ

//void Lab6::on_btn_error_clicked()
//{
//    QMessageBox::critical(this, "Ошибка", "тут могла бы быть ваша реклама");
//}


//void Lab6::on_btn_warning_clicked()
//{
//    QMessageBox::warning(this, "Внимание", "тут могла бы быть ваша реклама");
//}


//void Lab6::on_btn_information_clicked()
//{
//    QMessageBox::information(this, "Информация", "тут могла бы быть ваша реклама");
//}


void Lab6::on_btn_close_clicked()
{
    this->close();
}

