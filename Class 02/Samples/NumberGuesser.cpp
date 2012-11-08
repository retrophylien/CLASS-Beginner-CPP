#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class Opponent
{
    public:
    void NewRandomNumber()
    {
        randomNumber = rand() % 10 + 1;
        cout << "I am thinking of a number between 1 and 10..." << endl;
    }

    bool CheckGuess( int guess )
    {
        if ( guess > randomNumber )
        {
            cout << "Too high!" << endl;
            return false;
        }
        else if ( guess < randomNumber )
        {
            cout << "Too low!" << endl;
            return false;
        }
        else
        {
            cout << "You guessed it!" << endl;
            return true;
        }
    }

    private:
    int randomNumber;
};

int main()
{
    srand( time( NULL ) );
    Opponent opponent;
    opponent.NewRandomNumber();

    bool done = false;
    int choice;
    while ( !done )
    {
        cout << "Guess: ";
        cin >> choice;

        if ( opponent.CheckGuess( choice ) )
        {
            done = true;
        }
    }

    return 0;
}
