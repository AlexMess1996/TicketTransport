#include<iostream>
#include<cmath>
#include<cstdio>


#ifndef STATION_H
#define STATION_H
using namespace std;

/*
Group members:

Jan Fredrik Eri Kopperud, s315291
Nablis Ogubamichael Gebrehiwet ,s318158
Alexandros Messaritakis Chousein Aga , s326156

*/

class Station{
	public:
			string station_name;
			int zone;


			Station(string station_name, int zone);

			void setStationName( string station_name);
			string getStationName();

			void setZone(int zone);
			 int getZone();
};



#endif
