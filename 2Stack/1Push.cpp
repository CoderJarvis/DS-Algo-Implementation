#include <iostream>
using namespace std;
int main()
{
     int size=5;
     int top=-1;
     int st[size];
     
     int ele;
     cout<<"enter the element you want to insert into the stack\n";
     cin>>ele;
     if(top==size-1)
     cout<<"stack is full overflow condition\n";
     else
     {
         top=top+1;
         st[top]=ele;
     }

     cout<<"here is your stack\n";
     for(int i=0;i<=top;i++)
     {
         cout<<st[i]<<" ";
     }


}