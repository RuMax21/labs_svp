#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "lab6.h"
#include "lab7.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_lab6_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Lab6* WinLab6;
    Lab7* WinLab7;
};
#endif // MAINWINDOW_H
