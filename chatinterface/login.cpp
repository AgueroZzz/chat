#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
    if(_register){
        delete _register;
        _register = nullptr;
    }
}

void login::on_register_btn_clicked()
{
    _register = new register_dialog;
    _register->show();
}

