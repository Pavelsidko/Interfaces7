#include "hellowidget.h"

#include <QGridLayout>

HelloWidget::HelloWidget(QWidget *parent)
    : QWidget{parent} {

    QGridLayout* lay = new QGridLayout(this);

    helloLabel = new QLabel(this);
    line = new QLineEdit(this);
    button = new QPushButton("press me", this);
    label = new QLabel("Введи имя", this);

    label->show();
    line->show();
    button->show();

    lay->addWidget(helloLabel, 0, 0, 1, 2);
    lay->addWidget(label, 1, 0);
    lay->addWidget(line, 1, 1);
    lay->addWidget(button, 2, 1);

    connect(button, SIGNAL(clicked()), this, SLOT(hi()));

    {
        QFont font = helloLabel->font();
        font.setPointSize(40);
        helloLabel->setFont(font);
    }

    {
        QFont font = button->font();
        font.setPointSize(40);
        button->setFont(font);
    }

    {
        QFont font = line->font();
        font.setPointSize(40);
        line->setFont(font);
    }

    {
        QFont font = label->font();
        font.setPointSize(40);
        label->setFont(font);
    }

}

void HelloWidget::hi() {
    helloLabel->setText(QString("hi ") + line->text());
}
