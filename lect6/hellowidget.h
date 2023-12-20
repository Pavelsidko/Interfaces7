#ifndef HELLOWIDGET_H
#define HELLOWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

class HelloWidget : public QWidget {
    Q_OBJECT
public:
    explicit HelloWidget(QWidget *parent = nullptr);

signals:

public slots:
    void hi();

private:
    QLabel* helloLabel;
    QLineEdit* line;
    QPushButton* button;
    QLabel* label;

};

#endif // HELLOWIDGET_H
