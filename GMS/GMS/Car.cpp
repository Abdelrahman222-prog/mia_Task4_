#include "Car.h"

Car::Car(int num, string name, int age, string type, string team, float spd, float cap) : carNumber(num), fullName(name), Age(age), Type(type), racing_Team(team), Speed(spd), Capacity(cap)
{
	counter++;
	cout << "Car successfully checked_in" << endl;
}
void Car::display_info()
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
void Car::setAge(int a)
{
	while (a < 0) {
		cout << "invalid input , age must be positive !\nre-enter age:";
		cin >> a;
	}
	Age = a;
}
int Car::getAge()
{
	return Age;
}
void Car::setSpeed(float s)
{
	while (s<0){
		cout << "invalid input ,speed must be positive !\nre-enter speed:";
		cin >> s;
	}
	Speed = s;
}
float Car::getSpeed()
{
	return Speed;
}
void Car::setCapacity(float cap)
{

	while (cap< 0) {
		cout << "invalid input ,capacity must be positive !\nre-enter capacity:";
		cin >> cap;
	}
	Capacity = cap;
}
float Car::getCapacity()
{
	return Capacity;
}
int Car::ret_carNum()
{
	return carNumber;
}
void Car::setRacingTeam(string team)
{
	racing_Team = team;
}
string Car::getRacingTeam()
{
	return racing_Team;
}
int Car::counter = 0;


