/* WAP to read a list of integers and store it in a single dimensional array. Write a C
program to print the second largest integer in a list of integers. */

#include <stdio.h>

int main()
{
    int n,i;
    int array[100];
    int first, second;

    printf("enter number of element :");
    scanf("%d",&n);

    printf("enter %d integers :",n);
    for( i=0 ; i<n ; i++ )
    {
        scanf("%d",&array[i]);
    }

    first = second = -999999;

    for( i=0 ; i<n ; i++ )
    {
        if(array[i] > first)
        {
            second = first;
            first = array[i];
        }
        else if( array[i] > second && array[i] != first )
        {
            second = array[i];
        }
    }

    if (second == -999999)
    {
        printf("No second largest element found\n");
    }
    else
    {
        printf("Second largest element = %d\n", second);
    }
    return 0;
}