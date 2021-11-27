#include <iostream>
using namespace std;
void bubbleSort(int a[],int n)
{
    int t;
    for(int i=0;i<n-1;i++)  //for no of passes
    {
        for(int j=0;j<n-1-i;j++)    //for no of comparisions
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int a[]={44,22,66,99,11,33,55,77,88};
    int n=sizeof(a)/sizeof(a[0]);
    bubbleSort(a,n);
}