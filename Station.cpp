#include<iostream>
#include<cmath>
#include<cstdio>


#include"Station.h"

/*
Group members:

Jan Fredrik Eri Kopperud, s315291
Nablis Ogubamichael Gebrehiwet ,s318158
Alexandros Messaritakis Chousein Aga , s326156

*/

using namespace std;

   //constructor
		Station::Station(string station_name, int zone){
			this->station_name = station_name;
			this->zone = zone;
		}
    //station name setter
		void Station::setStationName(string stationName){
			this->station_name = stationName;
		}
    //station name getter
		string Station::getStationName(){
			return this->station_name;
		}
  //zone setter
		void Station::setZone(int zone){
			this->zone = zone;
		}

  //zone getter
		int Station::getZone(){
			return this->zone;
		}
