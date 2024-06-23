#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <string>
#include<ctype.h>
#include<cctype>


using namespace std;

int main()
{

	int lchoice;
	int back;
	int code;	
	string phone_num;
	int phn_num;
	int get;
	int w_age;
	int p_age;
	char destination[30];
	std::string gender;
	std::string fname,lname,Address;
	char airport_name[30];
	char contact_us[11];
	char flightname[10];
	int arrival_time,departure_time;
	int departure_time_hours;
	int departure_time_min;
	int arrival_time_hours;
	int arrival_time_min;
	char arrival_airport;
	int flight_number;
	std::string age,sex,id;
	char char_choice='y';

	system("CLS");
	cout<<"\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd"<<endl;
	cout << "\t    AIRPORT MANAGEMENT SYSTEM \n";
	cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;
	cout<<"   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd MENU OPTIONS \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;

	 cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
	 cout<<" \t ADD THE AIRPORT DETAILS      ------ [1] \n   "<<endl;

	 cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
 	cout<<"  \t ADD THE WORKERS DETAILS      ------ [2] \n  "<<endl;

 	cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
 	cout<<" \t ADD THE PASSENGERS DETAILS   ------ [3] \n  "<<endl;

 	cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
 	cout<<" \t ADD THE FLIGHTS DETAILS      ------ [4] \n  "<<endl;

 	cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
 	cout<<" \t DISPLAY AIRPORT DETAILS      ------ [5] \n  "<<endl;

 	cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
 	cout<<" \t DISPLAY WORKERS DETAILS      ------ [6] \n  "<<endl;

 	cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
 	cout<<" \t DISPLAY PASSENGERS DETAILS   ------ [7] \n "<<endl;

 	cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
 	cout<<" \t DISPLAY FLIGHTS DETAILS      ------ [8] \n "<<endl;

 	cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
 	cout<<" \t EXIT                         ------ [9] \n "<<endl;

 	cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
 	cout<<"\t Enter the Choice:      "    ;
 	cin>>lchoice;
 	ofstream airport;
 	airport.open("airport.txt", ios::out | ios::app);
	do{
 	switch(lchoice)
 	{
 		case 1:
 		{
 		 int	flag=0;
    do
    {
        flag=1;
        cout<<"\nEnter The Airport Code:- ";
        while(!(cin>>code))
        {
            cout<<"\nEnter Correct Code:- ";
            cin.clear();
            cin.ignore(123, '\n');
        }
    }
    while(flag!=1);

			 fflush(stdin);
			 z:
 			 cout<<"\nEnter the Country name    "<<endl;
			 cin>>destination;
             int a = 0, na = 0;
			for(int i = 0; destination[i] != '\0'; i++){
				if(isalpha(destination[i])){
					a++;
				} else {
					na++;
				}
			}
			if(na != 0){
				cout<<"Invalid Country Name";
				goto z;
			}
			 airport<<destination;

			 fflush(stdin);
			 y:
			 cout<<"   Enter the Airport name    "<<endl;
			 cin>>airport_name;
			 int alpha = 0, nalpha = 0;
			for(int i = 0; airport_name[i] != '\0'; i++){
				if(isalpha(airport_name[i])){
					alpha++;
				} else {
					nalpha++;
				}
			}
			if(nalpha != 0){
				cout<<"Invalid Airport Name";
				goto y;
			}

			 airport<<airport_name;
			 fflush(stdin);
			 x:
			 cout<<"   Enter the Contact us    "<<endl;
			cin.getline(contact_us, 11);
			int d = 0, nd = 0;
			for(int i = 0; contact_us[i] != '\0'; i++){
				if(isdigit(contact_us[i])){
					d++;
				} else {
					nd++;
				}
			}
			if(nd != 0){
				cout<<"INVALID";
				goto x;
			}

			fstream airport;
  			airport.open("airport.txt", std::ios_base::app);
   		 	if (!airport){
        	cout<<"Error while creating the file";
    			}
    		else{
        	cout<<"File created successfully";
        	airport<<"Airport code : "<<code<<"\nCountry name :"<<destination<<"\nAirport name :"<<airport_name<<"\nContact us :"<<contact_us<<"\n"<<endl;
    		}
    		airport.close();
 		}
 		break;

 		case 2:
 		{
 			fflush(stdin);
			 d:
 			cout<<"   Enter the First Name   " <<endl;
			 cin>>fname;
			int f = 0, nf = 0;
			for(int i = 0; fname[i] != '\0'; i++){
				if(isalpha(fname[i])){
					f++;
				} else {
					nf++;
				}
			}
			if(nf != 0){
				cout<<"INVALID";
				goto d;
			}



 			fflush(stdin);
			 c:
			 	cout<<"   Enter the Last Name   " <<endl;
			 cin>>lname;
 			int l = 0, nl = 0;
			for(int i = 0; lname[i] != '\0'; i++){
				if(isalpha(lname[i])){
					l++;
				} else {
					nl++;
				}
			}
			if(nl != 0){
				cout<<"INVALID";
				goto c;
			}
               
                fflush(stdin);
			 b:
 			cout<<"   Enter the Address    "<<endl;
			  cin>>Address ;
			  int add = 0, nadd = 0;
			for(int i = 0; Address[i] != '\0'; i++){
				if(isalpha(Address[i])){
					add++;
				} else {
					nadd++;
				}
			}
			if(nadd != 0){
				cout<<"INVALID";
				goto b;
			}

			   label2:
 			cout<<" Enter the age  "<<endl;
 			fflush(stdin);
			 cin>>w_age;
			  if(w_age < 0 || w_age > 100)  {
 			   cout<<"Error: Age must be between 0 and 100."<<endl;
 			   
  		 	goto label2;
			}

			cout<<" Enter the Gender "<<endl;
			cin>>gender;
			 if (gender != "male" && gender != "female") {
    		cout << "Invalid input. Please enter either 'male' or 'female'." << endl;
    		cin >> gender;
			}

			fstream workers;
			workers.open("workers.txt", std::ios_base::app);
   		 	if (!workers){
        	cout<<"Error while creating the file";
    			}
    		else{
        	cout<<"File created successfully";
        	workers<<"First Name  : "<<fname<<"\nLast Name :"<<lname<<"\nAddress :"<<Address <<"\nage :"<<w_age<<"\ngender :"<<gender<<"\n"<<endl;
        	workers.close();
        		}
 		}
 		break;

 		case 3:
 		{
 			bool isValid = true;
 			fflush(stdin);
			 e:
 			cout<<"   Enter the First Name   " <<endl;
			 cin>>fname;
			 int fn = 0, nfn = 0;
			for(int i = 0; fname[i] != '\0'; i++){
				if(isalpha(fname[i])){
					fn++;
				} else {
					nfn++;
				}
			}
			if(nfn != 0){
				cout<<"INVALID";
				goto e;
			}

			 fflush(stdin);
			 f:
 			cout<<"   Enter the Last Name    "<<endl;
			 cin>>lname;
			int ln = 0, nln = 0;
			for(int i = 0; lname[i] != '\0'; i++){
				if(isalpha(lname[i])){
					ln++;
				} else {
					nln++;
				}
			}
			if(nln != 0){
				cout<<"INVALID";
				goto f;
			}
			  
       		label1:
			cout<<" Enter the age  "<<endl;
 			fflush(stdin);
			 cin>>p_age;
			 
			 if(!isdigit(p_age)){
			 	cout<<"Error: Age must be between 0 and 100."<<endl;
   			//goto label1;	
   				cin>>w_age;
			 }
			 
			 if (p_age < 0 || p_age > 100) {
    		cout<<"Error: Age must be between 0 and 100."<<endl;
   			goto label1;
			}

			 cout<<" Enter the gender  "<<endl;
			 cin>>sex;
			  if (sex != "m" && sex != "f") {
    		cout << "Invalid input. Please enter either 'male' or 'female'." << endl;
   			 cin >> sex;
			}

			  fflush(stdin);
			 h:
			 cout<<"   Enter the ID   "<<endl;
			 cin>>id;
			int d = 0, nd = 0;
			for(int i = 0; id[i] != '\0'; i++){
				if(isdigit(id[i])){
					d++;
				} else {
					nd++;
				}
			}
			if(nd != 0){
				cout<<"INVALID";
				goto h;
			}

			fstream passengers;
			passengers.open("passengers.txt", std::ios_base::app);
   		 	if (!passengers){
        	cout<<"Error while creating the file";
    			}
    		else{
        	cout<<"File created successfully";
        	passengers<<"First Name :"<<fname<<"\nLast Name :"<<lname<<"\nage :"<<p_age<<"\nSex :"<<sex<<"\nID :"<<id<<phn_num<<"\n"<<endl;
        	passengers.close();
    		}
 		}
 		break;

 		case 4:



 			{
			bool isValid = true;
			fflush(stdin);
			 		w:
 				cout<<"   Enter the Flight name   "<<endl;
 				cin>>flightname;
 				int fl = 0, nfl = 0;
				for(int i = 0; flightname[i] != '\0'; i++){
				if(isalpha(flightname[i])){
					fl++;
				} else {
					nfl++;
				}
			}
			if(nfl != 0){
				cout<<"INVALID";
				goto w;
			}

   			 int flag=0;
    		do
		    {
		        flag=1;
		        cout<<"\nEnter The Flight Number:- ";
		        fflush(stdin);
		        while(!(cin>>flight_number))
		        {
		            cout<<"\nEnter Correct Flight Number:- ";
		            cin.clear();
		            cin.ignore(123, '\n');
		        }
		    }
		    while(flag!=1);
   
		    flag=0;
		 	do
		    {
		        flag=1;
		        cout<<"\nEnter The Departure Time hours less than 24:- ";
		        fflush(stdin);
		        while(!(cin>>departure_time_hours))
		        {
		            cout<<"\nEnter Correct Departure Time:- ";
		            cin.clear();
		            cin.ignore(123, '\n');
		        }
		        
		        if(departure_time_hours>24){
		        	cout<<"\nDeparture Time should be less than 24:- ";
		            cin.clear();
		            cin.ignore(123, '\n');
		            flag=0;
				}
		        
		    }
		    while(flag!=1);

	flag=0;
		 	do
		    {
		        flag=1;
		        cout<<"\nEnter The Departure Time minutes (less than 60):- ";
		        fflush(stdin);
		        while(!(cin>>departure_time_min))
		        {
		            cout<<"\nEnter Correct Departure Time:- ";
		            cin.clear();
		            cin.ignore(123, '\n');
		        }
		        
		        if(departure_time_min>60){
		        	cout<<"\nDeparture minutes should be less than 60:- ";
		            cin.clear();
		            cin.ignore(123, '\n');
		            flag=0;
				}
		        
		    }
		    while(flag!=1);



		 		    flag=0;
		 	do
		    {
		        flag=1;
		        cout<<"\nEnter The Arrival Time hours less than 24:- ";
		        fflush(stdin);
		        while(!(cin>>arrival_time_hours))
		        {
		            cout<<"\nEnter Correct Arrival Time:- ";
		            cin.clear();
		            cin.ignore(123, '\n');
		        }
		        
		        if(arrival_time_hours>24){
		        	cout<<"\nArrival Time should be less than 60:- ";
		            cin.clear();
		            cin.ignore(123, '\n');
		            flag=0;
				}
		        
		    }
		    while(flag!=1);

	flag=0;
		 	do
		    {
		        flag=1;
		        cout<<"\nEnter The Arrival Time minutes (less than 60):- ";
		        fflush(stdin);
		        while(!(cin>>arrival_time_min))
		        {
		            cout<<"\nEnter Correct Arrival Time:- ";
		            cin.clear();
		            cin.ignore(123, '\n');
		        }
		        
		        if(arrival_time_min>60){
		        	cout<<"\nArrival minutes should be less than 24:- ";
		            cin.clear();
		            cin.ignore(123, '\n');
		            flag=0;
				}
		        
		    }
		    while(flag!=1);

    		while(flag!=1);
 			fstream flights;
			flights.open("flights.txt", std::ios_base::app);
   		 	if (!flights){
        	cout<<"Error while creating the file";
    			}
    		else{
        	cout<<"File created successfully";
        	flights<<"Flight name :"<<flightname<<"\nFlight number :"<<flight_number<<"\ndeparture time :"<<departure_time_hours<<":"<<departure_time_min<<"\nArrival time :"<<arrival_time_hours<<":"<<arrival_time_min<<"\n"<<endl;
        	flights.close();
    		}
			 }
			 break;

    	case 5:
    		{
    			string text;
    			ifstream airport("airport.txt");
    		while(getline(airport,text)){
    			cout<<text<<endl;
			}
			airport.close();
			}
			break;

		case 6:
			{
				string text;
    			ifstream workers("workers.txt");
    		while(getline(workers,text)){
    			cout<<text<<endl;
			}
			workers.close();
			}
			break;

		case 7:
			{
				string text;
    			ifstream passengers("passengers.txt");
    		while(getline(passengers,text)){
    			cout<<text<<endl;
			}
			passengers.close();
			}
			break;

		case 8:
			{
				string text;
    			ifstream flights("flights.txt");
    		while(getline(flights,text)){
    			cout<<text<<endl;
			}
			flights.close();
			}
			break;

		case 9:
			{
				cout<<"   Thank you come again  "<<endl;
			}

			cout<<"\n   PROCESS COMPLETED...\n\n";
			break;

			default: cout<<" Enter the valid Number \n\n";
		break;

	 }
	 
	cout<<"\nWould you rather continue(Y/N): ";
				cin>>char_choice;
        		if(char_choice == 'y' || char_choice == 'Y'){
    cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
	cout<<" \t ADD THE AIRPORT DETAILS      ------ [1] \n   "<<endl;

	cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
 	cout<<"  \t ADD THE WORKERS DETAILS      ------ [2] \n  "<<endl;

 	cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
 	cout<<" \t ADD THE PASSENGERS DETAILS   ------ [3] \n  "<<endl;

 	cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
 	cout<<" \t ADD THE FLIGHTS DETAILS      ------ [4] \n  "<<endl;

 	cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
 	cout<<" \t DISPLAY AIRPORT DETAILS      ------ [5] \n  "<<endl;

 	cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
 	cout<<" \t DISPLAY WORKERS DETAILS      ------ [6] \n  "<<endl;

 	cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
 	cout<<" \t DISPLAY PASSENGERS DETAILS   ------ [7] \n "<<endl;

 	cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
 	cout<<" \t DISPLAY FLIGHTS DETAILS      ------ [8] \n "<<endl;

 	cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
 	cout<<" \t EXIT                         ------ [9] \n "<<endl;

 	cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
 	cout<<"\t Enter the Choice:      "    ;
 	cin>>lchoice;
 	
		}
	}
	while(char_choice == 'y' || char_choice == 'Y');	
}





