#include <iostream>
#include <string>

using namespace std;

class motorcycle{
	private:
		string color="Red";
		string make="Harley";
		string model="Soft tail";
		int year=2018;
	public:
		
		motorcycle();
		~motorcycle();
		
			void setColor();
			void setYear();
			void setMake();
			void setModel();
			void getMotorcycleInfo();
};