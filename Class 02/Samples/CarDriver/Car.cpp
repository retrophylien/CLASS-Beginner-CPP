#include "Car.h"
#include <iostream>
using namespace std;

Car::Car()
{
    distance = 0;
    isOn = false;
    currentGear = 0;
}

bool Car::TurnOnCar()
{
    if ( isOn == false )
    {
        isOn = true;
        cout << "You turn the car on." << endl;
        return true;
    }

    cout << "The car is already on." << endl;
    return false;
}

void Car::SetGear( int gear )
{
    // 0 = Park, 1 = Drive, 2 = Reverse
    if ( gear >= 0 && gear < 3 )
    {
        cout << "You change the gear to ";
        if ( gear == 0 )
            cout << "Park" << endl;
        else if ( gear == 1 )
            cout << "Drive" << endl;
        else
            cout << "Reverse" << endl;

        currentGear = gear;
    }
    else
    {
        cout << "You can only change to gears: " << endl;
        cout << "\t 0. Park" << endl;
        cout << "\t 1. Drive" << endl;
        cout << "\t 2. Reverse" << endl;
    }
}

void Car::PressGasPedal()
{
    if ( isOn == false || currentGear == 0 )
    {
        // Either the car is not on, or we're in park.
        cout << "You press the gas pedal, but the car does not move." << endl;
    }
    else if ( currentGear == 1 )
    {
        // We are in drive
        cout << "You drive the car forward" << endl;
        distance += 1;
    }
    else if ( currentGear == 2 )
    {
        // We are in reverse
        cout << "You drive the car backward" << endl;
        distance -= 1;
    }

    cout << "Distance is " << distance << endl;
}







