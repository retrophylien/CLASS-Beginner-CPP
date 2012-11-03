#include <iostream>
using namespace std;

/* Grocery Store! */

class FoodItem
{
    public:
    int quantityInStore;
    float price;
};

int main()
{
    // Setup
    FoodItem pizza;
    pizza.quantityInStore = 100;
    pizza.price = 11.99;

    FoodItem soda;
    soda.quantityInStore = 25;
    soda.price = 1.99;

    // Output Information
    cout << "Welcome to the Pizza Shop!" << endl;
    cout << "Here is the menu:" << endl;
    cout << endl;
    // Note, the "\t" flags will be replaced with a tab in the console window.
    cout << "Pizza \t PRICE: $" << pizza.price << " \t QUANTITY: " << pizza.quantityInStore << endl;
    cout << "Soda \t PRICE: $" << soda.price << " \t QUANTITY: " << soda.quantityInStore << endl;
    cout << endl;

    float totalStoreValue = (pizza.price * pizza.quantityInStore) + (soda.price * soda.quantityInStore);
    cout << "If you bought EVERYTHING, you would pay: $" << totalStoreValue << endl;
}
