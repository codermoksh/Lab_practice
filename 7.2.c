/* Write a C program to compute the monthly pay of 100 employees using each
employee‗s name, basic pay. The DA is computed as 52% of the basic pay.
Gross-salary (basic pay + DA). Print the employees name and gross salary. */

#include <stdio.h>

struct Employee
{
    char name[50];
    float basicPay;
    float grossSalary;
};

int main()
{
    struct Employee emp[100];
    int i, n;
    float DA;

    printf("Enter number of employees (up to 100): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter name of employee %d: ", i + 1);
        scanf("%s", emp[i].name);
        printf("Enter basic pay of %s: ", emp[i].name);
        scanf("%f", &emp[i].basicPay);

        DA = 0.52 * emp[i].basicPay;
        emp[i].grossSalary = emp[i].basicPay + DA;
    }

    printf("\nEmployee Name\tGross Salary\n");
    printf("-----------------------------\n");

    for (i = 0; i < n; i++)
    {
        printf("%s\t\t%.2f\n", emp[i].name, emp[i].grossSalary);
    }

    return 0;
}