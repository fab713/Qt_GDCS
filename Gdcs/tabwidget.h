#ifndef TABWIDGET_H
#define TABWIDGET_H

#include <QWidget>

namespace Ui {
class TabWidget;
}

class TabWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TabWidget(QWidget *parent = nullptr);
    ~TabWidget();
    //创建返回按钮
    void createBackBt();
    //初始化总数total
    void initTotalTable();
    //初始化总数total
    void initaVoltageTable();
    //初始化总数total
    void initbVoltageTable();
    //初始化总数total
    void initcVoltageTable();
signals:
    //写一个自定义信号，告诉主页面  点击了返回
     void tabWidgetBack();

private:
    Ui::TabWidget *ui;
};

#endif // TABWIDGET_H
