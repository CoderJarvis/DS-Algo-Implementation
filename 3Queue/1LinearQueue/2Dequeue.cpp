#include <iostream>
using namespace std;
#define N 5
int queue[N];
int front=-1;
int rear=-1;
int main()
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