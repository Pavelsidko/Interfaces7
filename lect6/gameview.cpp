#include "gameview.h"
#include <QGraphicsRectItem>
#include <QKeyEvent>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <facadeclass.h>

#define BRICK_WIDTH 40
#define BRICK_HEIGHT 20


GameView::GameView(QString levelName, QWidget *parent)
    : QGraphicsView{parent} {

    setScene(&m_scene);

    qDebug() << "Level name: " << levelName;


    QVector<QString> newElements;
    facadeClass facade;
    newElements = facade.GetItems(levelName);
    int brickWidth = 20;
    int brickHeight = 10;

    for (int i = 0; i < newElements.size(); i++) {
        QString row = newElements.at(i);
        QStringList bricks = row.split(" ");
        for (int j = 0; j < bricks.size(); j++) {
            if (bricks.at(j) == "1") {
                int x = j * brickWidth;
                int y = i * brickHeight;
                QGraphicsRectItem *brick = new QGraphicsRectItem(x, y, brickWidth, brickHeight);
                brick->setBrush(QBrush(QColor(255, 0, 0)));
                m_scene.addItem(brick);
            }
        }
    }

}

void GameView::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_A) {
        m_item->moveBy(-5, 0);
    }
    else if (event->key() == Qt::Key_D) {
        m_item->moveBy(+5, 0);
    }
}
