#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

void insertNode(struct node ** head, int a)
{
    struct node * temp = malloc(sizeof(struct node));
    temp->data = a;
    temp->next = * head;
    *head = temp;
}

void insertNode_at_end(struct node * head, int a)
{
    struct node * temp = malloc(sizeof(struct node));
    temp->data = a;
    temp->next = NULL;
    struct node * curr = head;
    while(curr->next!=NULL){
        curr = curr->next;
    }
    curr->next = temp;
}

void printList(struct node * head)
{
    struct node * temp = head;
    printf("head->");

    while (temp!=NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
    
}

void cleanup(struct node * head)
{
    //Deletes a linked list (https://www.geeksforgeeks.org/dsa/write-a-function-to-delete-a-linked-list/)
    struct node * temp = head;
    struct node * temp2;
    while(temp!=NULL)
    {
        temp2 = temp->next;
        free(temp);
        temp = temp2;
    }
}

void list_init(struct node ** head, int a[], int n)
{
    for (int i = n; i >= 0; i--)
    {
        insertNode(head, a[i]);
    }
    
}