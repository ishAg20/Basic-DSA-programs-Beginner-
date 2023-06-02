//22BCE3179_IshikaAgarwal
#include<stdio.h>
#include<conio.h>
int front=-1,rear=-1,choice=0,ele,n,i;
int arr[];
void enqueue();
void dequeue();
void display();
void main()
{
 printf("Enter size of queue to perform operations \n");
 scanf("%d",&n);
 arr[n];
 while(choice!=4)
 {
 printf("\n Enter choice \n 1.to push element in
queue(enqueue) \n 2.to pop element from
queue(dequeue)\n 3.to display queue \n 4. to exit \n ");
 scanf("%d",&choice);
 printf("\n");
 switch(choice)
 {
 case 1:
 {
 enqueue();
 break;
 }
 case 2:
 {
 dequeue();
 break;
 }
 case 3:
 {
 display();
 break;
 }

case 4:
 {
 printf("Program terminated\n");
 break;
 }
 default:
 printf("Enter valid choice");
 }
 }
}
void enqueue()
{
 if (front ==0 && rear==n-1)
 {
 printf("Queue Full \n");
}
 else
 {
 printf("Enter element to be added to queue \n");
 scanf("%d",&ele);
 if(front ==-1 && rear==-1)
 {
 front =0;
 rear = 0;
 }
 else
 {
 rear++;
 }
 arr[rear]=ele;
 }
}
void dequeue()
{
if (front == -1)
 {
 printf("Queue Empty \n");
 }
 else
 {
 ele=arr[front];
 if(front == rear)
 {
 front =-1;
 rear = -1;
 }
 else
 {
 front++;
 }
 printf("%d has been removed from queue \n",ele);
}
}
void display()
{
 printf("Elements in Queue are: \n");
 for(i=front;i<=rear;i++)
 printf("%d\t",arr[i]);
 printf("\n \n");
}
