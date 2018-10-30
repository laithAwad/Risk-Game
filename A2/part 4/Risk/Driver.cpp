#include "Driver.h"
#include <sstream>
using namespace std;

Driver::Driver()
{
}


Driver::~Driver()
{
}

void Driver::start()
{
}

void Driver::reinforce(Map worldmap, Player* player)
{
	int x = worldmap.getNumberOfCountries(*player);
	if (x < 3) {
		x = 3;
	}

	string name;
	cout << "NUMBER OF COUNTRIES BY DAVID:" << x << endl;
	cout << "Here are the countries owned by David :" << player->getCountries() << endl << "You have " << x << " armies to place." << endl;
	for (int a = 0;a < x; a++) {
		cout << "Please enter a country from that list (case-sensitive) where you would like to place 1 army." << endl;
		cin >> name;
		worldmap.getCountry(name)->addArmy(1);
		cout << "NUMBER OF ARMIES OF " << worldmap.getCountry(name)->getCountryName() << " : " << worldmap.getCountry(name)->getArmyNumber() << endl;
	}

}

void Driver::reinforce2(Map worldmap, Player* player)
{
	int x = worldmap.getNumberOfCountries(*player);
	if (x < 3) {
		x = 3;
	}
	x += player->ifOwnContinent();

	string name;
	cout << "NUMBER OF COUNTRIES BY JOHN:" << x << endl;
	cout << "Here are the countries owned by John :" << player->getCountries() << endl << "You have " << x << " armies to place." << endl;
	for (int a = 0;a < x; a++) {
		cout << "Please enter a country from that list (case-sensitive) where you would like to place 1 army." << endl;
		cin >> name;
		worldmap.getCountry(name)->addArmy(1);
		cout << "NUMBER OF ARMIES OF " << worldmap.getCountry(name)->getCountryName() << " : " << worldmap.getCountry(name)->getArmyNumber() << endl;
	}

}

void Driver::attack(Player* p)
{
}

void Driver::fortify(Player* p)
{
}
