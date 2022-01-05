#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char const *argv[])
{
	
	
	int year;

	cin>>year;

	if (year % 400 == 0 || year % 100!=0 && year % 4 == 0 ) // condition checks for a century year and not a century year but a leap year

		cout<<"Leap Year";
	else
		cout<<"Not Leap Year";
	

	return 0;
}
