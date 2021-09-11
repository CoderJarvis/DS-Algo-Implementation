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

     int oldVal,newVal;
     cout<<"\nenter the old value you want to modify\n";
     cin>>oldVal;
     cout<<"enter the new value\n";
     cin>>newVal;

     for(int i=0;i<n;i++)
     {
         if(arr[i]==oldVal)
         arr[i]=newVal;
     }

    cout<<"your new array elements are\n";
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }


}