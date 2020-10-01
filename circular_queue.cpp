//CIRCULAR QUEUE
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next;
}node;

node *last;
void enqueue();
void dequeue();
void display();
int main(){
	int ch;
	while(1){
		printf("\nEnter your choice\n1.Enqueue\n2.Dequeue\n3.Display");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				 enqueue();
				 break;
			case 2:
			     dequeue();
				 break;
			case 3:
			     display();
				 break;
			default:
			      exit(0);  	 	 	 
		}
	}
	scanf("%d");
	return 0;
}
void enqueue(){
	node *temp;
	temp=(node *)malloc(sizeof(node));
	if(temp==NULL)
	printf("\nOVERFLOW");
	else{
		printf("\nEnter new element:");
		scanf("%d",&temp->data);
		temp->next=NULL;
		if(last==NULL){
			last=temp;
			last->next=last;
		}
		else{
			temp->next=last->next;
			last->next=temp;
			last=temp;
		}
	}
}
void dequeue(){
	node *temp;
	if(last==NULL)
	printf("\nUNDERFLOW");
	else{
		temp=last->next;
		if(temp==last){
			free(temp);
			last=NULL;
			temp=NULL;
		}
		else{
			last->next=temp->next;
			free(temp);
		}
	}
}
void display(){
	node *temp;
	if(last==NULL)
	printf("\nUNDERFLOW");
	else{
		temp=last->next;
		printf("\nData is:");
		do{
			printf("%d ",temp->data);
			temp=temp->next;
		}while(temp!=last->next);
	}
}
