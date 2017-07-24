#ifndef RADIO_H
#define RADIO_H

#include <QtWidgets/QtWidgets>

namespace Ui {
	class Radio;
}
class WalletModel;

class Radio : public QWidget
{
    Q_OBJECT

public:
    explicit Radio(QWidget *parent = 0);
    void setModel(WalletModel *model);


virtual ~Radio();    


private:
	Ui::Radio *ui;
    WalletModel *model;
};

#endif // RADIO_H
