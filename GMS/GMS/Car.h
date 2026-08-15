#pragma once
#include <string>
#include <iostream>
using namespace std;
class Car//abstract class
{
protected: 
	int carNumber;
	string fullName;
	int Age;
	string Type;
	string racing_Team;
	float Speed;
	float Capacity;
	static int counter;
	float perf_score;
public:
	Car(int num, string name, int age, string type, string team, float spd, float cap);
	virtual void calc_per_score(float s, float cap)=0;
	virtual void display_info();
	~Car();
	void setAge(int a);
	int getAge();
	void setSpeed(float a);
	float getSpeed();
	void setCapacity(float a);
	float getCapacity();
    int ret_carNum();
	void setRacingTeam(string team);
	string getRacingTeam();
};


