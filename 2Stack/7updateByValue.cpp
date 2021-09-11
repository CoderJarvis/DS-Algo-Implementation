#include <iostream>
using namespace std;
int main()
{
     int size=5;
     int top=-1;
     int st[size];

     int oldVal,newVal;
     cout<<"enter the old value\n";
     cin>>oldVal;
     cout<<"enter the new value\n";
     cin>>newVal;
     int i;
     for(i=0;i<=top;i++)
     {
         if(st[i]==oldVal)
         st[i]==newVal;
         break;
     }
     if(i==top+1)
     {
         cout<<"invalid old value entered\n";
     }

     cout<<"here is your stack\n";
     for(int i=0;i<=top;i++)
     {
         cout<<st[i]<<" ";
     }


}