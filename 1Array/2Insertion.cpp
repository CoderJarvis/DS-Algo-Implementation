#include <iostream>
#include <string.h>
using namespace std;
int main()
{
     int arr[100];
     int n;
     cout<<"enter the size of the array\n";
     cin>>n;
     cout<<"enter the elements into the array\n";
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }

    int newNumber,position;
    cout<<"enter the number you want to insert\n";
    cin>>newNumber;
    cout<<"enter the position in which you want to insert the new number\n";
    cin>>position;

   

    for(int i=n-1;i>=position-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[position-1]=newNumber;
    n++;
    cout<<"\nthe new array is\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


}