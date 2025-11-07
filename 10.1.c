/* Write a program to create a simple linked list in C using pointer and structure.*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;   
};

int main()
{
    struct node *head = NULL, *second = NULL, *third = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = NULL;
    struct node *ptr = head;
    printf("Linked list elements: \n");
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
    free(head);
    free(second);
    free(third);

    return 0;
}