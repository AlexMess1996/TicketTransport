#include<iostream>
#include<cmath>
#include<cstdio>
#include<vector>
#include"Station.h"

#ifndef TICKET_H
#define TICKET_H


/*
Group members:

Jan Fredrik Eri Kopperud, s315291
Nablis Ogubamichael Gebrehiwet ,s318158
Alexandros Messaritakis Chousein Aga , s326156

*/
using namespace std;

 class Ticket{
	 public:

			string station_from;
			string station_to;

			int zone_From;
			int zone_To;

			int civilStatus;
			int type;

			float price;

			Ticket(string station_from, string station_to, int zone_From, int zone_To,int civilStatus,int type);

			void setStationFrom(string from);
			string getStationFrom();

			void setStationTo(string to);
			string getStationTo();


			void setZoneFrom(int from);
			int getZoneFrom();

			void setZoneTo(int to);
			int getZoneTo();

			void setCivilStatus(int civilStatus);
			int getCivilStatus();

			void setPeriodType(int periodType);
			int getPeriodType();


			void receipt();
			void printReceipt();

			float ticket_Price();

 };

 #endif
