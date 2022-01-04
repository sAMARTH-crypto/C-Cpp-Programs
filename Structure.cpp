#structure example


#include <iostream>
#include <conio.h>
using namespace std;


int area(int,  int);
float area(int);
struct demo
{
	int l,b,r;	
};

int main(int argc, char const *argv[])
{
	demo d1={4, 5, 6};   //accessing the structure and 
						//assigning values

	cout<<"Area is: "<<area(d1.l,d1.b); // passing assigned values
	cout<<"\nArea is: "<<area(d1.r);

	return 0;
}

int area(int x, int y)
{
	return x*y;

}


float area(int x)
{
	return 3.14*x*x;
	
}
