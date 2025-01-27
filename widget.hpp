/*
* Mysterious Developers © 2022
* Language : C++
* Author : pierrbt
* Name : WeathGet (weather-widget)
*/

#ifndef WIDGET_H
#define WIDGET_H

#include "includes.hpp"

class Window : public QWidget
{
  Q_OBJECT

public:
        Window(QString val = " - ", QString version = "N/A");
public slots:
        void replyFinished(QNetworkReply *resp);
        void getNewInfos();
        void searchCity();
        void textRefresh(QString newText);
        void seeMoreInformations();
        void displayLicense();
        QString lookForICAO(QString nameOfCity);
private:
        QLabel * value;
        QString appVersion = "N/A";
        QLabel * name;
        QLabel * icon = new QLabel;
        QLabel  * station = new QLabel("Station : - ");
        QLabel  * date = new QLabel("Date : - ");
        QLabel  * temp = new QLabel("Température : ");
        QLabel  * wind_dir = new QLabel("Direction du vent : - ");
        QLabel  * wind_speed = new QLabel("Vitesse du vent : - ");
        QLabel  * visibility = new QLabel("Visibilité : - ");
        QLabel  * cover = new QLabel("Couverture : - ");
        QLineEdit * city = new QLineEdit;
        QLabel * c_label = new QLabel("Ville : ");
        QVector<QString> infos;
        QVector<QString> names;

        QString airportName = "";
        QString airportIATA = "";

        QString latitude = "";
        QString longitude = "";
        QString country = "";

        QString cityName = "Nantes";

        QString stationCode = "LFRS";

        QString correctTS(QString input);

        QNetworkAccessManager *manager = new QNetworkAccessManager(this);

          QStringList cityList;
          QCompleter * completer;



};




#endif // WIDGET_H
