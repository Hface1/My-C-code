#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node *next;
}Node;

void print_list(Node**head){
	Node *q = head->next;
	
	while(q != NULL){
		printf("%d", q->data);
		q = q->next;
	}
	printf("\n");
}

void delete_Node(Node**head, int value){
	Node *q = head;
	Node *p = NULL;
	while(q != NULL && q->data != value){
		p = q;
		q = q->next;
	}
	
	if(q == NULL){
		printf("no find the Node\n");
	}
	
	if(p == NULL){
		*head = q->next;
		return;
	}
	
	p->next = q->next;
	free (q);
}

void delete_Node by place(Node**head; int index){
	if(index < 0){
		return;
	}
	if(index == 0){
		head->NULL;
		free(head);
		return;
	}
	
	Node* q = head->next;
	Node* p = NULL;
	int cnt = 1;
	while(cnt != index){
		p = q;
		q = q->next;
		cnt++;
	}
	if(q == NULL){
		printf("no find the Node you needed,may index was overside");
		return;
	}
	
	p->next = q->next;
	free(q);
}

Node* find_Node(Node**head, int value){
	Node*q = head->next;	
	while(q != NULL){
		if(q->data == value){
			return q;
		}
		q = q->next;
	}
	if(q == NULL){
		printf("did not find the node you needed");
	}
}

void free_list(Node**head){
	if(head == NULL || *head == NULL){
		return;
	}
	
	Node *q = (*head)->next;
	while(q != NULL){
		Node* p = q;
		q = q->next;
		free(p);
	}
	free(*head);
	*head = NULL;
}









