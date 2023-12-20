#include "facadeClassTest.h"
#include <QTest>
#include <QCoreApplication>
#include <QDir>
#include <QFile>
#include <QTextStream>
#include <QVector>
#include <QString>
#include <QDebug>
#include <fstream>
#include <facadeclass.h>


void facadeClassTest::testFacadeClass() {
    facadeClass facade;

    // Test ReadLevelNames
    QVector<QString> levelNames = facade.ReadLevelNames("C:/Users/Minim/Downloads/lect6/lect6/Levels/");
    QCOMPARE(levelNames.size(), 3); // Assuming there are 3 level files in the directory

    // Test GetItems
    QVector<QString> items = facade.GetItems("level1.txt"); // Assuming there is a file named level1.txt
    QCOMPARE(items.size(), 10); // Assuming the file has 10 lines
}

QTEST_MAIN(facadeClassTest)
