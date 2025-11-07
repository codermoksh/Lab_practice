/* Write a program to insert item in middle of the linked list.*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* createnode(int data)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

void insertend(struct node** head, int data)
{
    struct node* newnode = createnode(data);
    if(*head == NULL)
    {
        *head = newnode;
        return;
    }

    struct node* temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

int getlength(struct node* head )
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

void insertmiddle(struct node** head, int data)
{
    int len = getlength(*head);
    int mid = len/2;
    struct node* newnode = createnode(data);

    if(*head == NULL || (*head)->next == NULL)
    {
        newnode->next = *head;
        *head = newnode;
        return;
    }

    struct node* temp = *head;
    for(int i=0; i<mid-1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void display(struct node* head)
{
    while(head != NULL)
    {
        printf("%d->",head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main()
{
    int k;
    struct node* head = NULL;

    insertend(&head, 10);
    insertend(&head, 20);
    insertend(&head, 30);
    insertend(&head, 40);

    printf("Original List:\n");
    display(head);

    printf("\nenter the number to be inserted in the middle: ");
    scanf("%d",&k);

    insertmiddle(&head,k);

    printf("\nList after inserting %d in the middle: \n", k);
    display(head);

    return 0;
}