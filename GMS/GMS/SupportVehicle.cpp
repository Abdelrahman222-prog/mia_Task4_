#include "SupportVehicle.h"

SupportVehicle::SupportVehicle(int num, string name, int age, string type, string team, float spd, float cap, int c_s, int r_r):Car(num, name, age, type, team, spd, cap)
{
	crew_size = c_s;
	reliability_rating = r_r;
}

void SupportVehicle::calc_per_score(float s, float cap)
{
	int perf;
	perf = s * 5 + cap * 5;
}

void SupportVehicle::diplay_info()
{
    Car::diplay_info();
	cout << "crew size : " << crew_size<< endl;
	cout << "Reliability Rating : " << reliability_rating << endl;
}
