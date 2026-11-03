//Original Question: https://www.geeksforgeeks.org/dsa/traversal-of-circular-linked-list/

#include <stdio.h>
#include "linkedList.h"

void print_circular_list(struct node * head)
{
    struct node * temp = head;
    while (temp->next!=head)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d\n", temp->data);   
}

int main()
{
    //Initializing the cirular linked list
    struct node * head = NULL;
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    list_init(&head, a , n-1);
    struct node* temp = head;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = head;

    print_circular_list(head);
    return 0;
}
