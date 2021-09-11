#include <iostream>
using namespace std;
#define N 5
int queue[N];
int front=-1;
int rear=-1;
int main()
{
   int pos;
    cout<<"enter the element position of element u want to view\n";
    cin>>pos;
    if(front+pos-1>rear)
    cout<<"invalid position\n";
    else
    cout<<queue[front+pos-1];
}


