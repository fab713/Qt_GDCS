#ifndef COMMONPUSHBUTTON_H
#define COMMONPUSHBUTTON_H

#include <QWidget>
#include <QPushButton>
/**自定义控件类
 * @brief The CommonPushButton class
 */
class CommonPushButton : public QPushButton
{
    Q_OBJECT
public:
    //explicit CommonPushButton(QWidget *parent = nullptr);
    CommonPushButton(QString normalImg,QString pressImg = "");
      //成员属性 保存用户传入的默认显示路径 以及按下后显示的图片路径
     QString normalImgPath;  //默认显示图片路径
     QString pressedImgPath; //按下后显示图片路径

     //重写按钮按下事件
     void mousePressEvent(QMouseEvent *e);
     //重写按钮释放事件
     void MouseReleaseEvent(QMouseEvent *e);

signals:

public slots:
};

#endif // COMMONPUSHBUTTON_H
