#include "recordstable.h"
#include "ui_recordstable.h"
#include <QDebug>
#include <fstream>


RecordsTable::RecordsTable(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RecordsTable) {
    ui->setupUi(this);

    load_records("easy");
    load_records("middle");
    load_records("hard");

    loadForDifficult("middle");

    connect(ui->difficult,
            SIGNAL(currentTextChanged(const QString &)),
            this, SLOT(loadForDifficult(const QString &)));
}

void RecordsTable::load_records(std::string difficult) {
    std::ifstream fst("C:/Users/Minim/Downloads/lect6/lect6/" +difficult + ".csv");
    if (!fst) {
        qDebug() << "Full file path: ";
        return;
    }
    std::vector<std::string> records;
    while (fst) {
        std::string line;
        std::getline(fst, line);
        records.push_back(line);
    }
    m_records[difficult] = records;
}


void RecordsTable::loadForDifficult(const QString &difficult) {
    ui->table->clear();
    ui->table->setRowCount(m_records[difficult.toStdString()].size());

    for (int i = 0; i < m_records[difficult.toStdString()].size(); i++) {
        QStringList columns = QString::fromStdString(m_records[difficult.toStdString()][i]).split(" ");
        for (int j = 0; j < columns.size(); j++) {
            if(columns[j].isEmpty()) {
                qDebug() << "Empty column data at row" << i << "column" << j;
            }
            ui->table->setItem(i, j, new QTableWidgetItem(columns[j]));
        }
    }
}







RecordsTable::~RecordsTable() {
    delete ui;
}
