#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
	int x,y;
	double z = 2.5;

	cout << "Enter x value: "; cin >> x;
	cout << "Enter y value: "; cin >> y;

	switch (x)
	{
	case 1:
		if (1<y<5){
			cout << setw (10);
			cout<< setprecision(2)<< fixed << "V: "<<x * y * z;}
		else{
			cout << setw (10);
			cout<< setprecision(2)<< fixed << "V: "<< x + (y / z);}
	break;

	case 2:
		if (y<=5){
			cout << setw (10);
			cout<< setprecision(2)<< fixed << "V: "<< abs((x-y)/z);}
		else{
			cout << setw (10);
			cout<< setprecision(2)<< fixed << "V: "<< x - sqrt(y + z);}
	break;

	default:
		cout << setw (10);
		cout << setprecision(2)<< fixed << "V: " << x + y + z;
	}
	getch ();
	return 0;
}
