
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <ctime>
#include <stdio.h>

//

using namespace std;

struct Menu
{	string Soup;
	string Salad;
	string Entree;
	string MainCourse;
	string Dessert;
 
}normal, vegetarian; //Variables

//

int main()
{
	
	Menu normal[365] = {
		//January
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		//February
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		//March
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		//April
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		//May
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		//June
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		//July
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
	};
	
	Menu vegetarian[365] = {
		//January
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		//February
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		//March
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		//April
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		//May
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		//June
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		//July
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		{"", "", "", "", "" },
		
	};
	
	
//Obtain local system time
				  
	time_t now = time(0);
	
	tm *ltm = localtime(&now);


//Assign numerical value to the obtained date counting from Jan 1
	
	int day = ltm->tm_mday;
    
	int* Tday = &day;    
    
 	int today = *Tday;
	
//Main Interface for selecting options	

	int mainselect = 0;
 
	startover:
	
	do
	
	{
			
		cout << "\n ||=================|| \n";
		cout << "\n       MENU   " << today << endl;
		cout << "\n ||=================|| \n";
		cout << "\n Select an option :\n";
		cout << "\n  1. Daily Menu\n";
		cout << "  2. Daily Vegetarian Menu \n";
		cout << "  3. Exit \n\n"; 
		cout << " Select (1-3):";
		scanf( "%d", &mainselect );
		
	}	while((mainselect < 1) && (mainselect > 4));
 
 //Option outputs
 
	switch(mainselect)
	
	{	
		
		case 1:
		
			cout << "\n";
			cout << " Generating Daily Menu... \n";
			cout << " Generated Successfully! \n";
			
			for( int i = today ; i < today + 1 ; i ++ )
			
			//Generate text file
		
			{
				
			ofstream myFile;
			
			myFile.open ("Daily Menu.txt");
			
			myFile << "\n|==============================| \n";
			myFile << "             MENU   ";
			myFile << "\n|==============================| \n\n";
			myFile << " Soup: " << normal[i].Soup << endl;
			myFile << " Salad: " << normal[i].Salad << endl;
			myFile << " Entree: " << normal[i].Entree << endl;
			myFile << " Main Course: " << normal[i].MainCourse << endl;
			myFile << " Dessert: " << normal[i].Dessert << endl;
			myFile << "\n============================== \n\n\n";
			
			string menuNormal;
			
			ifstream file ("Daily Menu.txt");
			
			while (getline(file,menuNormal))
				
			cout << menuNormal << endl;
			file.close();
				
			}
			
			cout << "\n Returning to main selection menu. ";
			cout << "\n|=================================| \n\n\n";
				
			goto startover;
			
              
		case 2:
		
			cout << "\n";
			cout << " Generating Daily Vegetarian Menu... \n";
			cout << " Generated Successfully! \n";
            
			for( int i = today ; i < today + 1 ; i ++ )
			
			//Generate text file	
		
			{
				
			ofstream myFile;
			
			myFile.open ("Vegetarian Menu.txt");
			
			myFile << "\n|==============================| \n";
			myFile << "         VEGETARIAN MENU   ";
			myFile << "\n|==============================| \n\n";
			myFile << " Soup: " << vegetarian[i].Soup << endl;
			myFile << " Salad: " << vegetarian[i].Salad << endl;
			myFile << " Entree: " << vegetarian[i].Entree << endl;
			myFile << " Main Course: " << vegetarian[i].MainCourse << endl;
			myFile << " Dessert: " << vegetarian[i].Dessert << endl;
			myFile << "\n|==============================| \n\n\n";
			
			string menuVeg;
			
			ifstream file ("Vegetarian Menu.txt");
			
			while (getline(file,menuVeg))
			
			cout << menuVeg << endl;
			file.close();
				
			}
			
			cout << "\n Returning to main selection menu. ";
			cout << "\n|=================================| \n\n\n";	
			
			goto startover;
			
            
		case 3:
		
			cout << "Closing...\n";
			
			exit(0);
			return 0;
			
            
		default:
		
			cout << "Invalid option \n";	
			goto startover;
			
	}
	
return 0;
}
