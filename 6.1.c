/* Develop a recursive and non-recursive function FACT(num) to find the factorial of
a number, n!, defined by FACT(n) = 1, if n = 0. Otherwise, FACT(n) = n * FACT(n-1).
Using this function, write a C program to compute the binomial coefficient.
Tabulate the results for different values of n and r with suitable messages. */

#include <stdio.h>

int FACT_1(int num)
{
    if(num == 0)
    {
        return 1;
    }
    else 
    {
        return num * FACT_1(num - 1);
    }
}

int FACT_2(int num)
{
    int result = 1;
    for(int i=1; i<=num; i++)
    {
        result *= i;
    }
    return result;
}

int binomialcoeff(int n, int r)
{
    return FACT_1(n) / (FACT_1(r) * FACT_1(n-r));
}

int main()
{
    int n, r;

    printf("enter values of n, r: ");
    scanf("%d %d",&n ,&r);

    if(r > n)
    {
        printf("intvalid! r can not be gratter than n");
        return 0;
    }

    printf("factorial using recursion: ");
    printf("%d\n",FACT_1(n));
    
    printf("factorial using non-recursion: ");
    printf("%d\n",FACT_2(n));

    printf("binomial coefficiant: ");
    printf("%d\n",binomialcoeff(n,r));

    printf("binomial coefficiant table: \n");
    for( int i=0; i<=n; i++)
    {
        printf("%dC%d = %d\n",n ,i ,binomialcoeff(n,i));
    }
    return 0;
}