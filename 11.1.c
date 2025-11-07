/* Write a program to apply bitwise OR, AND and NOT operators on bit level.*/

#include <stdio.h>

int main()
{
    int a,b;

    printf("enter both numbers: ");
    scanf("%d %d", &a, &b);

    printf("a = %d, b = %d\n",a ,b);
    printf("a & b (AND) = %d\n", a & b);
    printf("a | b (OR) = %d\n", a | b);
    printf("~a (NOT of a) = %d\n", ~a);
    printf("~b (NOT of b) = %d\n", ~b);

    return 0;
}