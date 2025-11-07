/* write a program to create a new file and write text into it.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * v = fopen("infom.txt","w");
    fputs("this file is for practice", v);
    fclose(v);
    return 0;
}