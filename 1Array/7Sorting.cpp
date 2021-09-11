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
     int t;
    // wrong logic check why//logic corrected
     for(int i=0;i<n-1;i++)
     {
         for(int j=i+1;j<n;j++)
         {
             if(arr[i]>arr[j])
             {
                 t=arr[i];
                 arr[i]=arr[j];
                 arr[j]=t;
             }
         }
     }
    // second logic also correct
    // for(int i=1;i<n;i++)
    //  {
    //      for(int j=0;j<n-1;j++)
    //      {
    //          if(arr[j]>arr[i])
    //          {
    //              t=arr[i];
    //              arr[i]=arr[j];
    //              arr[j]=t;
    //          }
    //      }
    //  }

    // if(arr[i]>arr[j]) it will be sorted in decreasing order


     cout<<"\nyour sorted array elements are\n";
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }


}