#include<iostream>
using namespace std;

#define size 1000
int i = 0;

class stack
{
    int j;
    int box[size];
public:
    int push();
    int pop();
};

int stack :: push()
{
   i++;
   cout<<"Enter element to be inserted : ";
   cin>>box[i];
   return box[i];
}

int stack :: pop()
{
    i--;
}

int main()
{
    int k,choice,l;
    stack object;

    cout<<"Stack : "<<endl<<endl<<"Enter Your Choice :"<<endl<<endl;
    cout<<"1. Insert\n2. Delete\n3. Exit\n\n";

    for( ; ; )
    {
        cin>>choice;
        if(choice == 3) break;
        else if(choice == 1)
        {
            l = object.push();
            cout<<"Stack : ";
            for(k=1; k<=i; k++)
                cout<<l;
           cout<<endl<<endl<<"Enter Your Choice :"<<endl<<endl;
           cout<<"1. Insert\n2. Delete\n3. Exit\n\n";
        }
        else if(choice == 2)
        {
            if(i == 0) cout<<"Sorry\n";
            else
            {
                l = object.pop();
            cout<<"Stack : ";
            for(k=1; k<=i; k++)
                cout<<l;
           cout<<endl<<endl<<"Enter Your Choice :"<<endl<<endl;
           cout<<"1. Insert\n2. Delete\n3. Exit\n\n";
            }
        }
    }
    return 0;
}
