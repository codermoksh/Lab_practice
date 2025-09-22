/* Declare variables within different code blocks (enclosed by curly braces) and test
their accessibility within and outside those blocks. */

#include <stdio.h>

int main()
{
    int a = 10;
    printf("a in main = %d\n",a);

    {
        int b = 20;
        printf("b inside inner block = %d\n",b);
    }

    {
        int c = 30;
        printf("c inside second inner block = %d\n",c);   
    }
    return 0;
}