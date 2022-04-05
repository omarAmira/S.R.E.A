#include "contrat.h"
#include <QString>
#include<QtSql/QSqlQueryModel>
#include<QtSql/QSqlQuery>
#include <QSystemTrayIcon>


using namespace std;


contrat::contrat()
{
   num_contrat=" ";
   datecontrat=" ";
   montant =" " ;
   id_emp=" ";
   id_client=" ";
}


contrat::contrat(QString num_contrat,QString datecontrat,QString montant ,QString id_emp,QString id_client)
{
   this->num_contrat=num_contrat.toUpper();
   this->datecontrat=datecontrat.toUpper();
   this->montant=montant.toUpper();
   this->id_emp=id_emp;
   this->id_client=id_client;
}

void contrat::Set_num_contrat(QString val) { num_contrat = val; }
QString contrat::get_num_contrat(){return num_contrat;}

void contrat::Set_datecontrat(QString val) { datecontrat = val; }
QString contrat::get_datecontrat(){return datecontrat;}
void contrat::Set_montant(QString val) { montant = val; }
QString contrat:: get_montant(){return montant;}
void contrat::Set_id_emp(QString val) { id_emp = val; }
QString contrat:: get_id_emp(){return id_emp;}
void contrat::Set_id_client(QString val) { id_client = val; }
QString contrat:: get_id_client(){return id_client;}


bool contrat::ajouter()
{
    QSqlQuery query;  //variable d'accees lel BD
    query.prepare("INSERT INTO contrat (NOM,CATEGORIES,QUANTITÉS)"
                          "VALUES (:nom, :categorie,:quantite)");  //thez mel classe li fel QT lel BD
    query.bindValue(":num_contrat",num_contrat);
    query.bindValue(":datecontrat",datecontrat);
    query.bindValue(":montant",montant);
    query.bindValue(":id_emp",id_emp);
    query.bindValue(":id_client",id_client);
    return query.exec();
}


QSqlQueryModel *contrat::afficher()
{
 QSqlQueryModel *model = new QSqlQueryModel();
 model->setQuery("SELECT * FROM contrat");
 model->setHeaderData(0, Qt::Horizontal,QObject::tr("num_contrat"));
 model->setHeaderData(1, Qt::Horizontal,QObject::tr("datecontrat"));
 model->setHeaderData(2, Qt::Horizontal,QObject::tr("montant"));
 model->setHeaderData(3, Qt::Horizontal,QObject::tr("id_emp"));
 model->setHeaderData(4, Qt::Horizontal,QObject::tr("id_client"));
 return model;
}


bool contrat::supprimer(QString num_contrat)
{
    QSqlQuery query;
    query.prepare("Delete from contrat where num_contrat = :num_contrat ");
    query.bindValue(":num_contrat",num_contrat);
    return query.exec();

}


bool contrat :: modifier_contrat( QString num_contrat,QString datecontrat,QString montant ,QString id_emp,QString id_client)
{

    QSqlQuery qry;
        qry.prepare("UPDATE contrat set NOM=(?),QUANTITÉS=(?) where ID=(?) ");
        qry.addBindValue(datecontrat);
        //qry.addBindValue(categorie);
        qry.addBindValue(montant);
        qry.addBindValue(num_contrat);
        qry.addBindValue(id_emp);
        qry.addBindValue(id_client);
   return  qry.exec();
}

QSqlQueryModel * contrat::
tri_num()
{
QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM contrat ORDER BY num_contrat");
    model ->setHeaderData(0,Qt::Horizontal ,QObject::tr("num_contrat"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("datecontrat"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("montant"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("id_emp"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("id_cleint"));

    return model;
}

QSqlQueryModel * contrat::tri_date()
{
QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM contrat ORDER BY NOM");
    model ->setHeaderData(0,Qt::Horizontal ,QObject::tr("num_contrat"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("datecontrat"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("montant"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("id_emp"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("id_cleint"));


    return model;
}

QSqlQueryModel * contrat::tri_montant()
{
QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM contrat ORDER BY CATEGORIES");
    model ->setHeaderData(0,Qt::Horizontal ,QObject::tr("num_contrat"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("datecontrat"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("montant"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("id_emp"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("id_cleint"));

    return model;
}



QSqlQueryModel * contrat::recherche(QString num_contrat)
{
    QString res=QString(num_contrat);
    QSqlQueryModel * model =new QSqlQueryModel();
    model->setQuery("SELECT * from contrat where num_contrat like '"+res+"%';");
    model ->setHeaderData(0,Qt::Horizontal ,QObject::tr("num_contrat"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("datecontrat"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("montant"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("id_emp"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("id_cleint"));

 return model;
}

