#include <QtWidgets/QMainWindow>
#include "ui_Sondeur.h"

#include <qDebug>

#include <QSerialPort>
#include <QSerialPortInfo>

#include <QThread>

class Sondeur : public QMainWindow
{
	Q_OBJECT

public:
	Sondeur(QWidget *parent = Q_NULLPTR);

private:
	Ui::SondeurClass ui;

	QSerialPort *port;

	QString trame;

public slots:
	void serialPortRead();
};
