#ifndef DBCONNECTIONDIALOG_H
#define DBCONNECTIONDIALOG_H

#include <QDialog>

namespace Ui {
class DbConnectionDialog;
}

class DbConnectionDialog : public QDialog {
    Q_OBJECT

public:
    explicit DbConnectionDialog(QWidget *parent = nullptr);
    ~DbConnectionDialog();

    QString getHostName() const;
    QString getDatabaseName() const;
    QString getLogin() const;
    QString getPassword() const;
    uint getPort() const;

private:
    Ui::DbConnectionDialog *ui;
};

#endif // DBCONNECTIONDIALOG_H
