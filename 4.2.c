/* Declare a local variable inside a function and try to access it outside the function.
Compare this with accessing the global variable from within the function. */

#include <stdio.h>

int globalVar = 100;

void testFunction() 
{
    int localVar = 10;
    printf("Inside testFunction():\n");
    printf("  localVar = %d\n", localVar);
    printf("  globalVar = %d\n", globalVar);\
}

int main() {
    printf("Inside main():\n");

    printf("  globalVar = %d\n", globalVar);
    testFunction();

    return 0;
}
