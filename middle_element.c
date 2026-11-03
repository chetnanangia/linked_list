#include<stdio.h>
#include<stdlib.h>
#include "linkedList.h"

int middle_element(struct node *head)
{
    struct node * fast = head;
    struct node * slow = head;

    for (int i = 1; fast!=NULL; i++)
    {
        if (i%2==0)
        {
            slow = slow->next;
        }

        fast = fast->next;
    }
    

    return slow->data;
}

int main()
{
    //Initialzing the linked list
    struct node * head = NULL;
    
    insertNode(&head, 5);
    insertNode(&head, 4);
    insertNode(&head, 3);
    insertNode(&head, 2);
    insertNode(&head, 1);

    //calling the custom function which returns the middle element
    printf("The middle element of the given linked list is %d.\n", middle_element(head));
    printList(head);
    cleanup(head);

    return 0;
}
