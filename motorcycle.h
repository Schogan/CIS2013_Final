#include <iostream>
#include <string>

using namespace std;

class motorcycle{
	private:
		string color;
		string make;
		string model;
		int year;
	public:
		
		motorcycle();
		~motorcycle();
		
			void setColor();
			void setYear();
			void setMake();
			void setModel();
			/*void getColor();
			void getYear();
			void getmake();
			void getModel();*/
			void getMotorcycleInfo();
};