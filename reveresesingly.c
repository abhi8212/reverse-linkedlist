#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *next;

};
struct node *head,*newnode,*temp;
void creation()
{
    int choice ;
    head=NULL;
    //condition for multiple node;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data\n");
        scanf("%d",&newnode->data); 
        newnode->next=NULL;
        //creation of first node ;
        if(head==NULL)
        {
            head=temp=newnode;
        }
        //creation of second or morenode
        else
        {
            temp->next=newnode;
            //this temp will help in to link other node;
            temp=newnode;
        }
        printf("do u want to continue(0,1)\n");
        scanf("%d",&choice);
    }
}

//reverse the node;
void reverse()
{
     struct node *currentnode,*nextnode,*prevnode=0;// i taken first three node 
     //nextnode=to move forward;
     //curentnode=to point present node;
     //prevnode =take pointer to store the prevpointer
     nextnode=currentnode=head;

    while(nextnode!=NULL)
    {

        //forward the pointer
        nextnode=nextnode->next;
        //it will  store the address back node;
        currentnode->next=prevnode;
        //update to move forward
        prevnode=currentnode;
        currentnode=nextnode;
    }
    //in last head will point to last node;
    head=prevnode;
}

//to print the data;
void print()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
          printf("%d ",temp->data);
          temp=temp->next;
    }
}

int main()
{
    creation();
    print();
    reverse();
    print();
    return 0;
}
