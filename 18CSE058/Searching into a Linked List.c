#include<stdio.h>
#include<malloc.h>
struct node
{
     int data;
     struct node *next;
}
first, *nw;

int search(int item)
{
     int count=1;
     nw=&first;
     while(nw->next!=NULL)
     {
          if(nw->data==item)
               break;
          else
               count++;
          nw=nw->next;
     }
     return count;
}
int main()
{
     int no,i,item,pos;
     first.next=NULL;
     nw=&first;
     printf("How many nodes you want in linked list?: ");
     scanf("%d",&no);
     printf("\n");
     for(i=0;i< no;i++)
     {
          nw->next=(struct node *)malloc(sizeof(struct node));
          printf("Enter element in node %d: ",i+1);
          scanf("%d",&nw->data);
          nw=nw->next;
     }
     nw->next=NULL;
     printf("\nElements in linked list :\n\n");
     nw=&first;
     while(nw->next!=NULL)
     {
          printf("%d\t",nw->data);
          nw=nw->next;
     }
     printf("\n");
     printf("\nEnter element to be searched : ");
     scanf("%d",&item);
     pos=search(item);
     if(pos<=no)
          printf("\n'%d' is found at node = %d",item,pos);
     else
          printf("Sorry! '%d' is not in linked list.",item);
     return 0;
}
