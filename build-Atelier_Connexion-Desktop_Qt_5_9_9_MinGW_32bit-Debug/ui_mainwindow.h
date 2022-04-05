/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLineEdit *le_NOM;
    QPushButton *pb_ajouter;
    QLineEdit *la_Quantite;
    QLabel *label_12;
    QLabel *label_27;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QWidget *tab_2;
    QTableView *tab_stock;
    QPushButton *pushButton_3;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QLabel *label_7;
    QPushButton *pb_sup_2;
    QLineEdit *lineEdit;
    QWidget *tab_4;
    QLabel *label;
    QLabel *label_10;
    QLineEdit *lineEdit_4;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit_3;
    QLabel *label_18;
    QLabel *label_4;
    QWidget *tab_9;
    QPushButton *pb_ajouter_4;
    QLabel *label_3;
    QWidget *tab_7;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QWidget *tab_10;
    QPushButton *pushButton_9;
    QLineEdit *lineEdit_5;
    QLabel *label_5;
    QWidget *tab_6;
    QPushButton *pushButton_11;
    QWidget *tab_8;
    QWidget *tab_5;
    QProgressBar *progressBar;
    QProgressBar *progressBar_2;
    QProgressBar *progressBar_3;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_11;
    QProgressBar *progressBar_4;
    QPushButton *pushButton_10;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1080, 567);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 881, 491));
        tabWidget->setStyleSheet(QLatin1String("QTabWidget::pane { /* The tab widget frame */\n"
"	background-color: rgb(255, 255, 255);\n"
"border-top: 2px solid #2a2a2a; \n"
"border-left: 2px solid #2a2a2a;\n"
"border-right: 2px solid #2a2a2a ; \n"
"border-bottom: 2px solid #2a2a2a; \n"
"background: #dcdcdc;\n"
"	\n"
"	\n"
"	/*border-top-color: rgb(0, 0, 0);*/\n"
"\n"
"}\n"
"QTabWidget::tab-bar {\n"
"left: 0px; /* move to the right by 5px */\n"
"}\n"
"QTabBar::tab {\n"
"background: #dcdcdc;\n"
"border: 2px solid #535353;\n"
"border-bottom-color: #535353; \n"
"border-top-left-radius: 7px;\n"
"border-top-right-radius: 7px;\n"
"min-width: 80px;\n"
"padding: 8px;\n"
"color: rgb(50, 50, 162);\n"
"	color: rgb(0, 0, 0);\n"
"font-size:12px;\n"
"font-family:Arial, Helvetica, sans-serif;\n"
"}\n"
"QTabBar::tab:selected,QTabBar::tab:hover {\n"
"	\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(0, 0, 127);\n"
"}\n"
"QTabBar::tab:selected {\n"
"border-color: #9B9B9B;\n"
"border-bottom-color: #535353; /* same as pane color */\n"
"color: #dcdcdc;\n"
"fo"
                        "nt-size:13px;\n"
"font-family:Arial, Helvetica, sans-serif;\n"
"}\n"
"QTabBar::tab:!selected {\n"
"margin-top: 2px; /* make non-selected tabs look smaller */\n"
"}"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 1231, 361));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 70, 141, 20));
        label_2->setStyleSheet(QStringLiteral("font: 14pt \"MingLiU_HKSCS-ExtB\";"));
        le_NOM = new QLineEdit(groupBox);
        le_NOM->setObjectName(QStringLiteral("le_NOM"));
        le_NOM->setGeometry(QRect(160, 70, 113, 22));
        le_NOM->setStyleSheet(QStringLiteral(""));
        pb_ajouter = new QPushButton(groupBox);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(630, 240, 141, 51));
        pb_ajouter->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #dcdcdc;\n"
