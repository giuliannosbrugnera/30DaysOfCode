#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node * next;
}Node;

Node * removeDuplicates( Node * head ) {

    if ( !head ) {
        return;
    }
    
    Node * tmp = head;

    while ( tmp ) {
    	while ( tmp->next && tmp->data == tmp->next->data ) {
    		tmp->next = tmp->next->next;
    	}
    	tmp = tmp->next;
    }


    return head;

}

Node * insert( Node * head, int data ) {
	
	Node *p = (Node *) malloc( sizeof(Node) );
	p->data = data;
	p->next = NULL;   

	if ( head == NULL ) {
		head = p;
	}
	else if( head->next == NULL ) {
		head->next = p;
	}
	else {
		Node * start = head;
		while ( start->next != NULL ) {
			start = start->next;
		}

		start->next = p;
	}

	return head;

}

void display( Node * head ) {
	
	Node * start = head;
	while ( start ) {
		printf("%d ", start->data);
		start = start->next;
	}

}

int main() {
	int T, data;
    scanf("%d", &T);
    Node * head = NULL;	
    
    while ( T-- ) {
        scanf("%d", &data);
        head = insert( head, data );
    }

    head = removeDuplicates( head );
	display( head );

	return 0;
}

