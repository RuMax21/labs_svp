#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    WinLab6 = new Lab6;
    WinLab7 = new Lab7;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_lab6_clicked()
{
    WinLab6 -> show();
}


void MainWindow::on_pushButton_clicked()
{
    WinLab7 -> show();
}

