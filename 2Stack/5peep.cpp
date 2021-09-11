#include <iostream>
using namespace std;
int main()
{   
     int size=5;
     int top=-1;
     int st[size];

     cout<<"enter the position from top\n";
     int pos;
     cin>>pos;
     if(top-pos+1 < 0)
     cout<<"invalid postion position out of bound\n";
     else
     cout<<"the element is :"<<st[top-pos+1];


}