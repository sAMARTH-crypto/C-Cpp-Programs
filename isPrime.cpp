#include <iostream>
#include <conio.h>
using namespace std;



int main(int argc, char const *argv[])
{
	int x;
	bool isPrime = true;

	cin>>x;

	// 0 and 1 are not prime
	if ( x== 0 || x==1)
	{
		isPrime = false;
	}
	else
	{
		for(int i = 2; i<= x/2; i++)
		{
			if(x%i == 0)
			{
				isPrime = false;
				break;

			}
		}
	}
	if (isPrime)
		cout<<x<<" is prime.";
	else
		cout<<x<<" not prime";


	return 0;
	
	
}
