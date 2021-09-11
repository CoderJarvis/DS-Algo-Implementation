#include <iostream>
#include <string.h>
using namespace std;
int main()
{
     int arr1[100],size1;
     int arr2[100],size2;
     cout<<"enter the size of the first array\n";
     cin>>size1;
     cout<<"enter the size of the second array\n";
     cin>>size2;
     cout<<"enter elements into first array\n";
     for(int i=0;i<size1;i++)
     {
         cin>>arr1[i];
     }
     cout<<"enter elements into second array\n";
     for(int i=0;i<size2;i++)
     {
         cin>>arr2[i];
     }
     cout<<"your first array elements are\n";
     for(int i=0;i<size1;i++)
     {
         cout<<arr1[i]<<" ";
     }
     cout<<"\nyour second array elements are\n";
     for(int i=0;i<size2;i++)
     {
         cout<<arr2[i]<<" ";
     }


    int arr3[100];
    int i,k;
    for(i=0,k=0;i<size1;i++,k++)
    {
        arr3[k]=arr1[i];
    }
    for(i=0,k=size1;i<size2;k++,i++)
    {
        arr3[k]=arr2[i];
    }

    cout<<"\nyour merged array elements are\n";
     for(int k=0;k<size1+size2;k++)
     {
         cout<<arr3[k]<<" ";
     }

}