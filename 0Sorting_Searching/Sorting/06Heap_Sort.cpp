#include <bits/stdc++.h>
using namespace std;
void heapify(int a[],int n,int i)   //it takes node index as an argument//nodes below i should be in max heap//transfor to max heap
{                                                                                                  //starting from i to below subtree
    int largest=i;      //asuming the i node is the largest node
    int left=i*2+1;     //left child
    int right=i*2+2;    //right child
    if(left<n && a[left]>a[largest])    //if left child is largest update the largest
    {
        largest=left;
    }
    if(right<n && a[right]>a[largest])  //if right child is largest update the largest
    {
        largest=right;
    }
    if(largest != i)    //if i==largest no need to swap our i node is the largest element
    {
        swap(a[i],a[largest]);  //swap a[i] to largest(either left child or right child) to keep max heap property
        heapify(a,n,largest);   //recursively call the heapify() function for the perticular sub tree
    }
}
void heapSort(int a[],int n)
{
    for(int i=(n/2)-1;i>=0;i--) //we should start from the node which is the right most node of second last level of the tree
    {
        heapify(a,n,i);         //from that node to the first node we have to call heapify(i) for each node sending the node's      
    }                           //index as the argument// it wiill make the subtree of the index as a max heap
    for(int i=n-1;i>0;i--)      //here our we have made the max heap // so on the root max element will be present
    {
        swap(a[0],a[i]);        //now by swapping our root element with our last element array will be sorted automatically
        heapify(a,i,0);         //after each swap it will not be in max heap 
    }                           //now we have to call the heapify() again to make it max heap again

}
int main()
{
    int a[]={34,76,90,63,13,67,95,74,86,46,85,24,79};
    int n=sizeof(a)/sizeof(a[0]);//size of the array
    heapSort(a,n);
    for(int i=0;i<n;i++)    //printing the array
    {
        cout<<a[i]<<" ";
    }
}