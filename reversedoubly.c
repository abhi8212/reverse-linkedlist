#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;

};
struct node *head,*tail,*newnode;
void creation()
{
    int choice ;
    head=NULL;
    while(choice)
    {
        newnode =(struct node*)malloc(sizeof(struct node));
        printf("enter the data");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head==NULL)
        {
            tail=head=newnode;
        }
        else
        {
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;

        }

        printf("do u want to continue\n");
        scanf("%d",&choice);

    }
}

void print()
{
    struct node *temp;
    temp=tail;
    while(temp->prev!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->prev;
    }
    printf("%d",head->data);

}


int main()
{
    creation();
    print();
    return 0;
}