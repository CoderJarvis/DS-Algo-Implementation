#include <bits/stdc++.h>
using namespace std;
void selectionSort(int a[],int n)
{
    int min,t;
    for(int i=0;i<n-1;i++)
    {
        int indMin=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[indMin])
            {
                indMin=j;
            }
        }
        t=a[i];
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