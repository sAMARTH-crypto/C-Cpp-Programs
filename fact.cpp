#include <iostream>
#include <conio.h>
using namespace std;



int main(int argc, char const *argv[])
{
	int x;
	int fact=1;

	cin>>x; 

	if (x<0)
		cout<<"Error! Negative Number";
	else
		for(int i=1 ; i<=x ; i++)
		{
			fact *=i;
		}

	cout<<"\nFactorial is:"<<fact;
	

	return 0;
}
