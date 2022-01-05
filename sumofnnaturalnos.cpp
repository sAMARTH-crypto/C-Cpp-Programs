// using for and while loop

#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char const *argv[])
{
	
	int n,i,sum = 0;

	cin>>n;


	for(i=1;i<=n;i++)

		sum += i; 

	i = 1;
	while (i<=n)
	{
		sum+=i;
		i++;
	}

cout<<"Sum is: "<<sum;
	return 0;
}
