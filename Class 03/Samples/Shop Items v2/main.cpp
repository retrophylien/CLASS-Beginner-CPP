#include <iostream>
#include "ShopItem.h"
using namespace std;

int main()
{
    ShopItem items[] = {
        ShopItem( 9.99, "Pizza" ),
        ShopItem( 3.99, "Sandwich" ),
        ShopItem( 4.99, "Porkchop" ),
        ShopItem( 0.99, "Soda Pop" ) };

    int itemChoice;
    int itemAmount;

    float totalPurchasePrice = 0;

    bool isProgramDone = false;

    while ( !isProgramDone )
    {
        // List the item options - Name and price
        cout << endl;
        cout << "PRICES" << endl;
        int index;
        for ( index = 0; index < 4; index++ )
        {
            cout << index << ". "
                << items[index].name
                << "\t $" << items[index].price << endl;
        }
        int quitValue = index;
        cout << quitValue << ". QUIT" << endl;

        // Get user's choice in item and quantity
        cout << endl;
        cout << "ITEM: ";
        cin >> itemChoice;

        if ( itemChoice == quitValue )
        {
            isProgramDone = true;
        }
        else if ( itemChoice >= 0 && itemChoice < 4 ) // must be valid choice
        {
            cout << "HOW MANY? ";
            cin >> itemAmount;

            // Add to the price (The price of the item multiplied by the amount of the item)
            totalPurchasePrice += items[itemChoice].price * itemAmount;
        }
        else
        {
            cout << "Invalid choice!" << endl;
        }
    }

    cout << endl;
    cout << "CHECKING OUT YOUR GROCERIES..." << endl;

    cout << "Total price:\t\t $" << totalPurchasePrice << endl;
    cout << "\n\nThank you for shopping at CPP SHOP" << endl;


    return 0;
}

