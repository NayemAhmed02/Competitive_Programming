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
   cout<<"Enter element to be inserted : ";
   cin>>box[i];
   cout<<"Stack : ";
   for(j=0; j<=i; j++)
    cout<<box[j];
   cout<<endl<<endl<<"Enter Your Choice :"<<endl<<endl;
   cout<<"1. Insert\n2. Delete\n3. Exit\n\n";
   i++;
}

int stack :: pop()
{
    i--;
    if(i < 0) cout<<"Sorry\n";
    else
    {
            cout<<"Stack : ";
            for(j=0; j<i; j++)
                cout<<box[j];
           cout<<endl<<endl<<"Enter Your Choice :"<<endl<<endl;
           cout<<"1. Insert\n2. Delete\n3. Exit\n\n";
    }
}
int main()
{
    int choice;
    stack object;

    cout<<"Stack : "<<endl<<endl<<"Enter Your Choice :"<<endl<<endl;
    cout<<"1. Insert\n2. Delete\n3. Exit\n\n";

    for( ; ; )
    {
        cin>>choice;
        if(choice == 3) break;
        else if(choice == 1)
            object.push();
        else if(choice == 2)
            object.pop();
    }
}
