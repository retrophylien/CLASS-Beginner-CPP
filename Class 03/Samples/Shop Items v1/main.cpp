#include <iostream>
#include "ShopItem.h"
using namespace std;

int main()
{
    ShopItem items[] = { ShopItem( 9.99, "Pizza" ), ShopItem( 3.99, "Sandwich" ),
                            ShopItem( 4.99, "Porkchop" ), ShopItem( 0.99, "Soda" ) };

    cout << "PRICES" << endl;
    for ( int index = 0; index < 4; index++ )
    {
        cout << index << ". "
            << items[index].name
            << " $" << items[index].price << endl;
    }

    return 0;
}

