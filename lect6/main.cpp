#include <QApplication>
#include "hellowidget.h"
#include "mainmenu.h"
#include "recordstable.h"
#include "patientform.h"
#include "gameview.h"

// 1. Добавить на сцену "кирпичи" из файла уровня
// 2. Данные грузить из уровня (окно MainMenu)
// 3. Реализовать фасад для уровней
// 4*. Доработать считывание таблицы рекордов по уровню сложности



int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

/*
    GameView gw;
    gw.show();
*/

    MainMenu menu;
    menu.show();

    /*
    PatientForm pf;
    pf.show();
*/
    a.setStyleSheet(
      "* { background-color: rgba(176, 196, 222, 255); }"
      "QPushButton { "
      "  background-color: rgba(255, 153, 102, 200); "
      "  border-style: outset;"
      "  border-width: 2px;"
      "  border-radius: 10px;"
      "  border-color: beige;"
      "  font: bold 14px;"
      "  width: 3em;"
      "  padding: 6px;"
      "}"
      "QPushButton:hover {"
        "background-color: rgba(255, 102, 0, 200);"
      "}"
      "QPushButton:pressed {"
        "background-color: rgba(255, 0, 0, 200);"
      "}"
      "QPushButton:disabled {"
        "background-color: rgba(204, 153, 102, 200);"
      "}"
      "QTextEdit {"
        "background-color: rgba(102, 204, 102, 200);"
        "  border-style: outset;"
        "  border-width: 0px;"
        "  border-radius: 10px;"
        "  border-color: black;"
        "  width: 3em;"
        "  padding: 6px;"
      "}"
    );


    RecordsTable rt;

    rt.show();


    return a.exec();
}
