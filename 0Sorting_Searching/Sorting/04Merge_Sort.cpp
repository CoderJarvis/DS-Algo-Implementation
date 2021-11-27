#include <iostream>
using namespace std;

void merge(int a[],int low,int mid,int high)
{
    int i,j,k;
    int b[100];     //another array is required for storing the array element in sorted order
    i=low;
    k=low;
    j=mid+1;

    while(i<=mid && j<=high)    //till 1st array finished or 2nd 2nd array finished
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }

    while(i<=mid)   //after finished one array if other array has elements left just copy to the third array
    {
        b[k]=a[i];
        i++;
        k++;
    }
    while(j<=high)  //we dont know which array will be finished first so write both array's code
    {
        b[k]=a[j];
        j++;
        k++;
    }

    for(int i=low;i<=high;i++)  //here the third array will have the elements in sorted array
    {
        a[i]=b[i];              //then we have to copy the tird array's elements into the original array
    }


}

void mergeSort(int a[],int low,int high)
{   
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;       //find out the mid first
        mergeSort(a,low,mid);   //the array is devied into two
        mergeSort(a,mid+1,high);    //1st array- 0 to mid and 2nd array mid+1 to high
        merge(a,low,mid,high);  //4 parameters are passed
    }


}
int main()
{
    int a[]={14,87,34,9,4,75,23,99,66,34,78,24};
    int n=sizeof(a)/sizeof(a[0]);
    mergeSort(a,0,n-1); //have to give low high, as the array gonna devided into two later
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}