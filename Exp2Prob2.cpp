#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	float p,g;

	cout << "Input number of gallons used: "; cin >> g;

	cout << "Input your previous monthly bill: "; cin >> p;

	cout << "Your Water bill for the month: " <<35 + 1.10 * (g)<< " pesos"<< endl;
	
	float c;
	c = 35 + 1.10 * (g);

	{
	if (p>0)
		cout << "Your total water bill is: " << 20 + p + c << " pesos";
	else
		cout << "Your total water bill is: " << p + c << " pesos";
	}
	getch ();
	return 0;
}