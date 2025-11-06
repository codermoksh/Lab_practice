/* Declare different types of pointers (int, float, char) and initialize them with the
addresses of variables. Print the values of both the pointers and the variables they
point to. */

#include <stdio.h>

int main()
{
    int a = 10;
    float b = 3.14;
    char c = 'X';

    int *ptr1 = &a;
    float *ptr2 = &b;
    char *ptr3 = &c;

    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", ptr1);
    printf("Value pointed by ptr1 = %d\n\n", *ptr1);

    printf("Value of b = %.2f\n", b);
    printf("Address of b = %p\n", ptr2);
    printf("Value pointed by ptr2 = %.2f\n\n", *ptr2);

    printf("Value of c = %c\n", c);
    printf("Address of c = %p\n", ptr3);
    printf("Value pointed by ptr3 = %c\n", *ptr3);

    return 0;
}