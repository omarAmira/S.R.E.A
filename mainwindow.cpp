#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "bien.h"

#include "QMessageBox"
#include <QValidator>

#include <QtCharts/QChartView>
biens GB;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView->setModel(GB.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
      QString id = ui->lineEdit->text();
        QString adress = ui->lineEdit_2->text();
        int prix = ui->lineEdit_3->text().toInt();
        int surface = ui->lineEdit_4->text().toInt();
        QString dates = ui->lineEdit_5->text();
        int tel = ui->lineEdit_6->text().toInt();
         QString type = ui->comboBox_bien->currentText();
         QString idC = ui->lineEdit_idClient_bien->text();





        biens b(id,adress,prix,surface,dates,tel,type,idC);
        bool test = b.ajouter();
        if(test)
        {
            QMessageBox::information(nullptr, QObject::tr("ajout"),
                        QObject::tr("service ajouté.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

            ui->tableView->setModel(GB.afficher());



    }
        else
            QMessageBox::critical(nullptr, QObject::tr("not OK"),
                        QObject::tr("problème d'ajout.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_pushButton_supprimerBien_clicked()
{
    if(ui->tableView->currentIndex().row()==-1)
            QMessageBox::information(nullptr, QObject::tr("Suppression"),
                                     QObject::tr("Veuillez Choisir un bien du Tableau.\n"
                                                 "Click Cancel to exit."), QMessageBox::Cancel);
        else
        {   QString id=ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->currentIndex().row(),0)).toString();
        bool test = GB.supprimer(id);
        if(test)
        {
            QMessageBox::information(nullptr, QObject::tr("ajout"),
                        QObject::tr("bien supprimé.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

            ui->tableView->setModel(GB.afficher());

    }
        else
            QMessageBox::critical(nullptr, QObject::tr("not OK"),
                        QObject::tr("bien non supprimé .\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

    }
}




void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    ui->lineEdit->setText(ui->tableView->model()->data(ui->tableView->model()->index(index.row(),0)).toString());
    ui->lineEdit_2->setText(ui->tableView->model()->data(ui->tableView->model()->index(index.row(),1)).toString());
    ui->lineEdit_3->setText(ui->tableView->model()->data(ui->tableView->model()->index(index.row(),2)).toString());
    ui->lineEdit_4->setText(ui->tableView->model()->data(ui->tableView->model()->index(index.row(),3)).toString());
    ui->lineEdit_5->setText(ui->tableView->model()->data(ui->tableView->model()->index(index.row(),4)).toString());
    ui->lineEdit_6->setText(ui->tableView->model()->data(ui->tableView->model()->index(index.row(),5)).toString());
    QString type = ui->tableView->model()->data(ui->tableView->model()->index(index.row(),6)).toString();
    ui->comboBox_bien->setCurrentText(type);
    ui->lineEdit_idClient_bien->setText(ui->tableView->model()->data(ui->tableView->model()->index(index.row(),7)).toString());
}


void MainWindow::on_pushButton_3_clicked()
{
    QString id = ui->lineEdit->text();
      QString adress = ui->lineEdit_2->text();
      int prix = ui->lineEdit_3->text().toInt();
      int surface = ui->lineEdit_4->text().toInt();
      QString dates = ui->lineEdit_5->text();
      int tel = ui->lineEdit_6->text().toInt();
       QString type = ui->comboBox_bien->currentText();
       QString idC = ui->lineEdit_idClient_bien->text();





      biens b(id,adress,prix,surface,dates,tel,type,idC);
      bool test = b.modifier();
      if(test)
      {
          QMessageBox::information(nullptr, QObject::tr("ajout"),
                      QObject::tr("service modifié.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);

          ui->tableView->setModel(GB.afficher());

  }
      else
          QMessageBox::critical(nullptr, QObject::tr("not OK"),
                      QObject::tr("problème de modification.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);
}
