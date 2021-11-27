#include <iostream>
using namespace std;
void insertionSort(int a[],int n)
{
    int key,j;
    for(int i=1;i<n;i++)
    {
        key=a[i]; 
        j=i-1;
        while(a[j]>key && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int a[]={44,77,55,22,99,11,88,33,66};
    int n=sizeof(a)/sizeof(a[0]);
    insertionSort(a,n);
}