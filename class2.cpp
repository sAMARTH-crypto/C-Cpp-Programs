#include <iostream>
#include <conio.h>
using namespace std;
class Complex
{
	private:
		int a,b;
		static int set;
		
	public:
		int set_s(int s)
		{
			set = s;
		}
		int set_data(int, int);
		int show_data()
		{
			cout<<"\n"<<a<<" || "<<b;
			cout<<"\n"<<set;
			
		}
 
		Complex add(Complex c) // this add function has to be a part 
							  // of the class so that it can
							 // access the private variables etc.
		{
			Complex temp;
			temp.a = a + c.a;  
			temp.b = b + c.b;
			return (temp);
		}
		
};

int Complex:: set;





int Complex:: set_data(int x, int y) // 'Complex::' is called 
									// member ship label which guides the complier
									// that 'set_data' is member of Complex class
{
	a = x;
	b = y;
}

int main(int argc, char const *argv[])
{
	Complex c1, c2, c3; // Object of class
	c1.set_data(4,7);
	c2.set_data(5,8);
	c3 = c1.add(c2);
	

	

	return 0;
}
