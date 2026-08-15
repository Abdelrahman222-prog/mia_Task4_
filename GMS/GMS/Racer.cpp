#include "Racer.h"
#include "Car.h"
Racer::Racer(int num, string name, int age, string type, string team, float spd, float cap, int r_c, int L):Car(num,name,age,type,team,spd,cap)
{
   calc_per_score(Speed, Capacity);
	r_comp = r_c;
	Laps = L;
}

void Racer::calc_per_score(float s, float cap)
{
	perf_score = s * 10 + cap * 1;
}

void Racer::display_info()
{
	Car::display_info();
	cout << "The number of races completed: " << r_comp << endl;
	cout << "The number of Laps completed: " << Laps << endl;

}

void Racer::setNumOfRaces(int races)
{
	r_comp = races;
}

int Racer::getNumOfRaces()
{
	return r_comp;
}

void Racer::setLaps(int laps)
{
	Laps = laps;
}

int Racer::getLaps()
{
	return Laps;
}


