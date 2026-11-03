#ifndef LinkedList
#define LinkedList
    struct node
    {
        int data;
        struct node * next;
    };

    void insertNode(struct node ** head, int a);
    void printList(struct node *head);
    void cleanup(struct node * head);
    void list_init(struct node ** head, int a[], int n);

#endif