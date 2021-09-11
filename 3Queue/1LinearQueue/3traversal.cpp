#include <iostream>
using namespace std;
#define N 5
int queue[N];
int front=-1;
int rear=-1;
int main()
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