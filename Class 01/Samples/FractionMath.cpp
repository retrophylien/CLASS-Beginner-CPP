#include <iostream>
using namespace std;

class Fraction
{
	public:
	int n; // numerator
	int d; // denominator
	
	void InputFraction()
	{
		cout << "Please enter the numerator: ";
		cin >> n;
		cout << "Please enter the denominator: ";
		cin >> d;
		cout << "\n";
	}
};

int main()
{
	Fraction fraction1;
	Fraction fraction2;
	
	cout << "Fraction 1" << endl;
	fraction1.InputFraction();
	
	cout << "Fraction 2" << endl;
	fraction2.InputFraction();
	
	Fraction addition;
	addition.d = fraction1.d * fraction2.d;
	addition.n = (fraction1.n*fraction2.d) + (fraction2.n*fraction1.d);
	
	cout << "Result:" << endl;
	cout << addition.n << endl;
	cout << "-----" << endl;
	cout << addition.d << endl;

	return 0;
}
