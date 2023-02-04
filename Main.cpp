#include<iostream>
#include<cmath>
#include<cstdio>
#include<fstream>
#include<string>
#include<windows.h>
#include"Ticket.h"
#include"Station.h"

using namespace std;

/*
Group members:

Jan Fredrik Eri Kopperud, s315291
Nablis Ogubamichael Gebrehiwet ,s318158
Alexandros Messaritakis Chousein Aga , s326156

*/

void menu() {
  //variables
  string station_name_from;
	int zone_from;

	string station_name_to;
	int zone_to;

  //variables for storing input from users
	int menu_select_1,menu_select_2,menu_select_3,menu_select_4,menu_select_5;


	//helping variable
	bool first = false;
	bool first1= true;


	do {
        cout<<"-------------------------------------------------------------------------"<<endl;
        cout<<"                  -----TRAIN BOOKING TICKET SERVICE----- "<<endl;
        cout<<"-------------------------------------------------------------------------"<<endl;
        cout<<""<<endl;



        cout<<"************ MENY ************"<<endl;
        cout<<"0. Exit " << endl;
        cout<<"1. Purchase a ticket " << endl;
        while(first1)
        {
          //run the input query once
            do{
                cout<<"Input:";
      //taking input from user for the MENY & storing it in the menu_select_1
                cin>>menu_select_1;
                cout<<" "<<endl;
            }


            while(first);{
              // validating input
                if(menu_select_1 ==0){
                    exit(1);
                    break;
                }
                else if(menu_select_1 == 1){
                    first = false;
                    break;
                }
                else if(menu_select_1 !=0 || menu_select_1 !=1)
                {
                    cout<<"Please type 1 or 0"<<endl;
                    first1 = true;

                }

            }

        } //END of User Input Validity Check


        cout<<"-------------------------------------------------------------------------"<<endl;
        cout<<""<<endl;
        cout<<"-------------------------------------------------------------------------"<<endl;

        cout<<"Please choose period ticket: "<<endl;
        cout<<"1: Single Ticket "<<endl;
        cout<<"2: 7-days Ticket "<<endl;
        cout<<"3: 30-days Ticket "<<endl;

        //User Input Validity Check
        while(first1)
        {
            do{
                cout<<"Input:";

                cin>>menu_select_5;
                cout<<" "<<endl;
            }
            while(first);{

                 if(menu_select_5 <= 3 &&menu_select_5 >0){
                    first = false;
                    break;
                }
                else if(menu_select_5 > 3 || menu_select_5 <=0){
                    cout<<"Please type 1 to 3: "<<endl;
                    first1 = true;
                }

            }    //END User Input Validity Check

        }

        cout<<"-------------------------------------------------------------------------"<<endl;

        cout<<" "<<endl;

       //
        switch(menu_select_1){
            case 1 :

                     cout<<"Please choose which station you are going to depart from and arrive to: "<<endl;

                     cout<<"---------Zone 1---------"<<endl;
                     cout<<"1: Oslo"<<endl;
                     cout<<"2: Majorstuen"<<endl;
                     cout<<"3: National Theatre"<<endl;
                     cout<<"---------Zone 2---------"<<endl;
                     cout<<"4: Lillestrom"<<endl;
                     cout<<"5: Sandvika"<<endl;
                     cout<<"6: Asker"<<endl;
                     cout<<"---------Zone 3---------"<<endl;
                     cout<<"7: Slemmestad"<<endl;
                     cout<<"8: Frogner"<<endl;
                     cout<<"9: Aurskog"<<endl;

                     break;
        }
 //User Input Validity Check
        while(first1){
            do{
                cout<<" "<<endl;
                cout<<"From: ";
                cin>>menu_select_2;
            }
            while(first);{
                 if(menu_select_2 <= 9 &&menu_select_2 >0){
                    first = false;
                    break;
                }
                else if(menu_select_2 > 9 || menu_select_2 <=0){
                    cout<<"Please type 1 to 9: "<<endl;
                    first1 = true;
                }

            }//END User Input Validity Check

        }




      	//User Input Validity Check
        while(first1){
            do{
                cout<<" "<<endl;
                cout<<"To: ";
                cin>>menu_select_3;
            }
            while(first);{
                 if(menu_select_3 <= 9 &&menu_select_3 >0){
                    first = false;
                    break;
                }
                else if(menu_select_3 > 9 || menu_select_3 <=0){
                    cout<<"Please type 1 to 9: "<<endl;
                    first1 = true;
                }

            }

        }//END User Input Validity Check

        // assign values to later store in station object.
        switch(menu_select_2){
          
            case 1 :
            station_name_from = "Oslo";
            zone_from = 1;
            break;

            case 2 :
            station_name_from = "Majorstuen";
            zone_from = 1;
            break;

            case 3 :
            station_name_from = "National Theatre";
            zone_from = 1;
            break;

            case 4 :
            station_name_from = "Lillestrom";
            zone_from = 2;
            break;

            case 5 :
            station_name_from = "Sandvika";
            zone_from = 2;
            break;

            case 6 :
            station_name_from = "Asker";
            zone_from = 2;
            break;

            case 7 :
            station_name_from = "Slemmestad";
            zone_from = 3;
            break;

            case 8 :
            station_name_from = "Frogner";
            zone_from = 3;
            break;

            case 9 :
            station_name_from = "Aurskog";
            zone_from = 3;
            break;




        }




        // assign values to later store in station object.
        switch(menu_select_3){

            case 1 :
            station_name_to = "Oslo";
            zone_to = 1;
            break;

            case 2 :
            station_name_to = "Majorstuen";
            zone_to = 1;
            break;

            case 3 :
            station_name_to = "National Theatre";
            zone_to = 1;
            break;

            case 4 :
            station_name_to = "Lillestrom";
            zone_to = 2;
            break;

            case 5 :
            station_name_to = "Sandvika";
            zone_to = 2;
            break;

            case 6 :
            station_name_to = "Asker";
            zone_to = 2;
            break;

            case 7 :
            station_name_to = "Slemmestad";
            zone_to = 3;
            break;

            case 8 :
            station_name_to = "Frogner";
            zone_to = 3;
            break;

            case 9 :
            station_name_to = "Aurskog";
            zone_to = 3;
            break;


        }






        cout<<" "<<endl;



        cout<<"-------------------------------------------------------------------------"<<endl;
        cout<<"Choose your civil status:"<<endl;
        cout<<"1: Student"<<endl;
        cout<<"2: Soldier"<<endl;
        cout<<"3: Senior"<<endl;
        cout<<"4: Child"<<endl;
        cout<<"5: Adult"<<endl;

//User Input Validity Check
        while(first1){
            do{
                cout<<"Input:";
                cin>>menu_select_4;
                cout<<" "<<endl;
            }
            while(first);{

                 if(menu_select_4 <= 5 &&menu_select_4 >0){
                    first = false;
                    break;
                }
                else if(menu_select_4 > 5 || menu_select_4 <=0){
                    cout<<"Please type 1 to 5: "<<endl;
                    first1 = true;
                }

            }

        } //END User Input Validity Check



        //station objects
        Station* station_from = new Station(station_name_from,zone_from);
        Station* station_to = new Station(station_name_to,zone_to);


        //ticket object
        Ticket* travel = new Ticket(station_from->getStationName(),station_to->getStationName(),
        station_from->getZone(),station_to->getZone(),menu_select_4,menu_select_5);


        //printing out the ticket as a txt.
        travel->receipt();

        //printing out the output of the program
        cout<<" From: "<<station_from->getStationName()<<endl;

        cout<<" To: "<<station_to->getStationName()<<endl;

        cout<<" Price: "<<travel->ticket_Price()<<" kr"<<endl;

        cout<<"-----------------------------------------------"<<endl;


        //create a text file containing the ticket information
        travel->printReceipt();


        system("pause");
	} while(menu_select_1 != 0); // to ensure the program runs until you end it
}

int main(){
  //starts the program

	menu();

	return 0;
}
