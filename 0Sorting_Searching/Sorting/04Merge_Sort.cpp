#include <iostream>
using namespace std;

void merge(int a[],int mid,int low,int high)
{
    int i,j,k;
    int b[100];
    i=low;
    k=low;
    j=mid+1;

    while(i<=mid && j<=high)
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

    while(i<=mid)
    {
        b[k]=a[i];
        i++;
        k++;
    }
    while(j<=high)
    {
        b[k]=a[j];
        j++;
        k++;
    }

    for(int i=low;i<=high;i++)
    {
        a[i]=b[i];
    }


}

void mergeSort(int a[],int low,int high)
{
    while(low<high)
    {
        int mid=(low+high)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        merge(a,mid,low,high);
    }


}
int main()
{
    int a[]={14,87,34,9,4,75,23,87,66,34,78,24};
    int n=sizeof(a)/sizeof(a[0]);
    mergeSort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}