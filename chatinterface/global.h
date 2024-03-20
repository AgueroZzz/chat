#ifndef GLOBAL_H
#define GLOBAL_H
#include <QWidget>
#include <functional>
#include <QRegularExpression>
#include "QStyle"

// 函数指针:用于刷新qss
extern std::function<void(QWidget*)> repolish;

#endif // GLOBAL_H
