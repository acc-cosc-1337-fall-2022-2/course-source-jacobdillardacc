//add include statements
#include "dna.h"

//add function(s) code here
int get_factorial(int num1)
{
    int factorial = 1;
    while(num1 > 0)
    {
       factorial *= num1;
       num1--;
    }
    return factorial;
}

int get_gcd(int num1, int num2)
{
    int swap;
    while (num1 != num2)
    {
        if (num1 > num2)
        {
            num1 -= num2;
        }
        else if (num1 < num2)
        {
            swap = num1;
            num1 = num2;
            num2 = swap;
        }
    }
    return num1;
}