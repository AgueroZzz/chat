#include "register_dialog.h"
#include "ui_register_dialog.h"

register_dialog::register_dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::register_dialog)
{
    ui->setupUi(this);
}

register_dialog::~register_dialog()
{
    delete ui;
}
