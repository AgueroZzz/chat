#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _loginWindow = new login();
    setCentralWidget(_loginWindow);
    _loginWindow->show();

    _register = new register_dialog();
}

MainWindow::~MainWindow()
{
    delete ui;
    if(_loginWindow){
        delete _loginWindow;
        _loginWindow = nullptr;
    }
}
