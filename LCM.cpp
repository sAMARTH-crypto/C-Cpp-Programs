#include <iostream>
#include <conio.h>
using namespace std;


int LCM(int x, int y)
{
	for(int L = x>y?x:y; L <= x*y; L = L+(x>y?x:y))
	{
		if (L%x == 0 & L%y == 0)
		{

			cout<<L;
			break;
			
		}
		

	}
}

int main(int argc, char const *argv[])
{
	int a,b;

	cin>>a>>b;

	cout<<LCM(a,b);
	
	return 0;
	
	
}
