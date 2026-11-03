#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

int calc_length(struct node * head)
{
    struct node * temp = head;
    int length = 0;
    while(temp!=NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}

int main(int argc, char const *argv[])
{
    struct node * head = NULL;

    insertNode(&head, 5);
    insertNode(&head, 6);
    insertNode(&head, 7);
    insertNode(&head, 8);


    printf("The length of this linked list is %d.\n", calc_length(head));

    cleanup(head);

    return 0;
}
