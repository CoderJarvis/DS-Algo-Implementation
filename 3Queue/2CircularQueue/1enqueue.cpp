#include <iostream>
using namespace std;
#define N 5
int queue[N];
int front=-1;
int rear=-1;
int main()
{
     cout<<"enter the elements\n";
    int x;
    cin>>x;

    if((rear+1)%N==front)
    {
        cout<<"overflow condition\n";
    }
    else if(rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else
    {
    rear=(rear+1)%N;
    queue[rear]=x;
    }


}