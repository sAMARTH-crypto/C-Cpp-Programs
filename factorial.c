/* factorial with recursion */
#include <stdio.h>

long fact(int n)
{
    if(n>0)
        return (n*fact(n-1));
    else
        return(1);
}
main()
{ /* YOU CAN USE CLRSCR() & GETCH() ALSO*/

    printf("Factorial of a no. is %ld",fact(n))
}
/* THIS IS A EXAMLE OF RECURSION A CONCEPT OF DATA STRUCTURE*/
