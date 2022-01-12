#include <iostream>
#include <conio.h>
using namespace std;


int LCM(int x, int y, int z)
{
	for(int L = x>y?x>z?x:z:y>z?y:z; L <= x*y*z; L = L+(x>y?x>z?x:z:y>z?y:z)) // conditional operators being used to find the greatest amoung three
	{
		if (L%x == 0 && L%y == 0 && L%z == 0)
		{

			return L;
			break;
			
		}
		

	}
}

int main(int argc, char const *argv[])
{
	int a,b,c;

	cin>>a>>b>>c;

	cout<<LCM(a,b,c);
	
	return 0;
	
	
}
