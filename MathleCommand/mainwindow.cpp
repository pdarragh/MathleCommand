#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "logindialog.h"
#include "socket.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Socket socket;



    LoginDialog* login = new LoginDialog;

    if( login->exec() == QDialog::Accepted )
    {

        //user_selected_dimension = new_sprite->dimension;
        return;
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}
