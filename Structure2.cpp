#include <iostream>
#include <conio.h>
using namespace std;


struct book    // structure
{
	int bookid;
	char title[20]; 
	float price;
};

int display(book); 	// displays the user input
book input();  // this function take user input

int main()
{
	book b1; 
	b1 = input();  // assigned to input fun
	display(b1);  // passed on the values to display fun
}

int display(book b)
{
	cout<<"\n"<<b.bookid<<" || "<<b.title<<" || "<<b.price;
}

book input()
{
	book b;
	cin>>b.bookid>>b.title>>b.price;
	return (b);
}
