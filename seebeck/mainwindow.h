#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "scpi.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_refreshPushButton_clicked();

    void on_measurePushButton_clicked();

    void on_errorPushButton_clicked();

    void on_openPushButton_clicked();

    void on_configurePushButton_clicked();

    void on_closePushButton_clicked();

private:
    Ui::MainWindow *ui;
    SCPI dev;
};

#endif // MAINWINDOW_H
