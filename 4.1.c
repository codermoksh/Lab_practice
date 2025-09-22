/* Declare a global variable outside all functions and use it inside various functions to
understand its accessibility. */

#include <stdio.h>

int counter = 0;

void increment() 
{
    counter++;
    printf("Inside increment(), counter = %d\n", counter);
}

void reset() 
{
    counter = 0;
    printf("Inside reset(), counter = %d\n", counter);
}

int main() 
{
    printf("Initial counter = %d\n", counter);

    increment();
    increment();

    reset();

    increment();

    printf("Final counter in main = %d\n", counter);

    return 0;
}
