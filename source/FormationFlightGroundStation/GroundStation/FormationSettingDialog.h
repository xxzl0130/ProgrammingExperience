#pragma once
#include "stdafx.h"
#include "ui_FormationSettingDialog.h"
#include <QDialog>

class FormationSettingDialog :
    public QDialog
{
    Q_OBJECT
public:
    FormationSettingDialog(QWidget *parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags());
    ~FormationSettingDialog();

signals:
    void uavCountChange(int count);
    void sendFormationDelta(std::vector<ExtY_AutopilotSim_T>& data);
    void sendHeight(double h);

public slots:
    void onTypeChange(int index);
    void accept() override;

protected:
    void calcFormation();
    //����v���Ų�
    void calcV(double angle, double dis, int n);

private:
    Ui::FormationSettingDialog *ui;
    //�����Ϣ
    std::vector<ExtY_AutopilotSim_T> formationDelta;
    int formationType;
};

