#include <iostream>
using namespace std;
#define N 5
int queue[N];
int front=-1;
int rear=-1;
int main()
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