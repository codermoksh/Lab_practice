/* WAP to read a list of integers and store it in a single dimensional array. Write a C
program to count and display positive, negative, odd, and even numbers in an array. */

#include <stdio.h>

int main()
{
    int n;
    int arr[100];
    int pos, neg, odd, even;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("enter the integers :");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);

        if(arr[i]>0)
        {
            pos++;
        }
        else if(arr[i]<0)
        {
            neg++;
        }
        
        
        if(arr[i]%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Positive numbers = %d\n", pos);
    printf("Negative numbers = %d\n", neg);
    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d\n", odd);

    return 0;
}