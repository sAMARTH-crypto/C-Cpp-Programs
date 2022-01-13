#include <iostream>
#include <conio.h>
using namespace std;
class Complex
{
private:
	int a,b;
public:
	int set_data(int x, int y)
	{
		a=x;
		b=y;
	}

	int show_data()
	{
		cout<<a<<b;
	}
	
	friend Complex operator +(Complex, Complex);
};

// whenever we overload a binary operator as a member function we pass one argument
//where as if it is a friend function we have to pass two arguments

Complex operator+(Complex X, Complex Y) //operator overloading as a friend function
                                        // we have to pass more than one arguments
{
	Complex temp;
	temp.a = X.a+Y.a;
	temp.b = X.b+Y.b;  
	return temp;
}

int main(int argc, char const *argv[])
{
	Complex c1, c2, c3;
	c1.set_data(4,5);
	c2.set_data(6,5);
	c3 = c1+c2; 
	c3.show_data();
	return 0;
}
