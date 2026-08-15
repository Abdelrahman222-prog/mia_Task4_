#include "SupportVehicle.h"

SupportVehicle::SupportVehicle(int num, string name, int age, string type, string team, float spd, float cap, int c_s, int r_r):Car(num, name, age, type, team, spd, cap)
{
	calc_per_score(Speed, Capacity);
	crew_size = c_s;
	reliability_rating = r_r;
}

void SupportVehicle::calc_per_score(float s, float cap)
{ 
	perf_score = s * 5 + cap * 5;
}

void SupportVehicle::display_info()
{
    Car::display_info();
	cout << "crew size : " << crew_size<< endl;
	cout << "Reliability Rating : " << reliability_rating << endl;
}

void SupportVehicle::setRelRate(float r_r)
{
	reliability_rating = r_r;
}

float SupportVehicle::getRelRate()
{
	return reliability_rating;
}

void SupportVehicle::setCrewSize(int c_s)
{
	crew_size = c_s;
}

int SupportVehicle::getCrewSize()
{
	return crew_size;
}
