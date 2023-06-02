#include<stdio.h>
int c=0,val;
struct node{
int data;
struct node * next;
}*front=NULL,*rear=NULL;
void enqueue(int);
void dequeue();
void display();
int main()
{
    printf("Implementation of Queue using Linkedlist::\n");
    while(c!=4)
    {
        printf("\n Enter 1. to enqueue 2.to dequeue 3.to display queue 4. to exit \n ");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            printf("Enter value to be enqueued \n");
            scanf("%d",&val);
            enqueue(val);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Program terminated \n");
            break;

        }
    }
}
enqueue(int val)
{
    struct node* newNode=malloc(sizeof(struct node));
    newNode->data=val;
    newNode->next=NULL;
    if(front==NULL)
        front=rear=newNode;
    else{
        rear->next=newNode;
        rear=newNode;
    }
    printf("Enqueue successful \n");
}
dequeue()
{
    if(front==NULL)
        printf("Queue Empty \n");
    else
    {
        struct node*temp=front;
        front=front->next;
        printf("Deleted element is %d \n ",temp->data);
        free(temp);
    }
}
display()
{
    if(front==NULL)
        printf("Queue empty \n");
    else{
    struct node*temp=front;
    while(temp!=NULL)
    {
        printf("%d,",temp->data);
        temp=temp->next;
    }
    }
}