"background:#535353;\n"
"border: none;\n"
"font-size:12px;\n"
"font-family:Arial, Helvetica, sans-serif;\n"
"border: 2px solid ;\n"
"border-radius: 8px;\n"
"}\n"
"QPushButton:hover {\n"
"color:#fff;\n"
"	background-color: rgb(0, 0, 127);\n"
"border: none;\n"
"}"));
        la_Quantite = new QLineEdit(groupBox);
        la_Quantite->setObjectName(QStringLiteral("la_Quantite"));
        la_Quantite->setGeometry(QRect(160, 140, 113, 22));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 140, 111, 20));
        label_12->setStyleSheet(QStringLiteral("font: 14pt \"MingLiU_HKSCS-ExtB\";"));
        label_27 = new QLabel(groupBox);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(20, 220, 121, 21));
        label_27->setStyleSheet(QStringLiteral("font: 14pt \"MingLiU_HKSCS-ExtB\";"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(600, 30, 201, 201));
        QIcon icon;
        icon.addFile(QStringLiteral("print in.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(200, 200));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(170, 220, 73, 22));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tab_stock = new QTableView(tab_2);
        tab_stock->setObjectName(QStringLiteral("tab_stock"));
        tab_stock->setGeometry(QRect(10, 10, 601, 281));
        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(770, 380, 93, 28));
        tabWidget_2 = new QTabWidget(tab_2);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(10, 290, 741, 151));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 20, 111, 21));
        label_7->setStyleSheet(QStringLiteral("font: 14pt \"MingLiU_HKSCS-ExtB\";"));
        pb_sup_2 = new QPushButton(tab_3);
        pb_sup_2->setObjectName(QStringLiteral("pb_sup_2"));
        pb_sup_2->setGeometry(QRect(520, 40, 111, 51));
        pb_sup_2->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #dcdcdc;\n"
