#include <iostream>
using namespace std;
#define N 5
int queue[N];
int front=-1;
int rear=-1;
int main()
{
    if(front==-1)
    {
        cout<<"queue is full\n";
    }
    else
    {   
       int i=front;
       while (i!=rear)
       {
           cout<<queue[i]<<" ";
           i=(i+1)%N;
       }
       cout<<queue[rear]; //imp in case of circular queue it has to jump 4 to 0 i<=rear  wont work //doest nt need in liner q
       
    }

}