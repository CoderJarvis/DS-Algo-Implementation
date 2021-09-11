#include <iostream>
#include <string.h>
using namespace std;
int main()
{   
    int n;
    int arr[100];
    cout<<"enter the size of the array\n";
    cin>>n;
    cout<<"enter the array elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"your array elements are\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"|";
    }


}