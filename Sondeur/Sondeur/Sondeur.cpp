#include "Sondeur.h"
#include "Qdebug"
#define PORT "COM1"

Sondeur::Sondeur(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);


	port = new QSerialPort(this);
	QObject::connect(port, SIGNAL(readyRead()), this, SLOT(serialPortRead()));
	port->setPortName(PORT);
	port->open(QIODevice::ReadWrite);
	port->setBaudRate(QSerialPort::Baud4800);
	port->setDataBits(QSerialPort::DataBits::Data8);
	port->setParity(QSerialPort::Parity::NoParity);
	port->setStopBits(QSerialPort::StopBits::OneStop);
	port->setFlowControl(QSerialPort::NoFlowControl);

	if (port -> isOpen())
	{
		qDebug() << "Ping Pong";
	}
	else
	{
		qDebug() << "Ching Chong";
	}
}

void Sondeur::serialPortRead()
{
	QByteArray Trame_Recu = port->readAll();

	trame = trame + Trame_Recu.toStdString().c_str();

	//Afficher les trames pour voir comment elles sont
	qDebug() << " Trame : " << trame << " \n ";

	//$SDMTW,,,C*36		:: Temperature
	//$SDDPT,,*57		:: Profondeur
}
// $GPAPB,V,A,0.07,L,N,V,V,1.8,T,,0.7,T,,*46\r\n$GPGLL,4952.6634,N,00218.1741,E,000042,V*3E\r\n$GPRMB,V,0.07,L,,,4956.5190,N,00218.2502,E,3.86,0.7,0.0,V*11\r\n$GPRMC,000042,V,4952.6634,N,00218.1741,E,0.0,0.0,010200,2.0,W*71\r\n$GPGGA,000042,4952.6634,N,00218.1741,E,0,0,50.00,-47,M,,,,*26\r\n$GPGSA,A,1,,,,,,,,,,,,,50.00,50.00,50.00*35\r\n$GPGSV,1,1,1,27,,0,*7D\r\n$SDMTW,,,C*36\r\n$SDDPT,,*57\r\n$SDDBT,,,,,,*45\r\n