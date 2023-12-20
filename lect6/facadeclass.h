#ifndef LEVELFACADE_H
#define LEVELFACADE_H
#include <QString>
#include <QWidget>
#include <QFile>
using namespace std;

class facadeClass : public QObject {


public:
    explicit facadeClass(QObject *parent = nullptr);
    QVector<QString> GetItems(QString levelName);
    QVector<QString>ReadLevelNames(const QString& directoryPath);

private:

};

#endif // LEVELFACADE_H
