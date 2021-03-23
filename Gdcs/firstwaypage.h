#ifndef FIRSTWAYPAGE_H
#define FIRSTWAYPAGE_H

#include <QWidget>

namespace Ui {
class FirstWayPage;
}

class FirstWayPage : public QWidget
{
    Q_OBJECT

public:
    explicit FirstWayPage(QWidget *parent = nullptr);
    ~FirstWayPage();
    //PaintEvent事件
    void paintEvent(QPaintEvent *);
    //创建返回按钮
    void createBackBt();
    //加载第一路数据
    void loadData();

signals:
    //写一个自定义信号，告诉主页面  点击了返回
     void firstWayPageBack();

private:
    Ui::FirstWayPage *ui;
};

#endif // FIRSTWAYPAGE_H
