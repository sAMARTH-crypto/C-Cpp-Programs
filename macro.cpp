#include <iostream>

#define AREA(l,b) (l*b) //MARCOS EXAMPLE

/*
MACRO is a peice of code in a program which is given some name and whenever compiler encounters that name in a program it replaces it with the actual code.
*/
//In program below whenever AREA(l,b) is encountered it is replaced by (l*b)
int main()
{
    int l = 10 ,b = 5,area;
    
    area = AREA(l,b); 
    
    std::cout<<"Area of Rectangle is:"<< area;
    
    return 0;
    
}
