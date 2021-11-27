#include <bits/stdc++.h>
using namespace std;
void selectionSort(int a[],int n)
{
    int min,t;
    for(int i=0;i<n-1;i++)  //n-1 bcoz if we sorted 4 elements the other one will auto in sorted position
    {
        int indMin=i;   //assume the first element as the minimum elemnt and store its index
        for(int j=i+1;j<n;j++)  //for check next elements
        {
            if(a[j]<a[indMin])  //if there is present any minimun element update the index if min(indMin)
            {
                indMin=j;
            }
        }
        t=a[i];             //swap the actual min element with assumed minimum element i.e a[i];
        a[i]=a[indMin];
        a[indMin]=t;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int a[]={11,75,4,99,33,59,28,77,44,22};
    int n=sizeof(a)/sizeof(a[0]);
    selectionSort(a,n);
}