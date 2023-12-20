#ifndef MAINMENU_H
#define MAINMENU_H

#include <QWidget>
#include <vector>
#include <string>
#include <QVBoxLayout>
#include <QPushButton>
#include "gameview.h"

using namespace std;

class MainMenu : public QWidget {
    Q_OBJECT
public:
    explicit MainMenu(QWidget *parent = nullptr);

signals:
    void levelSelected(const QString &levelName);

private slots:
    void onLevelButtonClicked(QString levelName);

private:
    QVBoxLayout* lay;
    GameView* gameView;

};

#endif // MAINMENU_H
