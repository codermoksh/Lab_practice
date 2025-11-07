/* Write a program to apply left shift and right shift operator.*/

#include <stdio.h>

int main()
{
    int shift, num;

    printf("enter the number: ");
    scanf("%d",&num);

    printf("enter number of positions to shift: ");
    scanf("%d", &shift);

    printf("\noriginal number: %d\n", num);
    printf("after left shift (%d << %d): %d\n", num, shift, num << shift);
    printf("after right shift (%d >> %d): %d\n", num, shift, num >> shift);

    return 0;
}