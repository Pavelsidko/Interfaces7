#include "mainmenu.h"
#include <QVBoxLayout>
#include <QTableWidget>
#include "gameview.h"
#include "facadeclass.h""
#include "gameview.h"

MainMenu::MainMenu(QWidget *parent)
    : QWidget{parent}
{
    /*
    vector<string> levels_name =
        {"levelA", "levelB", "levelC"};
    */

    facadeClass facade;
    QVector<QString> levels_name = facade.ReadLevelNames("C:/Users/Minim/Downloads/lect6/lect6/Levels");

    QVBoxLayout* lay = new QVBoxLayout(this);

    for (auto& name : levels_name) {
        QPushButton* button = new QPushButton(this);
        button->setText(name);

        lay->addWidget(button);

        button->show();

        connect(button, &QPushButton::clicked, this, [this, name](){
            onLevelButtonClicked(name);
        });

    }

    QTableWidget* table = new QTableWidget(this);
    lay->addWidget(table);
}

void MainMenu::onLevelButtonClicked(QString levelName)
{
    gameView = new GameView(levelName, this);
    gameView->resize(800, 600);
    gameView->show();
}

