// bubble sort
// repeatedly swap two elements if they are in wrong order

#include <iostream>
using namespace std;
int main()
{
    int a[]={44,22,66,99,11,33,55,77,88};
    int n=sizeof(a)/sizeof(a[0]);
    int counter=2;
    while(counter<n)
    {
        for(int i=0;i<=n-counter;i++)
        {
            if(a[i]>a[i+1])
            {
                int t;
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
        counter++; 
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }


}