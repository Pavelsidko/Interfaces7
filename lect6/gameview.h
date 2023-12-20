#ifndef GAMEVIEW_H
#define GAMEVIEW_H

#include <QGraphicsView>
#include <QGraphicsScene>

class GameView : public QGraphicsView
{
    Q_OBJECT
public:
    explicit GameView(QString levelName, QWidget *parent = nullptr);

protected:
    void keyPressEvent(QKeyEvent *event) override;

private:
    QGraphicsScene m_scene;
    QGraphicsRectItem* m_item;
};


#endif

