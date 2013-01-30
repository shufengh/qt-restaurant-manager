/*
 *  Just feel free and happy hackin'
 *   __huishufeng@gmail.com__
 *
 */

#ifndef CALENDER_H
#define CALENDER_H

#include <QDialog>

namespace Ui {
    class Calender;
}

class Calender : public QDialog {
    Q_OBJECT
public:
    Calender(QWidget *parent = 0);
    ~Calender();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::Calender *ui;
};

#endif // CALENDER_H
