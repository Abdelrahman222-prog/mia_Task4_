#pragma once
#include "Car.h"
class SupportVehicle :public Car
{
private:
	int crew_size;
	int reliability_rating;
public:
	SupportVehicle(int num, string name, int age, string type, string team, float spd, float cap, int c_s, int r_r);
    void calc_per_score(float s, float cap);
	void display_info();
	void setRelRate(float r_r);
	float getRelRate();
	void setCrewSize(int c_s);
	int getCrewSize();
};

