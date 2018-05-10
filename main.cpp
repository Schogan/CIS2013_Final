#include <iostream>
#include <string>
#include "motorcycle.h"

using namespace std;

int main(){
	char action='a';
	motorcycle Motorcycle;
	
	while (action != 'X') {
		cout << "what would you like to do?"<<endl;
		cout << "Change motorcycle Color (C)"<<endl;
		cout << "Change motorcycle year (Y)"<<endl;
		cout << "Change motorcycle Make (M)"<<endl;
		cout << "Change motorcycle Model (D)"<<endl;
		cout << "Print motorcycle information (P)"<<endl;
		cout << "Exit program (X)"<<endl;
		cin >> action;
		switch(action){
			case 'C':
				Motorcycle.setColor();
				break;
			case 'Y':
				Motorcycle.setYear();
				break;
			case 'M':
				Motorcycle.setMake();
				break;
			case 'D':
				Motorcycle.setModel();
				break;
			case 'P':
				Motorcycle.getMotorcycleInfo();;
				break;
			case 'X':
				cout<< "goodbye";
		}
	}
	
}