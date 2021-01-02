#include<iostream>
using namespace std;

#define size 1000

class stack
{
    int box[size];
    int i,j,opinion;
public:
    stack();
    int push();
    int pop();
};

stack :: stack()
{
    cout<<"Constructing A Stack : "<<endl<<endl;
    i = 0;
}

int stack :: push()
{
    for(i=0; i<size; i++)
    {
        cout<<"Enter A Stack Element : ";
        cin>>box[i];
        cout<<endl<<"Now Your Stack Elements Are :  ";
        for(j=0; j<=i; j++)
            cout<<box[j]<<' '<<' ';
        cout<<endl<<endl;
        cout<<"Are You Want to Continue This stack , If Your Answer Is yes Press 1 , Else Press 2 : ";
        cin>>opinion;
        cout<<endl<<endl;
        if(opinion == 2) break;
        else if(i == (size-1)) cout<<"Sorry ...!  You can't continue , Because Stack Is Full...."<<endl;
    }
    return j;
}

int stack :: pop()
{
   j--;
   return box[j];
}

int main()
{
    int n;
    stack object;
    n = object.push();
    n--;
    cout<<endl<<endl<<"Now You Print The Most Top Element Of Given stack Respectively : "<<endl<<endl;

    while(n >= 0)
    {
        cout<<"TOP : "<<object.pop()<<endl;
        n--;
    }
    cout<<endl<<"Sorry ...!  You can't perform more . Because Stack Is Empty...."<<endl;

    return 0;
}

