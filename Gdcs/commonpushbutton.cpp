#include "commonpushbutton.h"
#include <QDebug>

//CommonPushButton::CommonPushButton(QWidget *parent) : QWidget(parent)
//{

//}
//构造函数
CommonPushButton::CommonPushButton(QString normalImg,QString pressImg){
      //成员变量normalImgPath保存正常显示图片路径
        this->normalImgPath=normalImg;
      //成员变量pressedImgPath保存按下后显示的图片
        this->pressedImgPath=pressImg;
      //创建QPixmap对象
        QPixmap pixmap;
     //判断是否能够加载正常显示的图片，若不能提示加载失败
         bool ret = pixmap.load(normalImgPath);
        if(!ret){
          qDebug() << normalImg << "加载图片失败!";
        }
      //设置图片的固定尺寸
        this->setFixedSize(pixmap.width(), pixmap.height());
         //设置不规则图片的样式表
        this->setStyleSheet("QPushButton{border:0px;}");
        //设置图标
        this->setIcon(pixmap);
        //设置图标大小
        this->setIconSize(QSize(pixmap.width(),pixmap.height()));
}

void CommonPushButton::mousePressEvent(QMouseEvent *e){
    //选中路径不为空，显示选中图片
    if(pressedImgPath != ""){
     QPixmap pixmap;
     bool ret = pixmap.load(pressedImgPath);
     if(!ret)
       {
         qDebug() << pressedImgPath << "加载图片失败!";
       }
     this->setFixedSize( pixmap.width(), pixmap.height() );
     this->setStyleSheet("QPushButton{border:0px;}");
     this->setIcon(pixmap);
     this->setIconSize(QSize(pixmap.width(),pixmap.height()));
    }
   //交给父类执行按下事件
    return  QPushButton::mousePressEvent(e);
}
/**
 * @brief MyPushButton::MouseReleaseEvent
 * @param e
 */
void CommonPushButton::MouseReleaseEvent(QMouseEvent *e){
    if(normalImgPath != "") //选中路径不为空，显示选中图片
       {
           QPixmap pixmap;
           bool ret = pixmap.load(normalImgPath);
           if(!ret)
           {
               qDebug() << normalImgPath << "加载图片失败!";
           }
           this->setFixedSize( pixmap.width(), pixmap.height() );
           this->setStyleSheet("QPushButton{border:0px;}");
           this->setIcon(pixmap);
           this->setIconSize(QSize(pixmap.width(),pixmap.height()));
       }
       //交给父类执行 释放事件
     return  QPushButton::mouseReleaseEvent(e);
}
