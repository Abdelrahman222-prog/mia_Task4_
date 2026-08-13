#pragma once
#include "Car.h"
class SupportVehicle :public Car
{
private:
	int crew_size;
	int reliability_rating;
public:
	SupportVehicle(int num, string name, int age, string type, string team, float spd, float cap, int c_s, int r_r);
	virtual void calc_per_score(float s, float cap);
	virtual void diplay_info();
};

