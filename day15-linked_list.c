#include <stdlib.h>
#include <stdio.h>  

typedef struct Node {
    int data;
    struct Node *next;
}Node;

Node * insert( Node *head, int data ) {

    Node *new_ptr = (Node *) malloc( sizeof(Node) );
    
    if ( !new_ptr ) {
        return NULL;
    }
    
    new_ptr->data = data;
    new_ptr->next = NULL;
    
    if ( !head ) {
        return new_ptr;
    }
    
    Node *tmp = head;
    
    while ( tmp->next ) {
        tmp = tmp->next;
    }
    
    tmp->next = new_ptr;

    return head;    
    
}

void display( Node *head ) {

    Node *start = head;
    
    while ( start ) {
        printf("%d ", start->data);
        start = tart->next;
    }

}

int main() {

    int T, data;
    Node *head = NULL;    
    
    scanf("%d", &T);
    
    while ( T-- ) {
        scanf("%d", &data);
        head = insert( head, data );
    }

    display( head );

    return 0;

}
