#include <iostream>
#include <conio.h>
 using namespace std;
 int main()
 {
	 
	int n1, n2, n3;
	n1=0, n2=1, n3=1;
 
	cout << "Fibonacci numbers:" << endl;
	cout << "0,1,";

	while (n1 + n2 < 10946){
		 n3 = n1 + n2;
		 n1 = n2;
		 n2 = n3;
		 
		 cout << n3 << ",";}
	 
	cout << "10946";

	getch ();
	return 0;
 }
