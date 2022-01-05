#include <iostream>
#include <conio.h>
using namespace std;


struct book    // structure
{
private:               // private provides data protection
					  // cannot be accessed outside the struct
	int bookid;
	char title[20]; 
	float price;

public:             // can be accesed outside the struct
	int input() // this is a member function which can 
				// access the structure variables
	{
		cout<<"Enter bookid | title | price";
		cin>>bookid>>title>>price;

		if (bookid<0)
			bookid = -bookid; // prevent negative values
	}

	int display()
	{
		cout<<"\n"<<bookid<<" || "<<title<<" || "<<price;
	}
};



int main(int argc, char const *argv[])
{
	book b1;
	//b1.bookid = -100;  // will throw error
	b1.input();
	b1.display();
	return 0;
}
