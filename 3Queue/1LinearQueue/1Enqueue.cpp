#include <iostream>
using namespace std;
#define N 5
int queue[N];
int front=-1;
int rear=-1;
int main()
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