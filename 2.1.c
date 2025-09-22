/* WAP a C program to calculate the area and perimeter of a rectangle based on its
length and width.*/

#include <stdio.h>

int main()
{
    int length;
    int width;
    printf("length :");
    scanf("%i",&length);
    printf("width :");
    scanf("%i",&width);

    int area = length * width;
    printf("arae of rectangle is %i\n",area);

    int perimeter = 2 * (length + width);
    printf("perimeter of rectangle is %i\n",perimeter);

    return 0;
}