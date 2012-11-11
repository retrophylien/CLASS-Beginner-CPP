#include <iostream>
#include "Car.h"
using namespace std;

int main()
{
    Car ferrari;

    bool done = false;

    while ( !done )
    {
        // Show options menu
        cout << "\n CHOOSE AN OPTION" << endl;
        cout << "\t 1. Turn on car" << endl;
        cout << "\t 2. Change gear" << endl;
        cout << "\t 3. Press gas pedal" << endl;
        cout << "\t 4. Quit" << endl;

        // Get user input
        int choice;
        cin >> choice;

        if ( choice == 1 )
        {
            ferrari.TurnOnCar();
        }
        else if ( choice == 2 )
        {
            cout << "What gear? ";
            cin >> choice;
            ferrari.SetGear( choice );
        }
        else if ( choice == 3 )
        {
            ferrari.PressGasPedal();
        }
        else if ( choice == 4 )
        {
            done = true;
        }
        else
        {
            cout << "Invaild command!" << endl;
        }
    }

    return 0;
}


