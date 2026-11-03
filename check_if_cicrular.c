//Checks if a given linked list is circular
//Original Question: https://www.geeksforgeeks.org/dsa/check-if-a-linked-list-is-circular-linked-list/

#include <stdio.h>
#include "linkedList.h"

int circular_check(struct node *head)
{
    struct node * temp = head;
    if (temp!=NULL)
    {
        while ((temp=temp->next))
        {
            if (temp==head)
            {
                return 1;
            }
        }
    }
    return 0;
    
}

void clean_cicular_list(struct node *head)
{
    struct node * temp = head;
    while (temp->next!=head)
    {
        temp = temp->next;
    }
    temp->next = NULL;
    cleanup(head);
}

int main()
{
    struct node * head_list1 = NULL;
    int a[]={2, 4, 6, 7, 5, 1};
    list_init(&head_list1, a, 5);
    struct node * head_list2 = NULL;
    insertNode(&head_list2, 5);
    insertNode(&head_list2, 7);
    insertNode(&head_list2, 6);
    insertNode(&head_list2, 4);
    insertNode(&head_list2, 2);

    struct node * temp= head_list2;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = head_list2;

    printf("For list 1: %d\n", circular_check(head_list1));
    printf("For list 2: %d\n", circular_check(head_list2));

    cleanup(head_list1);
    clean_cicular_list(head_list2);
    return 0;
}
