#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void InsertAtHead(Node** head,int data)
{
    Node* temp=new Node(data);
    temp->next=*head;
    *head=temp;
}
int main()
{
    int n,m,zero=0,one=0,two=0;
    cout<<"Enter number of nodes:";
    cin>>n;
    Node* head=NULL;
    Node* node1=new Node(n);
    cout<<"Enter value in the nodes:";
    for(int i=0;i<n;i++)
    {
      cin>>m;
      InsertAtHead(&head,m);
      if(m==0)
        zero++;
      else if(m==1)
        one++;
      else if(m==2)
        two++;
    }
    Node* temp=head;
    while(temp!=NULL)
    {
        if(zero!=0)
        {
         temp->data=0;
         zero--;
        }
        else if(one!=0)
        {
            temp->data=1;
            one--;
        }
         else if(two!=0)
        {
            temp->data=2;
            two--;
        }
         
         temp=temp->next;
    }
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
 }
