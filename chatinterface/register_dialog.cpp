#include "register_dialog.h"
#include "ui_register_dialog.h"
#include "global.h"

register_dialog::register_dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::register_dialog)
{
    ui->setupUi(this);
    ui->pass_edit->setEchoMode(QLineEdit::Password);
    ui->repass_edit->setEchoMode(QLineEdit::Password);
    ui->error_label->setProperty("state", "normal");
    repolish(ui->error_label);
}

register_dialog::~register_dialog()
{
    delete ui;
}

void register_dialog::on_check_btn_clicked()
{
    auto email = ui->email_edit->text();
    QRegularExpression regex(R"((\w+)(\.|_)?(\w*)@(\w+)(\.(\w+))+)");
    bool match = regex.match(email).hasMatch();
    if(match){
        // 发送验证码
    }else{
        showTip(tr("邮箱地址不正确"));
    }
}

void register_dialog::showTip(QString tr)
{
    ui->error_label->setText(tr);
}

