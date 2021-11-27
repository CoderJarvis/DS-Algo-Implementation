#include <iostream>
using namespace std;
int binarySearch(int a[],int size,int key)
{
    int low,high,mid;
    low=0;
    high=size-1;
    while(low<=high)        //if i will cross j then the element is not present
    {
        mid=(low+high)/2;   //find out the mid first
        if(key==a[mid])     //if a[mid] match with key return mid
        return mid;
        else if(key<a[mid]) //if key is less the a[mid] you have to change the high to mid-1
        high=mid-1;
        else                //if key is greater than a[mid] you have change the low to mid+1
        low=mid+1;
    }
    return -1;
}
int main()
{
    int a[]={11,22,33,44,55,66,77,88,99,111};
    int n=sizeof(a)/sizeof(a[0]);
    int key;
    cout<<"enter the element you want to search\n";
    cin>>key;
    int x=binarySearch(a,n,key);
    if(x==-1)
    cout<<key<< " is not present\n";
    else
    cout<<key<<" is present at the position "<<x+1;

}