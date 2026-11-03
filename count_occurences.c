//This program counts the occurences of a given element in a linked list.
//Original Question: https://www.geeksforgeeks.org/dsa/write-a-function-that-counts-the-number-of-times-a-given-int-occurs-in-a-linked-list/
#include <stdio.h>
#include "linkedList.h"

int count_occ(struct node * head, int key)
{
    int occ = 0;
    struct node * temp = head;
    while (temp!=NULL)
    {
        if (temp->data == key)
        {
            occ++;
        }
        temp = temp->next;
    }
    return occ;
}

int main(int argc, char const *argv[])
{
    struct node * head = NULL;
    int a[] = {1, 2, 1, 2, 1, 3, 1};
    list_init(&head, a, 6);

    int key = 1;
    printf("%d appears %d times in the list.\n", key, count_occ(head, key));
    
    cleanup(head);
    return 0;
}
