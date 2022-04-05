#include <QMessageBox>
#include "ui_mainwindow.h"
#include "mainwindow.h"
#include "contrat.h"
#include <QSqlQuery>
#include <QIntValidator> //ensures a string contains a valid integer within a specified range
#include <QSqlError>
#include<QSystemTrayIcon>
#include <QRegExp>
#include "connection.h"
#include <QFileDialog>
#include <QPainter>
#include <QDate>
#include <QPdfWriter>
#include <QDesktopServices>
#include <QUrl>
#include <QTextDocument>
#include <exportexelobjet.h>


#include <QPixmap>


using namespace std;


MainWindow::MainWindow(QWidget *parent) : //Constructeur de la classe mainwindow généré automatiquement
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tab_stock->setModel(s.afficher());
    //input__control
    ui->num_contrat2->setValidator(new QIntValidator(0,999999,this));
    ui->date_contrat2->setValidator(new QIntValidator(0,999999,this));
    ui->montant2->setValidator(new QIntValidator(0,999999,this));
    ui->id_emp2->setValidator(new QIntValidator(0,999999,this));
    ui->id_client2->setValidator(new QIntValidator(0,999999,this));
    QRegExp rx("[a-zA-Z]+");
    QValidator *validator = new
            QRegExpValidator (rx,this);
    ui->num_contrat2->setValidator(validator);
    ui->date_contrat2->setValidator(validator);
    ui->montant2->setValidator(validator);
    ui->id_emp2->setValidator(validator);
    ui->id_client2->setValidator(validator);

}


MainWindow::~MainWindow()
{
    delete ui;
}







void MainWindow::on_pushButton_4_clicked()
{

       QString num_contrat =ui->num_contrat2->text();
       QString datecontrat =ui->date_contrat2->text();
       QString montant =ui->montant2->text();
       QString id_emp =ui->id_emp2->text();
       QString id_client =ui->id_client2->text();
       bool test=s.modifier_contrat(num_contrat,datecontrat,montant,id_emp,id_client);
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("ok"),
                                 QObject::tr("modifié \n"
                                             "click to cancel"), QMessageBox::Cancel);
        ui->num_contrat2->clear();
        ui->date_contrat2->clear();
        ui->montant2->clear();
        ui->id_emp2->clear();
        ui->id_client2->clear();
    }
    else
    QMessageBox::critical(nullptr,QObject::tr("not ok"),
                          QObject::tr("modification non effectué"),QMessageBox::Cancel);
}

void MainWindow::on_pb_ajouter_4_clicked()
{
               int tabeq=ui->tab_stock->currentIndex().row();
               QVariant idd=ui->tab_stock->model()->data(ui->tab_stock->model()->index(tabeq,0));
               QString id=idd.toString();

               QSqlQuery qry;
               qry.prepare("select * from STOCK where ID=:code");
               qry.bindValue(":code",id);
               qry.exec();

                QString nom,categorie;//attributs
                int quantite;
                QDate datep;

              while(qry.next()){

                  id=qry.value(0).toString();
                   nom=qry.value(4).toString();
                    quantite=qry.value(1).toInt();
                   datep=qry.value(2).toDate();
                   categorie=qry.value(3).toString();


               }
               id=QString(id);
                      id="CODE:\t" +id+ "NOM\t:" +nom+ "quantite:\t" +quantite+ "category:\t" +categorie ;

}

void MainWindow::on_pushButton_5_clicked()
{
    ui->tab_stock->setModel(s.tri_num());
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->tab_stock->setModel(s.tri_date());
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->tab_stock->setModel(s.tri_montant());
}



void MainWindow::on_pushButton_9_clicked()
{
    QString type =ui->lineEdit_5->text();
    ui->tab_stock->setModel(s.recherche(type));
}



