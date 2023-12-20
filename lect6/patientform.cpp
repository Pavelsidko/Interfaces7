#include "patientform.h"
#include "ui_patientform.h"
#include <QIntValidator>
#include <QDoubleValidator>
#include <QRegExpValidator>

PatientForm::PatientForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PatientForm)
{
    ui->setupUi(this);

    QRegExp rx_phone("\\+7\\(\\d{3}\\)-\\d{3}-\\d{2}-\\d{2}");

    ui->age->setValidator(new QIntValidator(this));
    ui->phone->setValidator(new QRegExpValidator(rx_phone, this));
}

PatientForm::~PatientForm()
{
    delete ui;
}
