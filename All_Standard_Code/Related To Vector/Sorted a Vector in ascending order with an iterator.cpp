// Sorted A Vector using iterator and not using a iterator..

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> vec; // This is a simple vector declaration..
    vector <int> :: iterator ita; // This is a simple Iterator declaration..

    // Initialization of vector elements

    vec.push_back(10);
    vec.push_back(100);
    vec.push_back(5);
    vec.push_back(50);
    vec.push_back(45);
    vec.push_back(55);
    vec.push_back(35);

    for(ita=vec.begin(); ita!=vec.end(); ita++)
        cout<<*ita<<"\n";

    // Now I show you, how can you sorted the vector in ascending order...
    // you need to use a new function called sort... the syntax of sort function is shown in below...
    // The syntax is unique...I can also be used it only by the vector declaration, without iterator declaration..

    sort(vec.begin(), vec.end());

    // Now I show you, how can you print the sorted values. you can do this by two different ways..

    // The Second way is shown in below..it's must be need to iterator declaration..otherwise it will be crash..

    for(ita=vec.begin(); ita!=vec.end(); ita++)
        cout<<*ita<<"\n";

    return 0;
}

