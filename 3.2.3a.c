/* WAP to generate the following set of output.
    1
    23
    456 
*/

#include <stdio.h>

int main()
{
    int n = 1;
    int i,j;

    for(i=1; i<=3; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d",n);
            n++;
        }
        printf("\n");
    }
    return 0;
}