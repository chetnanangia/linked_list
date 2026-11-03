//Returns the number stored at the nth index of a given linked list where the indexing begins form 1. Original Question: http://geeksforgeeks.org/dsa/write-a-function-to-get-nth-node-in-a-linked-list/
#include <stdio.h>
#include "linkedList.h"

int nth_element(struct node *head, int n)
{
    struct node*temp = head;
    int i = 1;
    while(temp!=NULL)
    {
        if (i==n)
        {
            return temp->data;
        }
        i++;
        temp = temp->next;
    }
    return -1;
}

int main()
{
    struct node * head = NULL;
    int a[]={19, 28, 37, 46, 55};
    list_init(&head, a, 4);

    printf("%d\n", nth_element(head, 6));

    cleanup(head);
    return 0;
}
