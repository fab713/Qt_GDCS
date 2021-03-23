#include "otherwaypage.h"
#include "ui_otherwaypage.h"
#include <QDebug>
#include<QListWidget>
#include<QPainter>
#include"commonpushbutton.h"
#include<QTimer>


OtherWayPage::OtherWayPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OtherWayPage)
{
    ui->setupUi(this);
}
/**构造函数
 * @brief OtherWayPage::OtherWayPage
 * @param wayNum
 */
OtherWayPage::OtherWayPage(int wayNum ){
    ui->setupUi(this);
    QString str = QString("第 %1 路").arg(wayNum);
    qDebug() << str;
    this->wayIndex = wayNum;
    //设置固定大小
    this->setFixedSize(320,400);
    //设置应用图片
    this->setWindowIcon(QPixmap(":/res/Coin0001.png"));
    //设置名称
    this->setWindowTitle(str+"页面");

    //设置值
    QFont font;
    font.setFamily("华文新魏");
    font.setPointSize(12);
    ui->titleLabel->setText(str+"回路");
    ui->titleLabel->setFont(font);
    ui->deviceNameDataLabel->setText("kf5678");
    ui->deviceNameDataLabel->setFont(font);
    ui->lineNameDataLabel->setText("444");
    ui->lineNameDataLabel->setFont(font);

    //创建返回按钮
    CommonPushButton *backBtn=new CommonPushButton(":/res/BackButton.png", ":/res/BackButtonSelected.png");
    backBtn->setParent(this);
    backBtn->move(this->width()-backBtn->width(),this->height()-backBtn->height());

    //返回按钮功能实现
   connect(backBtn,&CommonPushButton::clicked,this,[=](){
       //告诉主页面 我返回了，主页面监听otherWayPage的返回按钮
                //延时返回
           QTimer::singleShot(500,this,[=](){
               //触发自定义信号，关闭自身，该信号写到 signals下做声明
            emit this->otherWayPageBack();
           });
   });
}


/**
 * @brief paintEvent
 */
void OtherWayPage::paintEvent(QPaintEvent *){

    //创建画家，指定绘图设备
    QPainter painter(this);
    //创建QPixmap对象
    QPixmap pix;
    //加载图片
    pix.load(":/res/background.png");
    //绘制背景图
    painter.drawPixmap(0,0,this->width(),this->height(),pix);
    //加载标题
    //pix.load(":/res/Title.png");
    //缩放图片
    pix = pix.scaled(pix.width()*0.5,pix.height()*0.5);
    //绘制标题
    painter.drawPixmap( 10,30,pix.width(),pix.height(),pix);
}

OtherWayPage::~OtherWayPage()
{
    delete ui;
}
