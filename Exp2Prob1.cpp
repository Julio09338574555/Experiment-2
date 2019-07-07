#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	char p;
	int h;

	cout<< "This program calculates your monthly internet consumption"<< endl;
	cout<< "Enter your package:"; cin >> p;
	switch (p)
	{
	case 'A':
	case 'a':
		cout << "Input number of accessed hours: "; cin >> h;
		if (h<=10)
			cout << "Your monthly bill is: 995 pesos";
		else
			cout << "Your monthly bill is: " << 995 + 20 * (h-10) << " pesos";
		break;

	case 'B':
	case 'b':
		cout << "Input number of accessed hours: "; cin >> h;
		if (h<=20)
			cout << "Your monthly bill is: 1495 pesos";
		else
			cout << "Your monthly bill is: " << 1495 + 10 * (h-20) << " pesos";
		break;

	case 'C':
	case 'c':
		cout << "Input number of accessed hours: "; cin >> h;
		cout << "Your monthly bill is: 1995 pesos";
	default:
		cout << "You must only pick from plans A, B, and C";
		break;
	}

	getch ();
	return 0;
}