#include <iostream>
using namespace std;
#define N 5
int queue[N];
int front=-1;
int rear=-1;

void enqueue()
{
      int x;
     cout<<"enter the number\n";
     cin>>x;

     if(rear==N-1)
     cout<<"overflow condition\n";
     else if(rear==-1)
     {
         front=rear=0;
         queue[rear]=x;
     }
     else
     {
         rear=rear+1;
         queue[rear]=x;
     }
}

void dequeue()
{   
    
    if(front==-1)
    cout<<"underflow condition\n";

    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front++;
    }
}

void traversal()
{   
   if(front == -1)
    cout<<"queue is empty\n";
   else
   {
         for(int i=0;i<N;i++)
    {
        cout<<queue[i]<<" ";
    }
   }
}

void viewPerticular()
{   
    int pos;
    cout<<"enter the element position of element u want to view\n";
    cin>>pos;
    if(front+pos-1>rear)
    cout<<"invalid position\n";
    else
    cout<<queue[front+pos-1];
}

void update()
{
    cout<<"enter the positon u want to update the element\n";
    int pos;
    cin>>pos;
    if (front+pos-1>rear)
    cout<<"invalid position\n";  
    cout<<"enter the new element\n";
    int newVal;
    cin>>newVal;
    queue[front+pos-1]=newVal;
   
}


int main()
{
    printf("1-enqueue\n");
    printf("2-dequeue\n");
    printf("3-traversal\n");
    printf("4-view_perticular\n");
    printf("5-update\n");
    printf("6-exit\n");
    while (1)
    {
        cout<<"\nenter choice\n";
        int c;
        cin>>c;
        switch (c)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            traversal();
            break;
        case 4:
            viewPerticular();
            break;
        case 5:
            update();
            break;
        case 6:
           exit(0);
            break;
        
        default:
            break;
        }
    }
    


}