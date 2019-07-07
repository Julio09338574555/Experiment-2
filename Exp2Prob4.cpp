#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

int main()
{
	int count, counter;
	cout << "Counting...";
	 for (count = 1; count <= 10; count++){
		 cout << count << ",";}

	 for (count > 10; count <= 29; count++){

		 counter = count % 2;
		 if (counter==0)
		 cout << count << ",";}
	 
	 cout<<"30";

	 getch();
	 return 0;

}