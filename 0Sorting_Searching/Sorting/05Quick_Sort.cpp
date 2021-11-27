#include <iostream>
using namespace std;
int partition(int a[],int low,int high)
{
    int pivot=a[low];   //choose 1st element as the pivot element
    int i,j;
    i=low+1;    //i will be starting from next to pivot i.e low+1 //i will be i++
    j=high;     //j will be starting from last elemt i.e high //j will be j--
    int t;

    do
    {
        while(a[i]<=pivot) //we have to find out the element that is greater then pivot
        {
            i++;            //skiping all the elements that is less than pivot
        }
        while(a[j]>pivot)   //we have to find out the element that is less than pivot
        {
            j--;            //sking all the element the is greter the pivot
        }
        if(i<j)             //if we found above two element swapping will be occured i.e swap(a[i],b[j]);
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }while(i<j);            //when i crosses j we have to swap pivot i.e a[low] and a[j] ;

    t=a[low];
    a[low]=a[j];
    a[j]=t;
    return j;              //we have to return the j index as this is the partition index i.e the element in the index is soted finally
}

void quickSort(int a[],int low,int high)
{   
    int partitionIndex;
    if(low<high)
    {
        partitionIndex=partition(a,low,high);   //we have to find out the partition index first
        quickSort(a,low,partitionIndex-1);      //recursively devide the list into 2 starting from low to partitionIndex-1 as the first
        quickSort(a,partitionIndex+1,high);     //array and partitionIndex+1 to high as the second array 
    }                                           //as the partitionIndex is already sorted we dont need to include that
}
int main()
{
    int a[]={34,76,23,56,89,65,34,11,68,46,93,65};
    int n=sizeof(a)/sizeof(a[0]);
    quickSort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}