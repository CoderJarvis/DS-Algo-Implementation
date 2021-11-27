#include <iostream>
using namespace std;
void insertionSort(int a[],int n)
{
    int key,j;
    for(int i=1;i<n;i++)    //5 | 3 8 2 5 //we have to start index 1 bcoz array of 1 element is sorted array
    {                       //then we have to compare the key & put it into the array in sorted order
        key=a[i]; 
        j=i-1;              //for keeping track of previous elements and for comparing
        while(a[j]>key && j>=0)
        {
            a[j+1]=a[j];
            j--;            //keep on checking with previous elements
        }
        a[j+1]=key;         //putting the key element into the perfect position in the sorted array
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