#include <iostream>
using namespace std;
void bubbleSort(int a[],int n)
{
    int t;
    for(int i=0;i<n-1;i++)  //for no of passes // n-1 bcoz if we place 4 elements its sorted position 
    {                       //then automatically 5th elemnt will b int its sorted position
        for(int j=0;j<n-1-i;j++)    //for no of comparisions// 1st pass->5-0-1=4 comparision i=0        //this is actual array index
        {                                                    //2nd pass->5-1-1=3 comparision i=1
            if(a[j]>a[j+1])                                  //3rd pass->5-2-1=2 comparision and so on..
            {
                t=a[j];     //if element is greater than its next element swapping occures otherwise not
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}
int main()
{
    int a[]={44,22,66,99,11,33,55,77,88};
    int n=sizeof(a)/sizeof(a[0]);
    bubbleSort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}