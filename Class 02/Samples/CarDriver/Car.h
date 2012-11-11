#ifndef _CAR
#define _CAR

class Car
{
    public:
    Car();

    bool TurnOnCar();
    void SetGear( int gear );
    void PressGasPedal();

    private:
    int currentGear;
    bool isOn;
    int distance;
};

#endif

