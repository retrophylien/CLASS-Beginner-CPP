#include "ShopItem.h"

ShopItem::ShopItem()
{
    price = 0.00;
    name = "notset";
}

ShopItem::ShopItem( float newPrice, string newName )
{
    price = newPrice;
    name = newName;
}
