/* Develop a function REVERSE (str) that accepts a string argument. Write a C
program that invokes this function to find the reverse of a given string. */

#include <stdio.h>
#include <string.h>

void REVERSE(char str[]) 
{
    int len = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = len - 1; i < j; i++, j--) 
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() 
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str); 

    REVERSE(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
