#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    this->setWindowTitle(tr("菜单管理系统"));
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    ui->comboBox->addItem(tr("管理员"));
    ui->comboBox->addItem(tr("服务员"));
    ui->comboBox->setCurrentIndex(1);

    this->db = Db::getInstance();

    ui->lineEdit_account->setText("w001");
    ui->lineEdit_2_pwd->setText("a");

    this->userType = 1;
    //qss
//    QString str;
//    str.append("QLabel:hover { ");
//    str.append("font-size: 50px }");
//    str.append("QLabel { ");
//    str.append("font-size: 30px }");
//    str.append("QLabel:clicked { ");
//    str.append("font-size: 60px }");
//    ui->label_title->setStyleSheet(str);
}

Login::~Login()
{
    delete ui;
    db->closeConnection();
}

void Login::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void Login::on_pushButtonlogin_clicked()
{
    ui->label_5_account_warnning->clear();
    ui->label_5_pwd_warning->clear();
    if(ui->lineEdit_account->text() == ""){
        ui->label_5_account_warnning->setText(tr("帐号不能为空"));
        return;
    }
    if(ui->lineEdit_2_pwd->text() ==""){
        ui->label_5_pwd_warning->setText(tr("密码不能为空"));
        return;
    }
    this->userType = ui->comboBox->currentIndex();
    QSqlQuery query;
    QString userName = ui->lineEdit_account->text();
    QString pwd = ui->lineEdit_2_pwd->text();
    if(ui->comboBox->currentIndex() == 1){
        query.exec(tr("select pwd from waitress where name='").append(userName).append("'"));
        if(query.next()){
            if(query.value(0).toString() == pwd){
                this->iface = new interface(this,this->userType);
                iface->show();
             }
            else
                ui->label_5_account_warnning->setText(tr("帐号或密码错误"));
        } else
            ui->label_5_account_warnning->setText(tr("帐号或密码错误"));
    }
    if(ui->comboBox->currentIndex() == 0)
    {
        query.exec(tr("select pwd from admin where name='").append(userName).append("'"));
        if(query.next()){
            if(query.value(0).toString() == pwd){
                this->iface = new interface(this,this->userType);
                iface->show();
            }
            else
                ui->label_5_account_warnning->setText(tr("帐号或密码错误"));
        }else
            ui->label_5_account_warnning->setText(tr("帐号或密码错误"));
    }

}

void Login::on_pushButton_exit_clicked()
{
    close();
}
int Login::getUserType(){
    return this->userType;
}
