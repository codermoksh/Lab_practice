/* WAP to compute the BMI Index of the person and print the BMI values as per the
following ranges. You can use the following formula to compute BMI=
weight(kgs)/Height(Mts)*Height(Mts).*/

#include <stdio.h>

int main()
{
    float weight, height;
    printf("enter weight and height: ");
    scanf("%f %f",&weight ,&height);

    float BMI = weight/(height*height);

    if(BMI < 15)
    {
        printf("Starvation\n");
    }
    else if(BMI >=15.1 && BMI <=17.5)
    {
        printf("Anorexic\n");
    }
    else if(BMI >=17.6 && BMI <=18.5)
    {
        printf("Underweight\n");
    }
    else if(BMI >=18.6 && BMI <=24.9)
    {
        printf("Ideal\n");
    }
    else if(BMI >=25 && BMI <=25.9)
    {
        printf("Overweight\n");   
    }
    else if(BMI >=30 && BMI <=39.9)
    {
        printf("obese\n");
    }
    else
    {
        printf("Morbidity Obese\n");
    }
    return 0;
}