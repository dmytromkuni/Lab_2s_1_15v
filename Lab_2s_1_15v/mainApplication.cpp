#include "datacontrol.h"

#include <fstream>
#include <iostream>

//by default, 

/*void print_users(char* const USER_DATA)
{
	std::ifstream out(USER_DATA, std::ifstream::in | std::ifstream::binary);

	char temp[] = "";
	control::User buffer(temp, temp, temp, 0);

	while (!out.eof())
	{
		out.read((char*)&buffer, sizeof(buffer));	
		if (!out.good()) break;
		buffer.printInfo();
	}
	out.close();
}*/

int main()
{
	char USER_DATA[20] = "user.dat"; // you can change default name of the binary file with user data here
	char CITY_DATA[20] = "city.dat"; // you can change default name of the binary file with city data here

	//control::welcome_menu(USER_DATA, CITY_DATA);

	//control::printAllUsers(USER_DATA);
	control::printAllCities(CITY_DATA);

}

