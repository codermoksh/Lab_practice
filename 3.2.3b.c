/* WAP to generate the following set of output.
    1
    11
    121
    1331
    14641
*/

#include <stdio.h>

int main() {
    int rows, coef, space, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) 
    {
        for (space = 1; space <= rows - i; space++)
        {
            printf("  ");
        }

        coef = 1;
        for (j = 0; j <= i; j++) 
        {
            printf("%4d", coef);
            coef = coef * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}
