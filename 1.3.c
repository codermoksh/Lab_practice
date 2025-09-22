/* Write a program that prompts the user to enter their name and age.*/

#include <stdio.h>

int main()
{
    int age;
    char name[50];
    printf("enter name and age :");
    scanf("%s %d",name ,&age);

    printf("Hi %s, Your age is %d\n",name ,age);
    return 0;
}