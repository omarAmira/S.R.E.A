#include "bien.h"

biens::biens()
{
id = "";
adress="";
prix=0;
surface=0;
dates="";
tel=0;
type="";

}

biens::biens(QString ID, QString ADRESS, int PRIX, int SURFACE, QString DATES, int TEL, QString TYPE,QString id_C)
{
    id=ID;
    adress=ADRESS;
    prix=PRIX;
    surface=SURFACE;
    dates=DATES;
    tel=TEL;
    type=TYPE;
    id_c=id_C;


}




bool biens::ajouter()
{
    QSqlQuery query;

    query.prepare("INSERT INTO BIENS (ID,ADRESSE,PRIX,SURFACE,DATES,TEL,TYPE,ID_CLIENT) "
                        "VALUES (:ids,:adresss,:prixs,:surfaces,:datess,:tels,:types,:id_cs)");

    query.bindValue(":ids", id);
    query.bindValue(":adresss", adress);
    query.bindValue(":prixs", prix);
    query.bindValue(":surfaces", surface);
    query.bindValue(":datess", dates);
    query.bindValue(":tels", tel);
    query.bindValue(":types", type);
    query.bindValue(":id_cs", id_c);


    return    query.exec();
}


bool biens::supprimer(QString id)
{
    QSqlQuery query;
    query.prepare("Delete from BIENS where ID = :id ");
    query.bindValue(":id", id);
    return    query.exec();
}


bool biens::modifier()
{
    QSqlQuery query;
     query.prepare( "UPDATE BIENS SET ADRESSE=:adresss,PRIX=:prixs,SURFACE=:surfaces,DATES=:datess,TEL=:tels,TYPE=:types,ID_CLIENT=:id_cs WHERE ID = :ids;");
     //query.bindValue(":noms", nom);
     query.bindValue(":ids", id);
     query.bindValue(":adresss", adress);
     query.bindValue(":prixs", prix);
     query.bindValue(":surfaces", surface);
     query.bindValue(":datess", dates);
     query.bindValue(":tels", tel);
     query.bindValue(":types", type);
     query.bindValue(":id_cs", id_c);


  return query.exec();
}


QSqlQueryModel * biens::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from BIENS");

model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("adresse"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("prix"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("surface"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("date"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("tel"));
model->setHeaderData(6, Qt::Horizontal, QObject::tr("type"));
model->setHeaderData(7, Qt::Horizontal, QObject::tr("id client"));


    return model;
}
