#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QPushButton>
#include <QWidget>

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = nullptr);
    ~MyWidget();

public slots:
    void przycisk1Wcisniety();
    void przycisk2Wcisniety();

private:
    QPushButton* przycisk1;
    QPushButton* przycisk2;
    int licznik1;
    int licznik2;

};
#endif // MYWIDGET_H
