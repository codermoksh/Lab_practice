/* WAP using ternary operator, the user should input the length and breadth of a
rectangle, one has to find out which rectangle has the highest perimeter. The
minimum number of rectangles should be three.*/

#include <stdio.h>

int main()
{
    int L1, L2, L3, B1, B2, B3;

    printf("enter length and breadth of rectangles :");
    scanf("%d %d %d %d %d %d",&L1, &B1, &L2, &B2, &L3, &B3);

    int P1, P2, P3;
    P1 = 2*(L1 + B1);
    P2 = 2*(L2 + B2);
    P3 = 2*(L3 + B3);

    int max;
    max = (P1>P2)?((P1>P3)?P1:P3):((P2>P3)?P2:P3);
    printf("maximum perimeter is %d\n",max);
    return 0;
}