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

     int max,min;
     min=arr[0];
     max=arr[0];
     for(int i=0;i<n;i++)
     {
         if(arr[i]>max)
         max=arr[i];
         else if(arr[i]<min)
         min=arr[i];
     }
     cout<<"\nmaximum :"<<max<<" minimum :"<<min;

}