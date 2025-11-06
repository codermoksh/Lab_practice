/* Perform pointer arithmetic (increment and decrement) on pointers of different data
types. Observe how the memory addresses change and the effects on data
access. */

#include <stdio.h>

int main()
{
    int a = 10;
    float b = 3.14;
    char c = 'X';
    int *pInt = &a;
    float *pFloat = &b;
    char *pChar = &c;

    printf("Initial Addresses:\n");
    printf("pInt   = %p\n", pInt);
    printf("pFloat = %p\n", pFloat);
    printf("pChar  = %p\n\n", pChar);
    
    pInt++;
    pFloat++;
    pChar++;
    
    printf("After Incrementing:\n");
    printf("pInt   = %p\n", pInt);
    printf("pFloat = %p\n", pFloat);
    printf("pChar  = %p\n\n", pChar);
    
    pInt--;
    pFloat--;
    pChar--;
    
    printf("After Decrementing (Back to Original):\n");
    printf("pInt   = %p\n", pInt);
    printf("pFloat = %p\n", pFloat);
    printf("pChar  = %p\n", pChar);

    return 0;
}