"background:#535353;\n"
"border: none;\n"
"font-size:12px;\n"
"font-family:Arial, Helvetica, sans-serif;\n"
"border: 2px solid ;\n"
"border-radius: 8px;\n"
"}\n"
"QPushButton:hover {\n"
"color:#fff;\n"
"	background-color: rgb(0, 0, 127);\n"
"border: none;\n"
"}"));
        lineEdit = new QLineEdit(tab_3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(80, 20, 151, 31));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label = new QLabel(tab_4);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 56, 16));
        label_10 = new QLabel(tab_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(270, 10, 56, 16));
        lineEdit_4 = new QLineEdit(tab_4);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(270, 30, 113, 22));
        comboBox_2 = new QComboBox(tab_4);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(420, 30, 91, 22));
        lineEdit_2 = new QLineEdit(tab_4);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(10, 30, 113, 22));
        pushButton_4 = new QPushButton(tab_4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(480, 70, 93, 28));
        lineEdit_3 = new QLineEdit(tab_4);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(130, 30, 113, 22));
        label_18 = new QLabel(tab_4);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(420, 10, 61, 16));
        label_4 = new QLabel(tab_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(140, 10, 56, 16));
        tabWidget_2->addTab(tab_4, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        pb_ajouter_4 = new QPushButton(tab_9);
        pb_ajouter_4->setObjectName(QStringLiteral("pb_ajouter_4"));
        pb_ajouter_4->setGeometry(QRect(20, 70, 141, 31));
        pb_ajouter_4->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #dcdcdc;\n"
"background:#535353;\n"
"border: none;\n"
"font-size:12px;\n"
"font-family:Arial, Helvetica, sans-serif;\n"
"border: 2px solid ;\n"
"border-radius: 8px;\n"
"}\n"
"QPushButton:hover {\n"
"color:#fff;\n"
"	background-color: rgb(0, 0, 127);\n"
"border: none;\n"
"}"));
        label_3 = new QLabel(tab_9);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(300, 0, 441, 111));
        tabWidget_2->addTab(tab_9, QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_9), QStringLiteral("QrCode"));
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        pushButton_5 = new QPushButton(tab_7);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(50, 40, 93, 28));
        pushButton_6 = new QPushButton(tab_7);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(180, 40, 93, 28));
        pushButton_7 = new QPushButton(tab_7);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(310, 40, 93, 28));
        pushButton_8 = new QPushButton(tab_7);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(440, 40, 93, 28));
        tabWidget_2->addTab(tab_7, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        pushButton_9 = new QPushButton(tab_10);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(630, 70, 93, 28));
        lineEdit_5 = new QLineEdit(tab_10);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(200, 30, 411, 22));
        label_5 = new QLabel(tab_10);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(160, 30, 31, 16));
        tabWidget_2->addTab(tab_10, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        pushButton_11 = new QPushButton(tab_6);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(320, 40, 93, 28));
        tabWidget_2->addTab(tab_6, QString());
        tabWidget->addTab(tab_2, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        tabWidget->addTab(tab_8, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        progressBar = new QProgressBar(tab_5);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(300, 50, 321, 23));
        progressBar->setValue(24);
        progressBar_2 = new QProgressBar(tab_5);
        progressBar_2->setObjectName(QStringLiteral("progressBar_2"));
        progressBar_2->setGeometry(QRect(300, 130, 321, 23));
        progressBar_2->setValue(24);
        progressBar_3 = new QProgressBar(tab_5);
        progressBar_3->setObjectName(QStringLiteral("progressBar_3"));
        progressBar_3->setGeometry(QRect(300, 200, 321, 23));
        progressBar_3->setValue(24);
        label_6 = new QLabel(tab_5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(120, 50, 56, 16));
        label_8 = new QLabel(tab_5);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(120, 130, 56, 16));
        label_9 = new QLabel(tab_5);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(110, 210, 81, 16));
        label_11 = new QLabel(tab_5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(110, 280, 81, 16));
        progressBar_4 = new QProgressBar(tab_5);
        progressBar_4->setObjectName(QStringLiteral("progressBar_4"));
        progressBar_4->setGeometry(QRect(300, 280, 321, 23));
        progressBar_4->setValue(24);
        pushButton_10 = new QPushButton(tab_5);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(730, 380, 93, 28));
        tabWidget->addTab(tab_5, QString());
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(2, -3, 1061, 531));
        QIcon icon1;
        icon1.addFile(QStringLiteral("jjjj.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(1500, 1500));
        MainWindow->setCentralWidget(centralWidget);
        pushButton_2->raise();
        tabWidget->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1080, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gestion des Clients", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        tabWidget->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("MainWindow", "Ajout", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "NOM Produit", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Quantit\303\251s", Q_NULLPTR));
        label_27->setText(QApplication::translate("MainWindow", "Categories", Q_NULLPTR));
        pushButton->setText(QString());
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "papier", Q_NULLPTR)
         << QApplication::translate("MainWindow", "encre", Q_NULLPTR)
         << QApplication::translate("MainWindow", "imprimante", Q_NULLPTR)
         << QApplication::translate("MainWindow", "tshirt", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Ajouter au stock", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Actualiser", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        pb_sup_2->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("MainWindow", "Suppression", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Quantite", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "encre", Q_NULLPTR)
         << QApplication::translate("MainWindow", "papier", Q_NULLPTR)
         << QApplication::translate("MainWindow", "imprimante", Q_NULLPTR)
         << QApplication::translate("MainWindow", "tshirt", Q_NULLPTR)
        );
        pushButton_4->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "Categorie", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "Modification", Q_NULLPTR));
        pb_ajouter_4->setText(QApplication::translate("MainWindow", "Generer", Q_NULLPTR));
        label_3->setText(QString());
        pushButton_5->setText(QApplication::translate("MainWindow", "Par ID ", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "Par Nom", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "Par categorie", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "Par Qte", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("MainWindow", "Trie", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "Chercher", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_10), QApplication::translate("MainWindow", "Chercher", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("MainWindow", "GENERER PDF", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("MainWindow", "PDF", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Afficher stock", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("MainWindow", "Notification", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Papier", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Encre", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Imprimante", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Tshirt", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MainWindow", "Refresh", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "STATISTICS", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