void MainWindow::on_pushButton_11_clicked()
{
    QPdfWriter pdf("C:/Users/saeeb/OneDrive/Desktop/stock.pdf");

    QPainter painter(&pdf);

    int i = 4000;
    painter.setPen(Qt::red);
    painter.setFont(QFont("Arial", 30));
    painter.drawText(3000,1500,"LISTE STOCK");
    painter.setPen(Qt::black);
    painter.setFont(QFont("Arial", 50));
    // painter.drawText(1100,2000,afficheDC);
    painter.drawRect(2700,200,7300,2600);
    painter.drawRect(0,3000,9600,500);
    painter.setFont(QFont("Arial", 9));
    painter.drawText(300,3300,"num_contrat");
    painter.drawText(2300,3300,"datecontrat");
    painter.drawText(4300,3300,"montant");
    painter.drawText(6300,3300,"id_emp");
    painter.drawText(8000,3300,"id_client");
    QSqlQuery query;
    query.prepare("select * from contrat");
    query.exec();
    while (query.next())
    {
        painter.drawText(300,i,query.value(0).toString());
        painter.drawText(2300,i,query.value(1).toString());
        painter.drawText(4300,i,query.value(2).toString());
        painter.drawText(6300,i,query.value(3).toString());
        painter.drawText(8000,i,query.value(4).toString());
        i = i +500;
    }

    int reponse = QMessageBox::question(this, "Génerer PDF", "<PDF Enregistré>...Vous Voulez Affichez Le PDF ?", QMessageBox::Yes |  QMessageBox::No);
    if (reponse == QMessageBox::Yes)
    {
        QDesktopServices::openUrl(QUrl::fromLocalFile("C:/Users/saeeb/OneDrive/Desktop/stock.pdf"));

        painter.end();
    }
    if (reponse == QMessageBox::No)
    {
        painter.end();
    }
    QString strStream;
            QTextStream out(&strStream);


    QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Export PDF", QString(), "*.pdf");
    if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }





    QFile file("C:/Users/saeeb/Desktop/Projet_CL/historique.txt");
            if(!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
                return;
            QTextStream cout(&file);
            QString d_info = QDateTime::currentDateTime().toString();
            QString message2=d_info+" - Une fichier PDF a été génerée !\n";
            cout << message2;




}

void MainWindow::on_pb_ajouter_clicked()
{
    QString num_contrat =ui->num_contrat->text();
    QString datecontrat =ui->datecontrat->text();
    QString montant =ui->montant->text();
    QString id_emp =ui->id_emp->text();
    QString id_client =ui->id_client->text();
    contrat s(num_contrat,datecontrat,montant,id_emp,id_client);

    bool test=s.ajouter();
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("ok"),
                                 QObject::tr("ajoute \n"
                                             "click to cancel"), QMessageBox::Cancel);
        ui->num_contrat->clear();
        ui->datecontrat->clear();
        ui->montant->clear();
        ui->id_emp->clear();
        ui->id_client->clear();


    }
    else
        QMessageBox::critical(nullptr, QObject::tr("not ok") , QObject::tr("non effecue"),QMessageBox::Cancel);

}

void MainWindow::on_pushButton_3_clicked()
{
    ui->tab_stock->setModel(s.afficher());

}

void MainWindow::on_pb_sup_2_clicked()
{
    QString num_contrat  =ui->lineEdit->text();
    bool test=s.supprimer(num_contrat);
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("ok"),
                                 QObject::tr("Supprimé \n"
                                             "click to cancel"), QMessageBox::Cancel);
        ui->lineEdit->clear();
    }
else
    QMessageBox::critical(nullptr,QObject::tr("not ok"),
                          QObject::tr("suppression non effectué"),QMessageBox::Cancel);
}

void MainWindow::on_pushButton_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Exportation en fichier Excel"), qApp->applicationDirPath (),
                                                                tr("Fichiers d'extension Excel (*.xls)"));
                if (fileName.isEmpty())
                    return;

                ExportExcelObject obj(fileName, "mydata", ui->tab_stock);


                obj.addField(0, "num_contrat", "char(20)");
                 obj.addField(2, "datecontrat", "char(20)");
                obj.addField(1, "montant", "char(20)");
                obj.addField(4, "id_emp", "char(20)");
                obj.addField(3, "id_client", "char(20)");



                int retVal = obj.export2Excel();

                if( retVal > 0)
                {
                    QMessageBox::information(this, tr("FAIS!"),
                                             QString(tr("%1 enregistrements exportés!")).arg(retVal)
                                             );

                    QFile file("C:/Users/saeeb/Desktop/Projet_CL/historique.txt");
                            if(!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
                                return;
                            QTextStream cout(&file);
                            QString d_info = QDateTime::currentDateTime().toString();
                            QString message2=d_info+" - Une fichier exel a été génerée !\n";
                            cout << message2;

                }
}
