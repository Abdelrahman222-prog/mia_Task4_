#include "Car.h"

Car::Car(int num, string name, int age, string type, string team, float spd, float cap) : carNumber(num), fullName(name), Age(age), Type(type), racing_Team(team), Speed(spd), Capacity(cap)
{
	calc_per_score(Speed, Capacity);
	counter++;
	cout << "Car successfully checked_in" << endl;
}
void Car::diplay_info()
{
	cout << "Car data: \n";
	cout << "Car number : " << carNumber << "\tCar name : " << fullName << "\tAge in racing seasons: " << Age << endl;
	cout << "Car type : " << Type << "\tRacing team : " << racing_Team << "\tSpeed: " << Speed << endl;
	cout << "\tCapacity: " << Capacity << endl;
}
Car::~Car()
{
	counter--;
}
int Car::counter = 0;


