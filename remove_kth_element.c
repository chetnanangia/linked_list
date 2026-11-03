#include <stdio.h>
#include<stdlib.h>
#include "linkedList.h"

void remove_kth_element(struct node * head, int k)
{
    struct node* curr;
    struct node * temp = NULL;
    for(curr = head; curr!=NULL; curr = curr->next)
    {
        for (int j = 1; j < k && curr!=NULL; j++);
        if (curr!=NULL && curr->next!=NULL)
        {
            temp = curr->next;
            curr-> next = temp-> next;
            free(temp);
        }
    }
}

int main()
{
    struct node * head = NULL;
    insertNode(&head, 1);
    insertNode(&head, 2);
    insertNode(&head, 3);
    insertNode(&head, 4);
    insertNode(&head, 5);
    insertNode(&head, 6);
    insertNode(&head, 7);
    insertNode(&head, 8);
    insertNode(&head, 9);
    insertNode(&head, 10);
    insertNode(&head, 11);


    remove_kth_element(head, 2);

    printList(head);

    cleanup(head);

    return 0;
}
