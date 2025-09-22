/* WAP to enter numbers till the user wants. At the end, it should display the count
of positive, negative, and Zeroes entered. */

#include <stdio.h>

int main()
{
    int i, p=0, n=0, z=0;
    char a = 'y';
    
    while(a == 'y')
    {
        printf("enter the number :");
        scanf("%d",&i);
        if(i>0){
            p++;
        }
        else if(i<0){
            n++;
        }
        else{
            z++;
        }
        printf("enter any char to stop:");
        scanf("%s",&a);
    }
    printf("number of +ve, -ve and zeros are %d %d %d",p ,n, z);
    return 0;
}