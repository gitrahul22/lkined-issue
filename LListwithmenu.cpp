//Linked as you want
#include<stdio.h>
#include<stdlib.h>
struct node* pt,*ptr,*head;
struct node{
	int data;
	struct node* link;
	};
/*struct node* insertbeg(struct node* ptr,int n){
	struct node*add=(struct node*)malloc(sizeof(struct node));
	add->data=n;
	add->link=ptr;
	ptr=add;
	display(ptr);
	return ptr;
	
}*/
void display(struct node* head){
	
	if (head==NULL)
	{
		printf("List if Empty");
	}
	else
	{
		ptr=head;
		while( ptr != NULL)
		{
			printf("-> %d", ptr->data);
			ptr=ptr->link;
		}
		printf("\n");
	}
}
void insertbeg(struct node* pt,int n){
	struct node*add=(struct node*)malloc(sizeof(struct node));
	add->data=n;
	add->link=pt;
	pt=add;
	display(pt);
	
	
}
int main()
{
    struct node *start;
    struct node *second;
    struct node *third;
    struct node *fourth;
 
    // Allocate memory for nodes in the linked list in Heap
    start = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
 
    // Link first and second nodes
    start->data = 7;
    start->link = second;
 
    // Link second and third nodes
    second->data = 11;
    second->link = third;
 
    // Link third and fourth nodes
    third->data = 41;
    third->link = fourth;
 
    // Terminate the list at the third node
    fourth->data = 66;
    fourth->link = NULL;
    //main menu
    head=start;
    	int ch=0;
	while(ch>-1){
		printf("Enter the choice:\n");
		printf("Press 1 to insertatbeg\n");
		printf("Press 2 to Display\n");
		printf("Press 3 to STOP\n");
		
		scanf("%d",&ch);
		switch(ch){
			case 1 :
				int n;
				printf("Enter Data");
				scanf("%d",&n);
				insertbeg(head,n);
				break;
			case 2:
			display(pt);
				break;
			case 3 :
				ch=-1;
				printf("Over");
				break;
				default:
				printf("wrong choices selected");
		}
	}
}

