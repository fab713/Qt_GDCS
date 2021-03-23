#ifndef WELCOMEPAGE_H
#define WELCOMEPAGE_H

#include <QMainWindow>
#include "mainpage.h"

namespace Ui {
class WelcomePage;
}

class WelcomePage : public QMainWindow
{
    Q_OBJECT

public:
    explicit WelcomePage(QWidget *parent = nullptr);
    ~WelcomePage();
    //PaintEvent事件
    void paintEvent(QPaintEvent *);
    //初始化欢迎页面
    void initWelcome();
    //初始平台基础化信息
    bool initPlatformBaseInfo();

    //主页面
    MainPage *mainPage = NULL;

private:
    Ui::WelcomePage *ui;
};

#endif // WELCOMEPAGE_H
