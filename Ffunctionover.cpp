#include <iostream>
#include <conio.h>
using namespace std;

class Complex
{

private:
	int a, b;
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

friend ostream& operator<<(ostream &, Complex);
friend istream& operator>>(istream &, Complex &);	
};

// friend function does not require object for calling
// independent calling

 ostream & operator<<(ostream &out, Complex C) 
{
	cout<<"A-"<<C.a<<"\n"<<"B-"<<C.b;  // class reference is passed so that private 
									// members can be accessed
	return out;
}

 istream & operator>>(istream &in, Complex &C)
{
	cin>>C.a>>C.b;
	return in;
}


int main(int argc, char const *argv[])
{
	
	Complex c1;
	cin>>c1;
	cout<<c1;
	return 0;
}
