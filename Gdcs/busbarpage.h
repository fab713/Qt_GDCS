#ifndef BUSBARPAGE_H
#define BUSBARPAGE_H

#include <QWidget>
#include<QListWidget>

namespace Ui {
class BusBarPage;
}

class BusBarPage : public QWidget
{
    Q_OBJECT

public:
    explicit BusBarPage(QWidget *parent = nullptr);
    ~BusBarPage();
    //重新paintEvent事件 画背景图
    void paintEvent(QPaintEvent *);
    //初始化母线主数据
    void initTotalData();
signals:
    //写一个自定义信号，告诉主页面  点击了返回
     void busBarPageBack();

private:
    Ui::BusBarPage *ui;
};

#endif // BUSBARPAGE_H
