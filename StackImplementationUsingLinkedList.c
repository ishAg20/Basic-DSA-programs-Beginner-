#include<stdio.h>
int c=0,val;
struct node{
int data;
struct node * next;
}*top=NULL;
void push(int);
void pop();
void display();
int main()
{
    printf("Implementation of Stack using Linkedlist::\n");
    while(c!=4)
    {
        printf("\n Enter 1. to push element 2.to pop element 3.to display stack 4. to exit \n "); //taking choice from user
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            printf("Enter value to be pushed \n");
            scanf("%d",&val);
            push(val);
            break;
        case 2:
            pop();
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
push(int val)
{
    struct node* newNode=malloc(sizeof(struct node));
    newNode->data=val;
    if(top==NULL)
        newNode->next=NULL;
    else
        newNode->next=top;
    top=newNode;
    printf("Pushing success \n");
}
pop()
{
    if(top==NULL)
        printf("Stack Underflow. Cannot pop. \n");
    else
    {
        struct node*temp=top;
        printf("Deleted element is %d \n ",temp->data);
        top=temp->next;
        free(temp);
    }
}
display()
{
    if(top==NULL)
        printf("Stack empty \n");
    else{
    struct node*temp=top;
    while(temp!=NULL)
    {
        printf("%d,",temp->data);
        temp=temp->next;
    }
    }
}
