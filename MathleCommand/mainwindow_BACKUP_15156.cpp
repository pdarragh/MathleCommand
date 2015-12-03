#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include <QDebug>
#include "Box2D/Box2D.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Dialog* login = new Dialog;
    if( login->exec() == QDialog::Accepted)
    {

        qDebug() << login->username;
        //return;
    }

   equations = new EquationGenerator;
   ui->equation->setText(equations->generateEquations(EquationGenerator::Addition));

   // TODO: Check if user is student or teacher
   teacher = true;

   // In future this will be triggered by a button in the student account window
   displayGameWindow();

   // Creates the appropriate account display type for the user
   /*if (teacher)
   {
<<<<<<< HEAD
       ui->stackedWidget->setCurrentIndex(0);
       displayTeacherAccount();
   }
   else
   {
       ui->stackedWidget->setCurrentIndex(1);
       displayStudentAccount();
   }*/
=======
       //displayTeacherAccount();
       ui->stackedWidget->setCurrentIndex(0);
   }
   else
   {
       //displayStudentAccount();
       ui->stackedWidget->setCurrentIndex(1);
   }
>>>>>>> feature/5
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*
 * displayTeacherAccount()
 *
 * Causes the display for a teacher to appear
 */
<<<<<<< HEAD
void MainWindow::displayTeacherAccount()
{
=======
//displayTeacherAccount()
//{
>>>>>>> feature/5

//}

/*
 * displayStudentAccount()
 *
 * Causes the display for a student to appear. This should include buttons linking to the game's
 * levels and a display of that level's current high score; a large display area for the student's
 * name; a main menu button that opens the game in a new tab; and a button linking to the scoreboard.
 */
<<<<<<< HEAD
void MainWindow::displayStudentAccount()
{


}

void MainWindow::displayGameWindow()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_answerButton_clicked()
{
    if(ui->answerBox->text() == QString::number(equations->answer))
    {
        QPalette pal = ui->answerBox->palette();
        pal.setColor(ui->answerBox->backgroundRole(), Qt::green);
        ui->answerBox->setPalette(pal);
    }
    else
    {
        QPalette pal = ui->answerBox->palette();
        pal.setColor(ui->answerBox->backgroundRole(), Qt::red);
        ui->answerBox->setPalette(pal);
    }
}
=======
//displayStudentAccount()
//{
//   QPushButton main_menu("Main Menu", this);
//   main_menu->setGeometry(QRect(QPoint(100, 150), QSize(100, 100)));


//}
>>>>>>> feature/5
