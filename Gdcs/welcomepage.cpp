#include "welcomepage.h"
#include "ui_welcomepage.h"
#include <QPainter>
#include <QTimer>

WelcomePage::WelcomePage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WelcomePage)
{
    ui->setupUi(this);
    //初始化操作
    initWelcome();
}
/**初始化欢迎页面
 * @brief initWelcome
 */
void WelcomePage::initWelcome(){
    //设置窗口大小
    this->setFixedSize(560,480);
    //设置应用图片
    this->setWindowIcon(QPixmap(":/res/Coin0001.png"));
    //设置窗口标题
    this->setWindowTitle("GDCS欢迎页面");

    //todo  初始化一些基础配置信息 该方法待实现  等初始化成功之后跳转到主页面
   initPlatformBaseInfo();
    //定时器 跳转到主页面
    QTimer::singleShot(15000,this,[=](){
     mainPage=new MainPage();
     this->hide();
     mainPage->show();
    });

}

/**初始平台基础化信息
 * @brief WelcomePage::initPlatformBaseInfo
 */
bool  WelcomePage::initPlatformBaseInfo(){
    //todo 待补充
  return false;
}

/**PaintEvent事件
 * @brief WelcomePage::paintEvent
 */
void WelcomePage::paintEvent(QPaintEvent *){
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


WelcomePage::~WelcomePage()
{
    delete ui;
}
