#ifndef RECORDSTABLE_H
#define RECORDSTABLE_H

#include <QWidget>
#include <map>
#include <vector>
#include <string>

namespace Ui {
class RecordsTable;
}

class RecordsTable : public QWidget {
    Q_OBJECT

public:
    explicit RecordsTable(QWidget *parent = nullptr);
    ~RecordsTable();

private slots:
    void loadForDifficult(const QString &difficult);

private:
    Ui::RecordsTable *ui;

    void load_records(std::string difficult);

    std::map<std::string, std::vector<std::string>> m_records;
};

#endif // RECORDSTABLE_H
