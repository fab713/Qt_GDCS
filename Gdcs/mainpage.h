#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QMainWindow>
#include "busbarpage.h"
#include "firstwaypage.h"
#include "otherwaypage.h"


namespace Ui {
class MainPage;
}

class MainPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainPage(QWidget *parent = nullptr);
    ~MainPage();
    //PaintEvent事件
    void paintEvent(QPaintEvent *);

    //母线页面
    BusBarPage *busBarPage = NULL;
    //第一路主页面
    FirstWayPage *firstWayPage = NULL;
    //其他路主页面
    OtherWayPage *otherWayPage = NULL;
    //初始化母线
    void initbusBar();
    //初始化第一路
    void initFirstWay();
    //初始化第二路
    void initSecondWay();
    //初始化第三路
    void initThirdWay();
    //初始化第四路
    void initFourthWay();
    //初始化第五路
    void initFiveWay();
    //初始化第六路
    void initSixWay();
    //初始化第七路
    void initSevenWay();
    //初始化第八路
    void initEightWay();

    void initOtherWay(int wayNum,QString type);



private:
    Ui::MainPage *ui;
};

#endif // MAINPAGE_H
