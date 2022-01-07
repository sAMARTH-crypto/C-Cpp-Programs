#include <iostream>
#include <conio.h>
using namespace std;
class Complex
{
	private:
		int a,b;
		
	public:
		Complex(int x, int y) //Parameterized Constructor
 		{
			a = x ; 
			b = y;
		}

		int show_data()
		{
			cout<<a;
			cout<<"\n"<<b;
		}
		Complex() // constructor with no parameters
		{ }
		
		Complex(Complex &c)         //Copy Constructor
                                  //reference is passed here 
							                   // as it is a copy constructor
		{
			a = c.a;
			b = c.b;
		}
//If copy constructor is created by the user than compiler won't create it
// Otherwise compiler always creates copy constructor
};

int main(int argc, char const *argv[])
{
	Complex c1(4,5);
	Complex c2(c1);
	c2.show_data();
	return 0;
}
