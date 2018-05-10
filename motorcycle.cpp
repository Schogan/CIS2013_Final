#include <iostream>
#include <string>
#include "motorcycle.h"

using namespace std;

string color;
string make;
string model;
int year;

motorcycle::motorcycle(){
	setColor();
	setMake();
	setModel();
	setYear();
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
/*
void getColor(){
	return color;
}

void getYear(){
	return year;
}

void getmake(){
	return make;
}

void getModel(){
	return model;
}
*/
void motorcycle::getMotorcycleInfo(){
	cout << "Your motorcycle has the following attributes:"<<endl;
	cout << "Year: "<<year<<endl;
	cout << "Make: "<<make<<endl;
	cout << "Model: "<<model<<endl;
	cout << "Color: "<<color<<endl;
}