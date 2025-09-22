/* WAP a C program to Convert temperature from Celsius to Fahrenheit using the
formula: F = (C * 9/5) + 32. */

#include <stdio.h>

int main()
{
    float C;
    printf("enter Celcius :");
    scanf("%f",&C);
    
    float F = ((C*(9/5))+32);
    printf("%f Celcius is %f Fahrenheit\n",C, F);
    return 0;
}