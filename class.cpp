#include <iostream>
#include <conio.h>
using namespace std;

// members of a class are by default private.

class Complex
{
	private:
		int a,b;
	public:
		int set_data(int, int);
		int show_data()
		{
			cout<<"\n"<<a<<"||"<<b;
		}
};

int Complex:: set_data(int x, int y)      // 'Complex::' is called 
									                       // member ship label which guides the compiler
									                      // that ' set_data ' is a member of Complex class.
{
	a = x;
	b = y;
}

int main(int argc, char const *argv[])
{
	Complex c1; // Object of class
	c1.set_data(4,-7);
	c1.show_data();

	return 0;
}
