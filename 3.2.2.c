/* WAP to print the multiplication table of the number entered by the user. It should
be in the correct formatting. Num * 1 = Num. */

#include <stdio.h>

int main()
{
    int n,i,result;
    printf("enter the number :");
    scanf("%d",&n);
    
    for (i=1; i<=10; i++)
    {    
        result = n*i;    
        printf("%d X %d = %d\n",n, i, result);
    }
    return 0;
}