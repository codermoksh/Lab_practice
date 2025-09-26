/* Develop a C function ISPRIME (num) that accepts an integer argument and
returns 1 if the argument is prime, a 0 otherwise. Write a C program that invokes
this function to generate prime numbers between the given ranges. */

#include <stdio.h>
#include <math.h>

int isprime(int num)
{
    if(num <= 1)
    {
        return 0;
    }
    for(int i=2; i<= sqrt(num); i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n,r;
    printf("enter the range (n,r) :");
    scanf("%d %d",&n ,&r);

    printf("prime numbers between the range(n,r) :");
    for(int i=n; i<=r; i++)
    {
        if(isprime(i))
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}