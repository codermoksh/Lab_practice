/* Declare a static local variable inside a function. Observe how its value persists
across function calls. */

#include <stdio.h>

void counter()
{
    static int count = 0;
    count++;
    printf("count = %d\n",count);
}

int main()
{
    counter();
    counter();
    counter();
    counter();
    counter();

    return 0;
}