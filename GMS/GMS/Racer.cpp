#include "Racer.h"
#include "Car.h"
Racer::Racer(int num, string name, int age, string type, string team, float spd, float cap, int r_c, int L):Car(num,name,age,type,team,spd,cap)
{
	r_comp = r_c;
	Laps = L;
}

void Racer::calc_per_score(float s, float cap)
{
	int perf;
	perf = s * 10 + cap * 1;
}

void Racer::diplay_info()
{
	Car::diplay_info();
	cout << "The number of races completed: " << r_comp << endl;
	cout << "The number of Laps completed: " << Laps << endl;

}
