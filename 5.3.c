/* WAP to read a list of integers and store it in a single dimensional array. Write a C
program to find the frequency of a particular number in a list of integers. */

#include <stdio.h>

int main()
{
    int n;
    int arr[100];
    int key, count;

    printf("enter number of element :");
    scanf("%d",&n);

    printf("enter the integers :");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("enter number to find the frequency :");
    scanf("%d",&key);

    for(int i=0; i<n; i++)
    {
        if( arr[i] == key )
        {
            count++;
        }
    }
    printf("frequency of %d = %d\n",key ,count);

    return 0;
}