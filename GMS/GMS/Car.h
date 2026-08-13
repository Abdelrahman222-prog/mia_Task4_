#pragma once
#include <string>
#include <iostream>
using namespace std;
class Car//abstract class
{
private :
	int carNumber;
	string fullName;
	int Age;
	string Type;
	string racing_Team;
	float Speed;
	float Capacity;
	float perf_score;
	static int counter;
	
public:
	Car(int num, string name, int age, string type, string team, float spd, float cap);
	virtual void calc_per_score(float s, float cap)=0;
	virtual void diplay_info();
	~Car();
};

