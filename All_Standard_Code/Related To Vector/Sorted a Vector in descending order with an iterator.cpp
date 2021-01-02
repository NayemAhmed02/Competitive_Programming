// Sorted A Vector using iterator and not using a iterator..

#include<bits/stdc++.h>
using namespace std;

// Now I create a booliyan type function, that is need to descending sorting, function is shown in below....
// here, the func function return type is booliyan, and it's has two integer type parameters...
// And It's always return the bigger integer between them.....

bool func(int a, int b)
{
    return a > b;
}

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

    // Now I show you, how can you sorted the vector in descending order...
    // you need to create a booliyan type function
    // you need to add a new parameter in sort function declaration... the syntax of sort function is shown in below...
    // Here, the func is the name of the booliyan type function name....

    sort(vec.begin(), vec.end(), func);

    // Now I show you, how can you print the sorted values. you can do this by two different ways..

    // The Second way is shown in below..it's must be need to iterator declaration..otherwise it will be crash..

    for(ita=vec.begin(); ita!=vec.end(); ita++)
        cout<<*ita<<"\n";

    return 0;
}

