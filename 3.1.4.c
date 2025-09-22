/* According to the gregorian calendar, it was Monday on the date 01/01/01. If Any
year is input through the keyboard write a program to find out what is the day on
1st January of this year.*/

#include <stdio.h>

int main()
{
    int days, year, leap;
    
    printf("enter the year :");
    scanf("%d",&year);
    
    leap = (year-1)/4-(year-1)/100+(year-1)/400;
    days = (year-1)*365+leap;
    
    if(days % 7 == 0)
    {
        printf("Monday\n");
    }
    else if(days % 7 == 2)
    {
        printf("Tuesday\n");
    }
    else if(days % 7  == 3)
    {
        printf("Wednesday\n");
    }
    else if(days % 7 == 4)
    {
        printf("Thrusday\n");
    }
    else if(days % 7 == 5)
    {
        printf("Friday\n");
    }
    else if(days % 7 == 6)
    {
        printf("Saturday\n");
    }
    else
    {
        printf("Sunday\n");
    }
    return 0;
}