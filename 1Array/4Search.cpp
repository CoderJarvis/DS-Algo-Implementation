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

     cout<<"\nenter the element you want to search\n";
     int ele;
     cin>>ele;
     int flag=0;
     int i=0;
     for(i=0;i<n;i++)
     {
         if(arr[i]==ele)
         {
             flag=1;
             break;     
         }
     }
     if(flag)
     cout<<"element found in the position :"<<i+1;
     else
     cout<<"element not found\n";


}