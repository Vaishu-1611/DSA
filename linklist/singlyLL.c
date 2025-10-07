#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node* next;
};

struct node*createnode(int data) 
{
    struct node*newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

void insertatfirst(struct node**head, int data) 
{
    struct node*newnode = createnode(data);
    newnode->next = *head;
    *head = newnode;
}

void insertatlast(struct node**head, int data) 
{
    struct node*newnode = createnode(data);
    if (*head == NULL) 
    {
        *head = newnode;
        return;
    }
    struct node*temp = *head;
    while (temp->next != NULL) 
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void insertatposition(struct node**head, int data, int position) 
{
    if (position == 0) 
    {
        insertatfirst(head, data);
        return;
    }
    struct node*newnode = createnode(data);
    struct node*temp = *head;
    for (int i = 0; i < position - 1; i++) 
    {
        if (temp == NULL) 
        {
            printf("Position out of bounds\n");
            free(newnode);
            return;
        }
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void deleteatfirst(struct node**head) 
{
    if (*head == NULL) 
    {
        printf("List is empty\n");
        return;
    }
    struct node*temp = *head;
    *head = (*head)->next;
    free(temp);
}

void deleteatlast(struct node**head) 
{
    if (*head == NULL) 
    {
        printf("List is empty\n");
        return;
    }
    if ((*head)->next == NULL) 
    {
        free(*head);
        *head = NULL;
        return;
    }
    struct node*temp = *head;
    while (temp->next->next != NULL) 
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

void deleteatposition(struct node**head, int position) 
{
    if (*head == NULL) 
    {
        printf("List is empty\n");
        return;
    }
    if (position == 0) 
    {
        deleteatfirst(head);
        return;
    }
    struct node*temp = *head;
    for (int i = 0; i < position - 1; i++) 
    {
        if (temp->next == NULL) 
        {
            printf("Position out of bounds\n");
            return;
        }
        temp = temp->next;
    }
    struct node*todelete = temp->next;
    if (todelete == NULL) 
    {
        printf("Position out of bounds\n");
        return;
    }
    temp->next = todelete->next;
    free(todelete);
}

void display(struct node*head) 
{
    struct node*temp = head;
    while (temp != NULL) 
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct node*head = NULL;
    insertatlast(&head, 10);
    printf("After inserting 10 at last:\n");
    display(head);
    insertatfirst(&head, 5);
    printf("After inserting 5 at first:\n");
    display(head);
    insertatlast(&head, 20);
    printf("After inserting 20 at last:\n");
    display(head);
    insertatposition(&head, 15, 2);
    printf("After inserting 15 at position 2:\n");
    display(head);
    deleteatposition(&head, 1);
    printf("After deleting at position 1:\n");
    display(head);
    deleteatfirst(&head);
    printf("After deleting at first:\n");
    display(head);
    deleteatlast(&head);
    printf("After deleting at last:\n");
    display(head);
    return 0;
}