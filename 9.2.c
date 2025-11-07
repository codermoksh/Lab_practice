/* Open an existing file and read its content character by character, and then close
the file.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *v;
    char ch;

    v = fopen("9.1.c","r");
    while(1)
    {
        ch = fgetc(v);

        if(ch == EOF)
        {
            break;
        }
        printf("%c",ch);
    }
    printf("\n");
    fclose(v);
    return 0;
}