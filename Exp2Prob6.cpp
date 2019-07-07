#include <iostream>
#include <conio.h>
 using namespace std;
 int main()
 {
	 int in, sum, n;

	 do {
		 cout << "Enter a whole number: "; cin >> in;
		 if (in <= 0) {
			 sum = 0;}

		 else {
			 sum = 0;
		 for (n = 1; n <= in; ++n){
			 sum += n;}

		cout << "The sum of all whole numbers from 1 to " << in << " is " << sum << "." << endl;
		cout << " " << endl;}
	 }
		while (in != 0 && in >=0); 
		cout << "Thank You!";

		cout << "";	

	 getch ();
	 return 0;
}
