#include<iostream>
#include<cmath>
#include<cstdio>
#include<vector>
#include<fstream>
#include<string>
#include"Station.h"
#include"Ticket.h"


/*
Group members:

Jan Fredrik Eri Kopperud, s315291
Nablis Ogubamichael Gebrehiwet ,s318158
Alexandros Messaritakis Chousein Aga , s326156

*/
using namespace std;

      //constructor
			Ticket::Ticket(string station_from, string station_to, int zone_From, int zone_To,int civilStatus,int type){
				this->station_from = station_from;
				this->station_to = station_to;
				this->zone_From = zone_From;
				this->zone_To = zone_To;
				this->civilStatus = civilStatus;
				this->type = type;

			}
    // setters
			void Ticket::setStationFrom(string from){
				this->station_from = from;
			}

			void Ticket::setStationTo(string to){
				this->station_to = to;
			}

			void  Ticket::setZoneFrom(int from){
				this->zone_From = from;
			}

			void Ticket::setZoneTo(int to){
				this->zone_To = to;
			}

			void Ticket::setCivilStatus(int civilStatus){
				this->civilStatus = civilStatus;
			}

			void Ticket::setPeriodType(int periodType){
				this->type = periodType;
			}

			//getters
	 		string Ticket::getStationFrom(){
	 				return this->station_from;
	 			}

			string Ticket::getStationTo(){
				return this->station_to;
			}

			int Ticket::getZoneFrom(){
				return this->zone_From;
			}

			int Ticket::getZoneTo(){
				return this->zone_To;
			}

			int Ticket::getCivilStatus(){
				return this->civilStatus;
			}

			int Ticket::getPeriodType(){
				return this->type;
			}

   // prints ticket information to console
			void Ticket::receipt(){

				cout<<"-----------------------------------------------"<<endl;

				cout<<"| "<<"********* Receipt ********* \n"<<" |"<<endl;

				switch(type){

					case 1:
					cout<<"| Type: "<<"*******Single Ticket*******"<<" |"<<endl;
					break;

					case 2:
					cout<<"| Type: "<<"*******7-days Ticket*******"<<" |"<<endl;
					break;

					case 3:
					cout<<"| Type: "<<"*********30-days Ticket*******"<<" |"<<endl;
					break;

					default:
					break;
				}


				switch(civilStatus){

					case 1 :
					cout<<"| Civil Status: "<<"Student"<<endl;
					break;

					case 2 :
					cout<<"| Civil Status: "<<"Soldier"<<endl;
					break;

					case 3 :
					cout<<"| Civil Status: "<<"Senior"<<endl;
					break;

					case 4 :
					cout<<"| Civil Status: "<<"Child"<<endl;
					break;

					case 5 :
					cout<<"| Civil Status: "<<"Adult"<<endl;
					break;

					default :
					break;
				}


			}

    //calculates tickets Price
			float Ticket::ticket_Price(){
        //base value for price
				price = 10;

				// price adjustment according to zones
				if(std::abs(zone_From-zone_To) == 0){
					price += 50;
				}
				else if(std::abs(zone_From-zone_To) == 1){
					price += 100;
				}
				else if(std::abs(zone_From-zone_To) == 2){
					price += 150;
				}

       //price adjustment according to civilStatus
				switch(civilStatus){

					case 1 :
					price = price * 0.8;
					break;

					case 2 :
					price = price * 0.7;
					break;

					case 3 :
					price = price * 0.5;
					break;

					case 4 :
					price = 0;
					break;

					case 5 :
					break;

					default :
					break;
				}

			//price adjustment according to ticket type
				switch(type){

					case 1:
					price += 50;
					break;

					case 2:
					price = price * 5;
					break;

					case 3:
					price = price * 10;
					break;

					default:
					break;
				}

				return price;
			}

	    // writes ticket information to text file
			void Ticket::printReceipt(){
				ofstream myfile;
				myfile.open("ticket.txt");
				
				myfile<<"*******************************\n";

				myfile<<"********* Ticket *********\n";

				switch(type){

					case 1:
					myfile<<"Type: -----Single Ticket----- \n";
					break;

					case 2:
					myfile<<"Type: -----7-days Ticket----- \n";
					break;

					case 3:
					myfile<<"Type: -----30-days Ticket----- \n";
					break;

					default:
					break;
				}




				switch(civilStatus){

					case 1 :
					myfile<<"Civil Status: Student \n";
					break;

					case 2 :
					myfile<<"Civil Status: Soldier \n";
					break;

					case 3 :
					myfile<<"Civil Status: Senior \n";
					break;

					case 4 :
					myfile<<"Civil Status: Child \n";
					break;

					case 5 :
					myfile<<"Civil Status: Adult \n";
					break;

					default :
					break;
				}


				myfile<<"From: "<<station_from<<"\n";
				myfile<<"To: "<<station_to<<"\n";
				myfile<<"Price: "<<ticket_Price()<<" kr"<<"\n";
				myfile<<"*******************************\n";

				myfile.close(); //helps to prevent memory leaks


			}
