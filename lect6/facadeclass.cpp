#include "facadeclass.h"
#include "GameView.h"
#include <QFile>
#include <QDebug>
#include <QTextStream>
#include <QGraphicsRectItem>
#include <QDir>
#include <fstream>

facadeClass::facadeClass(QObject *parent) : QObject(parent)
{}

QVector<QString> facadeClass::ReadLevelNames(const QString& directoryPath){
    QDir directory(directoryPath);
    QStringList fileNames = directory.entryList(QDir::Files | QDir::NoDotAndDotDot);

    QVector<QString> levels_name;

    foreach (QString fileName, fileNames) {
        levels_name.append(fileName);
    }

    return levels_name;
}


QVector<QString> facadeClass::GetItems(QString levelName){
    QVector<QString> elements;
    QFile file("C:/Users/Minim/Downloads/lect6/lect6/Levels/" + levelName);
    if (file.open(QIODevice::ReadOnly)) {
        QTextStream in(&file);
        in.setCodec("UTF-8");
        while (!in.atEnd()) {
            QString line = in.readLine();
            elements.push_back(line);
        }
        file.close();
    }
    return elements;
}


