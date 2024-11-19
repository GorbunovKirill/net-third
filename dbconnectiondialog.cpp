#include "dbconnectiondialog.h"
#include "ui_dbconnectiondialog.h"

DbConnectionDialog::DbConnectionDialog(QWidget *parent)
    : QDialog(parent), ui(new Ui::DbConnectionDialog) {
    ui->setupUi(this);

    connect(ui->pushButtonOk, &QPushButton::clicked, this, &QDialog::accept);
    connect(ui->pushButtonCancel, &QPushButton::clicked, this, &QDialog::reject);
}

DbConnectionDialog::~DbConnectionDialog() {
    delete ui;
}

QString DbConnectionDialog::getHostName() const {
    return ui->lineEditHostName->text();
}

QString DbConnectionDialog::getDatabaseName() const {
    return ui->lineEditDatabaseName->text();
}

QString DbConnectionDialog::getLogin() const {
    return ui->lineEditLogin->text();
}

QString DbConnectionDialog::getPassword() const {
    return ui->lineEditPassword->text();
}

uint DbConnectionDialog::getPort() const {
    return ui->getPort->value();
}
