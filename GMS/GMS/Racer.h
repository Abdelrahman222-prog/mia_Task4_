#pragma once
#include "Car.h"
class Racer : public Car
{
private :
	int r_comp;//number of races completed 
	int Laps;//Laps Completed
 public:
	 Racer(int num, string name, int age, string type, string team, float spd, float cap,int r_c,int L);
	 virtual void calc_per_score(float s, float cap) ;
	 virtual void diplay_info();
};

