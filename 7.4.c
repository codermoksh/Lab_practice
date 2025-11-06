/* Create a union containing 6 strings: name, home_address, hostel_address, city,
state and zip. Write a C program to display your present address. */

#include <stdio.h>

union Address
{
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main()
{
    union Address addr;

    printf("Enter your name: ");
    gets(addr.name);
    printf("Name: %s\n", addr.name);

    printf("\nEnter your home address: ");
    gets(addr.home_address);
    printf("Home Address: %s\n", addr.home_address);

    printf("\nEnter your hostel address: ");
    gets(addr.hostel_address);
    printf("Hostel Address: %s\n", addr.hostel_address);

    printf("\nEnter your city: ");
    gets(addr.city);
    printf("City: %s\n", addr.city);

    printf("\nEnter your state: ");
    gets(addr.state);
    printf("State: %s\n", addr.state);

    printf("\nEnter your zip code: ");
    gets(addr.zip);
    printf("Zip Code: %s\n", addr.zip);

    printf("\n----------------------------\n");
    printf("Your Present Address: %s, %s - %s\n", addr.city, addr.state, addr.zip);

    return 0;
}