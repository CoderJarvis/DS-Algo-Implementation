#include <iostream>
using namespace std;

int arr[100];
static int n;

void arrayInput(int arr[],int n)
{   
    cout<<"enter the array elements\n";
      for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}

void traversal(int arr[],int n)
{
    
 
    cout<<"your array elements are\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


void insertion(int arr[],int n)
{
    int newNumber,position;
    cout<<"enter the number you want to insert\n";
    cin>>newNumber;
    cout<<"enter the position in which you want to insert the new number\n";
    cin>>position;

    cout<<"the old array is\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    for(int i=n-1;i>=position-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[position-1]=newNumber;
    n++;
    cout<<"\nthe new array is\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


void deletion(int arr[],int n)
{
    cout<<"\nenter the number you want to delete firm the array\n";
     int number;
     cin>>number;
     int index;
     int i;
     for(i=0;i<n;i++)
     {
         if(arr[i]==number)
         {
            index=i;
            break;
         }

     }
    if(i==n)
     cout<<"the number not found";
    //  cout<<index;
    
    else
    {
        for(int i=index+1;i<n;i++)
        {
            arr[i-1]=arr[i];
        }
        n--;
    }
     cout<<"\nyour new array is\n";
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }

}


int main()
{
    
    cout<<"enter the size of the array\n";
    cin>>n;
   

     cout<<"0-arrayInput\n";
     cout<<"1-Traversal\n";
     cout<<"2-Insertion\n";
     cout<<"3-Deletion\n";
     cout<<"4-Search\n";
     cout<<"5-ModifyByValue\n";
     cout<<"6-ModifyByPosition\n";
     cout<<"7-Sorting\n";
     cout<<"8-Merging\n";
     cout<<"9-Traversal\n";
     cout<<"10-Traversal\n";
     cout<<"11-exit from loop\n";

     int choice;
     while(1)
     {
         cout<<"\nenter your choice\n";
         cin>>choice;

         switch(choice)
         {  
             case 0:
             arrayInput(arr,n);
             break;

             case 1:
             traversal(arr,n);
             break;

             case 2:
             insertion(arr,n);
             break;

             case 3:
             deletion(arr,n);
             break;

             case 4:
             break;

             case 5:
             break;

             case 6:
             break;

             case 7:
             break;

             case 8:
             break;

             case 9:
             break;

             case 10:
             break;

             case 11:
             exit(0);
         }
     }



}

//incomplete