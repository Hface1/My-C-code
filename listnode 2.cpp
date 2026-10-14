#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int date;
	struct Node* next;
}Node;

Node *creatlist()
{
	Node* headNode = (Node*)malloc(sizeof(Node));
	headNode->next = NULL;
	return headNode;
};

Node*creatNode(int date)
{
	Node*newNode = (Node*)malloc(sizeof(Node));
	newNode->date = date;
	newNode->next = NULL;
	return newNode;
};

void printList(Node*headNode)
{
	Node*Pmove = headNode->next;
	while(Pmove)
{
	printf("%d",Pmove->date);
	Pmove = Pmove->next;
}
	printf("\n");
}

void insert_Node_By_HeadNode(Node*headNode,int date)
{
	Node*newNode=creatNode(date);
	newNode->next=headNode->next;
	headNode->next=newNode;
}
	
int main()
{
	Node*list=creatlist();
	insert_Node_By_HeadNode(list,1);
	insert_Node_By_HeadNode(list,2);
	insert_Node_By_HeadNode(list,3);
	printList(list);
}
