/* Ramanujan Number is the smallest number that can be expressed as the sum of
two cubes in two different ways. WAP to print all such numbers up to a
reasonable limit.
Example of Ramanujan number: 1729
12^3 + 1^3 and 10^3 + 9^3. for a number L=20(that is limit) */

#include <stdio.h>

int main()
{
    int a, b, c, d;
    int limit;
    
    printf("Enter limit (max cube root value): ");
    scanf("%d", &limit);

    for( a=1; a<=limit; a++ )
    {
        for( b=a; b<=limit; b++ )
        {
            for( c=a+1; c<=limit; c++ )
            {
                for( d=c; d<=limit; d++ )
                {
                    int sum1 = a*a*a + b*b*b;
                    int sum2 = c*c*c + d*d*d;

                    if(sum1 == sum2)
                    {
                        printf(" %d =  %d^3 + %d^3 = %d^3 + %d^3 \n", sum1, a, b, c, d);
                    }
                }
            }
        }
    }
    return 0;
}