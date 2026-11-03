//Original Question: https://www.geeksforgeeks.org/dsa/traversal-of-circular-linked-list/

#include <stdio.h>
#include "linkedList.h"
#include <stdlib.h>

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

//Deleting from a circular linked list (https://www.geeksforgeeks.org/dsa/deletion-circular-linked-list/)
void delete_from_circular(struct node * head, int key)
{
    struct node * current = head->next;
    while ((current != (head)) && current->next->data != key)
    {
        current = current->next;
    }
    
    if(current->next->data==key)
    {
        struct node* temp = current->next;
        current->next = temp->next;
        free(temp);
        printf("Deleted the node successfully!\n");
    }else printf("Node not found.\n");
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
    //Initializing the cirular linked list
    struct node * head = NULL;
    int a[]={1,2,3,4,5,6};

    list_init(&head, a , 5);

    struct node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = head;

    delete_from_circular(head, 3);

    print_circular_list(head);
    clean_cicular_list(head);
    return 0;
}
