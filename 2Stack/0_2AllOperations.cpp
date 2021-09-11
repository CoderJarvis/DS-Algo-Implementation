#include <iostream>
using namespace std;

#define size 5
int top=-1;
int st[size];

void push()
{
     int ele;
     cout<<"enter the element you want to insert into the stack\n";
     cin>>ele;
     if(top==size-1)
     cout<<"ERROR, stack is full overflow condition\n";
     else
     {
         top=top+1;
         st[top]=ele;
     }

     cout<<"here is your stack\n";
     for(int i=0;i<=top;i++)
     {
         cout<<st[i]<<" ";
     }
}


void pop()
{
     if(top==-1)
     cout<<"ERROR, stack is empty underflow condition\n";
     else
     {
         top=top-1;
     }


     cout<<"here is your stack\n";
     for(int i=0;i<=top;i++)
     {
         cout<<st[i]<<" ";
     }
}


void traverse()
{
     cout<<"your stack is\n";
     for(int i=0;i<=top;i++)
     {
         cout<<st[i]<<" ";
     }
}


void peek()
{
    cout<<"the top most element of the statck is :"<<st[top];
}

//view perticular item from top
void peep()
{
     cout<<"enter the position from top\n";
     int pos;
     cin>>pos;
     if(top-pos+1 < 0)
     cout<<"invalid postion, position out of bound\n";
     else
     cout<<"the element is :"<<st[top-pos+1];
}


void updateByPos()
{
     cout<<"enter the position\n";
     int pos;
     cin>>pos;
     int newVal;
     cout<<"enter the new value\n";
     cin>>newVal;

     if(top-pos+1<0)
     cout<<"invalid position, position out of bound\n";
     else
     st[top-pos+1]=newVal;

     cout<<"here is your stack\n";
     for(int i=0;i<=top;i++)
     {
         cout<<st[i]<<" ";
     }
}


void updateByValue()
{
     int oldVal,newVal;
     cout<<"enter the old value\n";
     cin>>oldVal;
     cout<<"enter the new value\n";
     cin>>newVal;
     int i;
     for(i=0;i<=top;i++)
     {
         if(st[i]==oldVal)
         {
             st[i]=newVal;
             break;
         }
     }
     cout<<i<<endl;
     if(i==top+1)
     {
         cout<<"invalid old value entered\n";
     }

     cout<<"here is your stack\n";
     for(int i=0;i<=top;i++)
     {
         cout<<st[i]<<" ";
     }

}


int main()
{
        cout<<"1-push"<<endl;
        cout<<"2-pop"<<endl;
        cout<<"3-traverse"<<endl;
        cout<<"4-peek"<<endl;
        cout<<"5-peep(view pert from top)"<<endl;
        cout<<"6-update by position"<<endl;
        cout<<"7-update by value"<<endl;
        cout<<"8-exit the loop"<<endl;

        
        int choice;
        

       while(1)
       {
        cout<<"\nenter your choice\n";
        cin>>choice;

        switch(choice)
        {
            case 1:
            push();
            break;

            case 2:
            pop();
            break;

            case 3:
            traverse();
            break;

            case 4:
            peek();
            break;

            case 5:
            peep();
            break;

            case 6:
            updateByPos();
            break;

            case 7:
            updateByValue();
            break;


            case 8:
            exit(0);

        }
       
       }

}