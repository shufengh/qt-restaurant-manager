#ifndef TABLE_H
#define TABLE_H

#include <QWidget>
#include <QSqlTableModel>

namespace Ui {
    class Table;
}

class Table : public QWidget {
    Q_OBJECT
public:
    Table(QWidget *parent = 0);
    ~Table();
    void iniTableView();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::Table *ui;
    QSqlTableModel *model;

private slots:
    void on_pushButton_back_2_clicked();
    void on_pushButton_back_clicked();
    void on_pushButton_undo_clicked();
    void on_pushButton_des_clicked();
    void on_pushButton_check_clicked();
    void on_pushButton_asc_clicked();
    void on_pushButton_add_clicked();
    void on_pushButton_delete_clicked();
    void on_pushButton_submit_clicked();
};

#endif // TABLE_H
