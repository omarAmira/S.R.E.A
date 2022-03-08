#ifndef BIEN_H
#define BIEN_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class biens
{
private:
    int prix,surface,tel;
    QString id,adress,id_c,dates,type;


public:
    biens();
    biens(QString, QString, int, int, QString , int, QString,QString);

    bool ajouter();
    bool modifier();
    bool supprimer(QString);
    QSqlQueryModel * afficher();




};



#endif // BIEN_H
