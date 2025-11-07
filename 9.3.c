/* Open a file, read its content line by line, and display each line on the console.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * v;
    char ch[100];

    v = fopen("9.1.c","r");
    while(fgets(ch, sizeof(ch), v) != NULL)
    {
        printf("%s",ch);
    }
    printf("\n");
    fclose(v);
    return 0;
}