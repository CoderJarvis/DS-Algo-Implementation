#include <iostream>
using namespace std;
int main()
{
     int size=5;
     int top=-1;
     int st[size];
     
     if(top==-1)
     cout<<"stack is empty under flow condition\n";
     else
     {
         top=top-1;
     }


     cout<<"here is your stack\n";
     for(int i=0;i<=top;i++)
     {
         cout<<st[i]<<" ";
     }


}