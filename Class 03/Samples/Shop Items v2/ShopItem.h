#ifndef _SHOPITEM
#define _SHOPITEM

#include <string>
using namespace std;

class ShopItem
{
    public:
    ShopItem();
    ShopItem( float newPrice, string newName );

    float price;
    string name;
};

#endif
