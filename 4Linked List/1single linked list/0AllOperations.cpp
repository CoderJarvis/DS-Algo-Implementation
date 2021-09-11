#include <iostream>
#include <stdio.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
    struct node *head;
    struct node *newNode;
    struct node *temp;
void creat()
{
    head=NULL;
    while (1)
    {
        newNode=(struct node*)malloc(sizeof(struct node));
        cout<<"enter the element\n";
        cin>>newNode->data;
        newNode->next=NULL;

        if(head==NULL)
        {
            head=temp=newNode;
        }
        else
        {
            temp->next=newNode;
            temp=newNode;
        }

        cout<<"do u want to creat anather node\n";
        char c;
        cin>>c;
        if(c=='n')
            break;
    }
    

   
}

void display()
{
    temp=head;
    while(temp->next!=NULL)
    {
        cout<<temp->data<<" ";

        temp=temp->next;
    }
     cout<<temp->data;
}
int main()
{
    cout<<"1-creat\n";
    cout<<"2-display\n";
    cout<<"1-creat\n";
    cout<<"1-creat\n";
    cout<<"1-creat\n";

    while (1)
    {
        int c;
        cout<<"\nenter your choice\n";
        cin>>c;
        switch (c)
        {
        case 1:
            creat();
            break;
        case 2:
            display();
            break;
        
        default:
            break;
        }
    }
    

    

}