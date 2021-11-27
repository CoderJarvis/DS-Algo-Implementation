#include <iostream>
using namespace std;
void linearSearch(int a[],int n,int key)
{
    int i=0;
    for(;i<n;i++)
    {
        if(a[i]==key)
        {
            cout<<key<<" is present at the position "<<i+1;
            break;
        }
    }
    if(i==n)
    {
        cout<<key<<" is not present\n";
    }
}
int main()
{
    int a[]={11,22,33,44,55,66,77,88,99,111};
    cout<<"enter the element you want to search\n";
    int n;
    n=sizeof(a)/sizeof(a[0]);
    int key;
    cin>>key;
    linearSearch(a,n,key);

}