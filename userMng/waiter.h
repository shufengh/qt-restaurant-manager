#ifndef WAITER_H
#define WAITER_H

#include <QWidget>
#include <QSqlTableModel>

namespace Ui {
    class Waiter;
}

class Waiter : public QWidget {
    Q_OBJECT
public:
    Waiter(QWidget *parent = 0);
    ~Waiter();
    void iniTableView();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::Waiter *ui;
    QSqlTableModel *model;

private slots:
    void on_pushButton_check_2_clicked();
    void on_pushButton_check_clicked();
    void on_pushButton_back_clicked();
    void on_pushButton_undo_clicked();
    void on_pushButton_desc_clicked();
    void on_pushButton_asc_clicked();
    void on_pushButton_delete_clicked();
    void on_pushButton_add_clicked();
    void on_pushButton_submit_clicked();
};

#endif // WAITER_H
