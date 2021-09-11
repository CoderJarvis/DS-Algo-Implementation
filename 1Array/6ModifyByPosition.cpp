#include <iostream>
#include <string.h>
using namespace std;
int main()
{
     int arr[100],n;
     cout<<"enter the size of the array\n";
     cin>>n;
     cout<<"enter elements into array\n";
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }

     cout<<"your array elements are\n";
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }
     cout<<"\nenter the position in which you want to update\n";
     int pos;
     cin>>pos;
     cout<<"enter the new value\n";
     int newVal;
     cin>>newVal;
     arr[pos-1]=newVal;

    cout<<"your new array elements are\n";
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }


}