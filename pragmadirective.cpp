#include <bits/stdc++.h>


void func1();
void func2();

#pragma startup func1 //Execute this part before the controler goes to main
#pragma exit func2 // Execute this part before controler returns back to main

void func1()
{
    std::cout << "FUNCTION 1";
}

void func2()
{
    std::cout << "FUNCTION 2";
}

int main()
{
    void func1();
    void func2();
    
    std::cout << "MAIN FUNCTION";
    
    return 0;
}
