#ifndef OTHERWAYPAGE_H
#define OTHERWAYPAGE_H

#include <QWidget>

namespace Ui {
class OtherWayPage;
}

class OtherWayPage : public QWidget
{
    Q_OBJECT

public:
    explicit OtherWayPage(QWidget *parent = nullptr);
    //重写构造函数，根据不同的index创建不同路页面
    OtherWayPage(int wayNum);
    ~OtherWayPage();
   //内部成员属性 记录第几路index
    int wayIndex;

    //PaintEvent事件
    void paintEvent(QPaintEvent *);

signals:
    //写一个自定义信号，告诉主页面  点击了返回
     void otherWayPageBack();

private:
    Ui::OtherWayPage *ui;
};

#endif // OTHERWAYPAGE_H
