#include <iostream>
#include <string>
#include "motorcycle.h"

using namespace std;

string color="Red";
string make="Harley";
string model="Soft tail";
int year=2018;

motorcycle::motorcycle(){
	/*setColor();
	setMake();
	setModel();
	setYear();*/
}

motorcycle::~motorcycle(){
	
}
		
void motorcycle::setColor(){
	cout << "What color is your motorcycle?"<<endl;
	cin >> color;
}

void motorcycle::setYear(){
	cout << "What year is your motorcycle?"<<endl;
	cin >> year;
}

void motorcycle::setMake(){
	cout << "What make is your motorcycle?"<<endl;
	cin >> make;
}

void motorcycle::setModel(){
	cout << "What model is your motorcycle?"<<endl;
	cin >> model;
}

void motorcycle::getMotorcycleInfo(){
	cout << "Your motorcycle has the following attributes:"<<endl;
	cout << "Year: "<<year<<endl;
	cout << "Make: "<<make<<endl;
	cout << "Model: "<<model<<endl;
	cout << "Color: "<<color<<endl;
}