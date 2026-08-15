// GMS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>
#include "Car.h"
#include "Racer.h"
#include "SupportVehicle.h"
#include <vector>//to store objects 
vector <unique_ptr<Racer>> Racers;
vector <unique_ptr<SupportVehicle>> Sup_vehicles;
int carNumber, Age;
string fullName, racing_Team, Type;
float Speed, Capacity;
int r_comp;//number of races completed 
int Laps;//number of laps
int crew_size;
float reliabilty_rating;
void Check_in() {
    cout << "Enter type of car (Racer or Support Vehicle) ->Case sensitive! :";
    cin >> Type;
    cout << "Enter full name of car:";
    cin >> fullName;
    cout << "Enter Car number (must be unique )";
    cin >> carNumber;
    for (const auto& userPtr : Racers) {
        while (carNumber == userPtr->ret_carNum()) {
            cout << "invalid input , Car number must be unique !\nre-enter Car number:";
            cin >> carNumber;
        }

    }
    for (const auto& userPtr : Sup_vehicles) {
        while (carNumber == userPtr->ret_carNum()) {
            cout << "invalid input , Car number must be unique !\nre-enter Car number:";
            cin >> carNumber;
        }

    }
    cout << "Enter age of car: ";
    cin >> Age;
    while (Age < 0) {
        cout << "invalid input , age must be positive !\nre-enter age:";
        cin >> Age;
    }
    cout << "Enter racing team of car:";
    cin >> racing_Team;
    cout << "Enter speed of car : ";
    cin >> Speed;
    while (Speed< 0) {
        cout << "invalid input , speed must be positive !\nre-enter speed:";
        cin >> Speed;
    }
    cout << "Enter capacity of car : ";
    cin >> Capacity;
    while (Capacity < 0) {
        cout << "invalid input , capacity must be positive !\nre-enter capacity:";
        cin >> Capacity;
    }
    if(Type == "Racer"){
        cout << "Enter number of races completed : ";
        cin >> r_comp;
        cout << "Enter number of laps : ";
        cin >> Laps;
        Racers.push_back(make_unique<Racer>(carNumber, fullName, Age, Type, racing_Team, Speed, Capacity, r_comp, Laps));
        

    }
    if (Type == "Support Vehicle") {
        cout << "Enter crew size  ";
        cin >> crew_size;
        cout << "Enter reliabilty rating ";
        cin >> reliabilty_rating;
        Sup_vehicles.push_back(make_unique<SupportVehicle>(carNumber, fullName, Age, Type, racing_Team, Speed, Capacity, crew_size,reliabilty_rating));


    }
}
void viewGarage() {
    for (const auto& userPtr : Racers ) {
        userPtr->display_info();
    }
    for (const auto& userPtr : Sup_vehicles) {
        userPtr->display_info();
    }
}
void Tune_up() {
    int task_num;
    cout << "choose car number from the upcoming list to update car's data:" << endl;
    for (const auto& userPtr : Racers) {
        cout << userPtr->ret_carNum() << endl;
    }
    for (const auto& userPtr : Sup_vehicles) {
        cout << userPtr->ret_carNum() << endl;
    }
    cin >> carNumber;
    for (const auto& userPtr : Racers) {
        if (carNumber == userPtr->ret_carNum()) {
            cout << "Choose what do you want to update from this list(choose attribute NUMBER) :"<<endl;
            cout << "1-Speed\n2-Capacity\n3-Age\n4-Racing team\n5-Number of races completed\n6-Number of laps completed" << endl;
            cin >> task_num;
            switch (task_num) {
            case (1):
                cout << "Enter new car speed:";
                cin >> Speed;
                userPtr->setSpeed(Speed);
            case(2):
                cout << "Enter new car capacity:";
                cin >> Capacity;
                userPtr->setCapacity(Capacity);
            case(3):
                cout << "Enter new car age:";
                cin >> Age;
                userPtr->setAge(Age);
            case(4):
                cout << "Enter new racing team:";
                cin >> racing_Team;
                userPtr->setRacingTeam(racing_Team);
            case(5):
                cout << "Enter new number of races completed:";
                cin >> r_comp;
                userPtr->setNumOfRaces(r_comp);
            case(6):
                cout << "Enter new number of laps completed:";
                cin >> Laps;
                userPtr->setLaps(Laps);
            }
            
        }

    }
    for (const auto& userPtr : Sup_vehicles) {
        if (carNumber == userPtr->ret_carNum()) {
            cout << "Choose what do you want to update from this list(choose attribute NUMBER) :" << endl;
            cout << "1-Speed\n2-Capacity\n3-Age\n4-Racing team\n5-Crew Size\n6-Reliability Rating" << endl;
            cin >> task_num;
            switch (task_num) {
            case (1):
                cout << "Enter new car speed:";
                cin >> Speed;
                userPtr->setSpeed(Speed);
            case(2):
                cout << "Enter new car capacity:";
                cin >> Capacity;
                userPtr->setCapacity(Capacity);
            case(3):
                cout << "Enter new car age:";
                cin >> Age;
                userPtr->setAge(Age);
            case(4):
                cout << "Enter new racing team:";
                cin >> racing_Team;
                userPtr->setRacingTeam(racing_Team);
            case(5):
                cout << "Enter new crew size:";
                cin >> crew_size;
                userPtr->setCrewSize(crew_size);
            case(6):
                cout << "Enter new reliability rating";
                cin >> reliabilty_rating;
                userPtr->setRelRate(reliabilty_rating);
            }

        }


    }

}
void FindCar() {
    cout << "Enter Car number you are searching for:";
    cin >> carNumber;
    for (const auto& userPtr : Racers) {
        if (carNumber == userPtr->ret_carNum()) {
            cout << "FOUND!" << endl;
            userPtr->display_info();
        }

    }
    for (const auto& userPtr : Sup_vehicles) {
        if (carNumber == userPtr->ret_carNum()) {
            cout << "FOUND!" << endl;
            userPtr->display_info();
        }

    }
}

int main()
{
    Check_in();
    viewGarage();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
