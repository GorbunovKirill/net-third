#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dbconnectiondialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);


    connect(ui->pushButtonOpenDialog, &QPushButton::clicked, this, [&]() {
        DbConnectionDialog dialog(this);
        if (dialog.exec() == QDialog::Accepted) {

            QString host = dialog.getHostName();
            QString dbName = dialog.getDatabaseName();
            QString login = dialog.getLogin();
            QString password = dialog.getPassword();
            uint port = dialog.getPort();


            qDebug() << "Host:" << host;
            qDebug() << "Database:" << dbName;
            qDebug() << "Login:" << login;
            qDebug() << "Password:" << password;
            qDebug() << "Port:" << port;
        } else {
            qDebug() << "Cancel clicked!";
        }
    });
}

MainWindow::~MainWindow() {
    delete ui;
}
