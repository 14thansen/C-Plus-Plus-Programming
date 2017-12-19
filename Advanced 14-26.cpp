#include <iostream>
#include <string>
#include <fstream>

//function prototypes
void saveCity();
void searchCity();
void searchZip();

using namespace std;
int main(int argc, char *argv[])
{
	int menuOption = 0;
	
	while (menuOption != 4)
	{
		//display menu and get option
		cout << endl;
		cout << "1  Enter city information" << endl;
		cout << "2  Search for ZIP code by city name" << endl;
		cout << "3  Search for city name by ZIP code" << endl;
		cout << "4  Exit program" << endl;
		cout << "Enter menu option: ";
		cin >> menuOption;
		cout << endl;
		
		//call appropriate function
		if (menuOption == 1)
			saveCity();
		else 
			if (menuOption == 2)
				searchCity();
			else 
				if (menuOption == 3)
					searchZip();
				//end if
			//end if
		//end if
	}//end while
}//end of main function

//*****function definitions*****
void saveCity()
{
	//declare strings and variables
	string cityName = "";
	string zipCode = "";
	
	//create file object and open the file
	ofstream outFile;
	outFile.open("cities.txt", ios::app);
	
	//determine if the file was opened
	if (outFile.is_open())
	{
		//get the City name
		cout << "City name (-1 to stop): ";
		cin.ignore(100, '\n');
		getline(cin, cityName);
		while (cityName != "-1")
		{
			//get zip code
			cout << "ZIP code: ";
			getline(cin, zipCode);
			//Write the record
			outFile << cityName << '#' << zipCode << endl;
			//get another city name
			cout << "City Name (-1 to stop): ";
			getline(cin, cityName);
		}//end while
		
		//close file
		outFile.close();
	}
	else 
		cout << "File could not be opened." << endl;
	//end if
}//end of saveCity function

void searchCity()
{
	//declare strings and variables
	string cityName = "";
	string city = "";
	string zipCode = "";
	string zip = "";
	
	//create file object and open the file
	ifstream inFile;
	inFile.open("cities.txt");
	
	//determine if the file was open
	if (inFile.is_open())
	{
		//get the desired city name
		cout << "Name of the city, the names of the cities are case sensitive (-1 to stop): ";
		cin.ignore(100, '\n');
		getline(cin, city);
		zip = "0";
			
		//read a city name
		getline(inFile, cityName, '#');
		getline(inFile, zipCode);
			
		while (!inFile.eof())
		{
			//cout << city << ", " << cityName << endl;
			//display zip code
			if (cityName == city)
			{
				zip = zipCode;
				cout << city << ", " << zip << endl;
			}//end if
			//read another city name
			getline(inFile, cityName, '#');
			getline(inFile, zipCode);
		}//end while
		if (zip == "0" && city != "-1")
			cout << endl << "City not stored in data." << endl;
		//end if
		//close the file
		inFile.close();
	}
	else 
		cout << "File could not be opened." << endl;
	//end if
}//end of searchCity function

void searchZip()
{
	//declare strings and variables
	string cityName = "";
	string city = "";
	string zipCode = "";
	string zip = "";
	
	//creat file object and open the file
	ifstream inFile;
	inFile.open("cities.txt");
	
	//determine if the file was open
	if (inFile.is_open())
	{
		//get the desired city name
		cout << "ZIP code (-1 to stop): ";
		cin.ignore(100, '\n');
		getline(cin, zip);
		city = "0";
			
		//read a city name
		getline(inFile, cityName, '#');
		getline(inFile, zipCode);
			
		while (!inFile.eof())
		{
			//display zip code
			if (zipCode == zip)
			{
				city = cityName;
				cout << city << ", " << zip << endl;
			}//end if
			//read another city name
			getline(inFile, cityName, '#');
			getline(inFile, zipCode);
		}//end while
		if (city == "0" && zip != "-1")
			cout << endl << "ZIP code not stored in data." << endl;
		//end if
		//close the file
		inFile.close();
	}
	else 
		cout << "File could not be opened." << endl;
	//end if
}//end of searchZip function