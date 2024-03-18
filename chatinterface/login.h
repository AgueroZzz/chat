#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "register_dialog.h"

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_register_btn_clicked();

private:
    Ui::login *ui;
    register_dialog *_register;
};

#endif // LOGIN_H
