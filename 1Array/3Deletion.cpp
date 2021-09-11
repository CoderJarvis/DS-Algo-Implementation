#include <iostream>
#include <string.h>
using namespace std;
int main()
{
     int arr[100],n;
     cout<<"enter the array size\n";
     cin>>n;
     cout<<"enter the array elements\n";
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }

    cout<<"the old array is\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
     cout<<"\nenter the number you want to delete firm the array\n";
     int number;
     cin>>number;
     int index;
     for(int i=0;i<n;i++)
     {
         if(arr[i]==number)
         {
            index=i;
         }

     }
    //  cout<<index;
    

     for(int i=index+1;i<n;i++)
     {
         arr[i-1]=arr[i];
     }
     n--;
     cout<<"\nyour new array is\n";
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }


}