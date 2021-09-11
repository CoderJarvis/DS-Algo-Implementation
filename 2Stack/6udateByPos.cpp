#include <iostream>
using namespace std;
int main()
{
     int size=5;
     int top=-1;
     int st[size];

     cout<<"enter the position\n";
     int pos;
     cin>>pos;
     int newVal;
     cout<<"enter the new value\n";
     cin>>newVal;

     if(top-pos+1<0)
     cout<<"invalid position position out of bound\n";
     else
     st[top-pos+1]=newVal;

     cout<<"here is your stack\n";
     for(int i=0;i<=top;i++)
     {
         cout<<st[i]<<" ";
     }

}