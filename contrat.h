#ifndef CONTRAT_H
#define CONTRAT_H
#include <QString>
#include<QtSql/QSqlQuery>
#include"QtSql/QSqlDatabase"
#include<QtSql/QSqlQueryModel>
#include <QDebug>


class contrat
{
public:
    contrat();
    contrat(QString,QString,QString,QString,QString);
    void Set_num_contrat(QString val) ;
    QString get_num_contrat();

    void Set_datecontrat(QString val) ;
    QString get_datecontrat();
    void Set_montant(QString val) ;
    QString get_montant();
    void Set_id_emp(QString val) ;
    QString get_id_emp();
    void Set_id_client(QString val) ;
    QString get_id_client();

    bool ajouter();
    bool  modifier_contrat(QString,QString,QString,QString,QString);
    bool supprimer(QString num_contrat);
    QSqlQueryModel * afficher();

    QSqlQueryModel * tri_num();
    QSqlQueryModel * tri_date();
    QSqlQueryModel * tri_montant();
    QSqlQueryModel * recherche(QString num_contrat);
    int count_impri (int all);
    int count_encre (int all);
    int count_papier (int all);
    int count_all ();
    int count_t (int all);
    void notification(QString);
    void Signal();

private:
    QString num_contrat;
    QString datecontrat;
    QString montant;
    QString id_emp;
    QString id_client;

};

#endif // CONTRAT_H
