#include <iostream>
#include <conio.h>
using namespace std;

class A
{
private:
	int a;
protected:
	void setValue(int k) {a=k;}

};

class B: public A                /*  here class is inherited as "public" i.e child class can 
								inherit it's public and protected members but not 
								private members and the user's of child class will see
								all members of parent class as private.  */
{
public:
	void setData(int x) {setValue(x);} /* setData is accessing the protected member 
										and of parent class and setValue is acessing it's
										private member. */
	
};



int main(int argc, char const *argv[])
{
	B obj;                         /* private members cannot be acessed directly. */
	obj.setData(4);	
	return 0;
}
