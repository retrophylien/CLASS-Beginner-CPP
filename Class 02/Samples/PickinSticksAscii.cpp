#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class Map
{
    public:
    Map()
    {
        // Initialize Array
        for ( int y = 0; y < 4; y++ )
        {
            for ( int x = 0; x < 4; x++ )
            {
                tile[x][y] = ' ';
            }
        }

        GenerateSpecialCoordinates();
        currentX = rand() % 4;
        currentY = rand() % 4;
        tile[currentX][currentY] = 'o';
    }

    void GenerateSpecialCoordinates()
    {
        specialX = rand() % 4;
        specialY = rand() % 4;
        tile[specialX][specialY] = '#';
    }

    void Display()
    {
        system( "clear" );
        for ( int y = 0; y < 4; y++ )
        {
            for ( int x = 0; x < 4; x++ )
            {
                cout << "|" << tile[x][y];
            }
            cout << "|" << endl;
            cout << "----------" << endl;
        }
    }

    bool Move( char direction )
    {
        tile[currentX][currentY] = ' ';
        if ( direction == 'n' && currentY - 1 >= 0 )
        {
            currentY--;
        }
        else if ( direction == 's' && currentY + 1 < 4 )
        {
            currentY++;
        }
        else if ( direction == 'e' && currentX + 1 < 4 )
        {
            currentX++;
        }
        else if ( direction == 'w' && currentX - 1 >= 0 )
        {
            currentX--;
        }

        tile[currentX][currentY] = 'o';

        if ( currentX == specialX && currentY == specialY )
        {
            GenerateSpecialCoordinates();
            return true;
        }

        return false;
    }

    private:
    char tile[4][4];
    int currentX, currentY;
    int specialX, specialY;
};

int main()
{
    // Seed the random number
    srand( time( NULL ) );

    Map gameMap;

    bool done = false;
    char choice;
    int score = 0;
    while ( !done )
    {
        gameMap.Display();
        cout << endl;
        cout << "SCORE: " << score << endl;
        cout << "Enter n, s, e, w to move, or q to quit: ";
        cin >> choice;

        if ( choice == 'q' )
        {
            done = true;
        }
        else
        {
            if ( gameMap.Move( choice ) )
            {
                score++;
            }
        }
    }

    return 0;
}
