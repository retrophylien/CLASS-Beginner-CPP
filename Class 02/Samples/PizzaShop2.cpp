/* Sample C++ program */
#include <iostream>
#include <string>
using namespace std;

class FoodItem
{
	public:
	string name;
	float price;
	int quantityBought;
	int choiceCode;
};

class ShopInterface
{
	public:
	ShopInterface()
	{
		pizza.name = "Pizza";
		pizza.price = 11.99;
		pizza.quantityBought = 0;
		pizza.choiceCode = 1;
	
		soda.name = "Soda";
		soda.price = 1.99;
		soda.quantityBought = 0;
		soda.choiceCode = 2;
	}
	
	void DisplayItemsForSale()
	{
		cout << "NAME\t\tPRICE" << endl;
		cout << pizza.choiceCode << ". " 
			<< pizza.name << "\t$" 
			<< pizza.price << endl;
		
		cout << soda.choiceCode << ". " 
			<< soda.name << "\t\t$" 
			<< soda.price << endl;
	}
	
	float CalculateTotal( int choice )
	{
		if ( choice == pizza.choiceCode )
		{
			cout << "$" << pizza.price << endl;
			pizza.quantityBought++;
			return pizza.price;
		}
		else if ( choice == soda.choiceCode )
		{
			cout << "$" << soda.price << endl;
			soda.quantityBought++;
			return soda.price;
		}
		else
		{
			cout << "Invalid choice code" << endl;
			return 0;
		}
	}
	
	void DisplayBoughtItems()
	{
		cout << "Bought " << pizza.quantityBought << " " << pizza.name << ", $" << pizza.price << " each = $" << (pizza.quantityBought * pizza.price) << " total" << endl;
		cout << "Bought " << soda.quantityBought << " " << soda.name << ", $" << soda.price << " each = $" << (soda.quantityBought * soda.price) << " total" << endl;
	}
	
	private:
	FoodItem pizza;
	FoodItem soda;
};

int main()
{	
	ShopInterface shop;
    
	bool done = false;
	float totalCharge = 0;
	
	// Keep looping program until user wants to quit
	while ( !done )
	{
		int choice;
		shop.DisplayItemsForSale();
		
		cout << endl;
		cout << "What would you like to buy? (or type '0' to quit)" << endl;
		cout << "Buy: ";
		cin >> choice;
		
		if ( choice == 0 )
		{
			// Quit program
			done = true;
		}
		else
		{
			// Buy item
			totalCharge += shop.CalculateTotal( choice );
		}
	}
	
	cout << "Thanks for visiting the Pizza Shop!" << endl;
	cout << endl;
	cout << "Here is your receipt: " << endl;
	shop.DisplayBoughtItems();
	cout << endl;
	cout << "Total charge is: $" << totalCharge << endl;
	
	return 0;
}
