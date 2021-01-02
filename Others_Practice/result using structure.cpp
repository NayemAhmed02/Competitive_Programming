#include<iostream>
using namespace std;

struct result
{
    char name[50][15];
    int roll[50];
    int mark[50][5];
    double cgpa[50],cg;
    void get_info(int I,int J);
    void display_info(int I);
    void make_cgpa(int I,int J);
} student[50];

void result::get_info(int I,int J)

{
    cout<<"Enter Student Name: ";
    cin>>name[I];
    cout<<"Enter Student Roll: ";
    cin>>roll[I];
    cout<<"Enter Student Marks: \n\n";
    cout<<"Enter C++ Marks: ";
    cin>>mark[I][J];

    J++;
    cout<<"Enter Math Marks: ";
    cin>>mark[I][J];

    J++;
    cout<<"Enter Discreat Math Marks: ";
    cin>>mark[I][J];

    J++;
    cout<<"Enter Economics Marks: ";
    cin>>mark[I][J];

    J++;
    cout<<"Enter EEE Marks: ";
    cin>>mark[I][J];

}

void result::make_cgpa(int I,int J)
{
    if(mark[I][J]>=80) cgpa[I] = cgpa[I] + 4.0;
    else if(mark[I][J]>=75 && mark[I][J]<=79) cgpa[I] = cgpa[I] + 3.75;
    else if(mark[I][J]>=70 && mark[I][J]<=74) cgpa[I] = cgpa[I] + 3.50;
    else if(mark[I][J]>=65 && mark[I][J]<=69) cgpa[I] = cgpa[I] + 3.25;
    else if(mark[I][J]>=60 && mark[I][J]<=64) cgpa[I] = cgpa[I] + 3.00;
    else if(mark[I][J]>=55 && mark[I][J]<=59) cgpa[I] = cgpa[I] + 2.75;
    else if(mark[I][J]>=50 && mark[I][J]<=54) cgpa[I] = cgpa[I] + 2.50;
    else if(mark[I][J]>=45 && mark[I][J]<=49) cgpa[I] = cgpa[I] + 2.25;
    else if(mark[I][J]>=40 && mark[I][J]<=44) cgpa[I] = cgpa[I] + 2.00;
    else  cgpa[I] = cgpa[I] + 0.0;
}

void result::display_info(int I)
{
    cout<<"\n\n\n";
    cout<<"Student Name: "<<name[I]<<endl;
    cout<<"Student Roll: "<<roll[I]<<endl;
    cout<<cgpa[I];
    cg = cgpa[I] / 5.0;
    cout<<"Student C.G.P.A: "<<cg<<endl;
    cout<<"Student Grade: ";
    if(cg >= 4.0) cout<<"A+\n";
    else if(cg >= 3.75 && cg < 4.0) cout<<"A\n";
    else if(cg >= 3.50 && cg < 3.75) cout<<"A-\n";
    else if(cg >= 3.25 && cg < 3.50) cout<<"B+\n";
    else if(cg >= 3.00 && cg < 3.25) cout<<"B\n";
    else if(cg >= 2.75 && cg < 3.00) cout<<"B-\n";
    else if(cg >= 2.50 && cg < 2.75) cout<<"C+\n";
    else if(cg >= 2.25 && cg < 2.50) cout<<"C\n";
    else if(cg >= 2.00 && cg < 2.25) cout<<"D\n";
    else  cout<<"FAIL\n";
}
int main()
{
    int K,N,L;
    cout<<"Enter The Number Of Student: ";
    cin>>N;
    for(K=0; K<N; K++)
        student[K].get_info(K,0);
    for(K=0; K<N; K++)
        for(L=0; L<5; L++)
        student[K].make_cgpa(K,L);
    for(K=0; K<N; K++)
        student[K].display_info(K);

    return 0;
}


