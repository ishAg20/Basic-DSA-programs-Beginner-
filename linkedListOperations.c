#include <stdlib.h>
#include<stdio.h>
    int c=0,val,pos,i,count=0;
    struct node
    {
        int data;
        struct node *next;

    } *head;

    int main()
    {
        while(c!=9){
        printf("Enter 1. to insert element at beginning \n 2.to insert element at middle \n 3.insert element at end \n 4. delete element from beginning \n 5.to delete from middle \n 6. to delete from end \n 7. to traverse the list \n 8. to search for an element \n 9. to terminate the program \n");
        scanf("%d",&c);
        switch(c)
        {
        case 1:

            {
             insbeg();
             break;
            }

        case 2:

            {
             insmid();
             break;
            }

        case 3:

            {
             insend();
             break;
            }
        case 4:

            {
             delbeg();
             break;
            }
        case 5:

            {
             delmid();
             break;
            }
        case 6:

            {
             delend();
             break;
            }
        case 7:

            {
             traverse();
             break;
            }
        case 8:
            {
                search();
                break;
            }
        case 9:
            {
                printf("Program terminated");
                break;
            }
        default:
            printf("Enter correct choice\n");

        }
        }
        return 0;
    }
   void insbeg()
    {
        struct node* newNode;
        newNode=malloc(sizeof(struct node));
        printf("Enter data to be inserted \n");
        scanf("%d",&val);
        newNode-> data=val;
        newNode->next=head;
        head=newNode;
    }
  void insmid()
   {
        struct node* newNode;
        newNode=malloc(sizeof(struct node));
        printf("Enter data to be inserted \n");
        scanf("%d",&val);
        newNode->data=val;
        printf("Enter position to be inserted \n");
        scanf("%d",&pos);
        struct node* temp=head;
        for(i=2;i<pos;i++)
        {
            if(temp->next!=NULL)
                temp=temp->next;

        }
        newNode->next=temp->next;
        temp->next=newNode;
   }


void insend()
   {
        struct node* newNode;
        newNode=malloc(sizeof(struct node));
        printf("Enter data to be inserted \n");
        scanf("%d",&val);
        newNode->data=val;
        struct node* temp=head;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=newNode;
        newNode->next=NULL;

   }
void delbeg()
{
    head=head->next;
}
void delmid()
{
    printf("Enter position to be inserted \n");
        scanf("%d",&pos);
        struct node* temp=head;
        for(i=2;i<pos;i++)
        {
            if(temp->next!=NULL)
                temp=temp->next;

        }
        temp->next=temp->next->next;
}
    void delend()
    {
        struct node* temp=head;
        while(temp->next->next!=NULL)
            temp=temp->next;
        temp->next=NULL;
    }
    void traverse()
    {
        struct node* temp=head ;
        printf("Elements in list are: \n") ;
        while(temp!=NULL)
        {
            printf("%d --->",temp->data);
            temp=temp->next;
        }

    }
    void search()
    {

        struct node* temp=head ;
        printf("Enter element to be searched: \n") ;
        scanf("%d",&val);
        while(temp!=NULL)
        {
            if(temp->data==val);
            {
                printf("Element found \n");
                count++;
                break;
            }
            temp=temp->next;
            if(count==0)
                printf("Element not present \n") ;
        }

    }
