#include <iostream>
using namespace std;
int binarySearch(int a[],int size,int key)
{
    int l,h,mid;
    l=0;
    h=size-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==a[mid])
        return mid;
        else if(key<a[mid])
        h=mid-1;
        else
        l=mid+1;
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