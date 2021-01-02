// Sorted A Vector in ascending order without an iterator..

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> vec; // This is a simple vector declaration..

    // Initialization of vector elements

    vec.push_back(10);
    vec.push_back(100);
    vec.push_back(5);
    vec.push_back(50);
    vec.push_back(45);
    vec.push_back(55);
    vec.push_back(35);

    for(int i=0; i<vec.size(); i++)
        cout<<vec[i]<<"\n";

    // Now I show you, how can you sorted the vector in ascending order...
    // you need to use a new function called sort... the syntax of sort function is shown in below...
    // The syntax is unique...I can also be used it only by the vector declaration, without iterator declaration..

    sort(vec.begin(), vec.end());

    // Now I show you, how can you print the sorted values. you can do this by two different ways..

    // The first way is shown in below..it's not need to iterator declaration...if iterator declared then this situation
    // it also be work properly...that means it's don't care that iterator is declared or not....

    for(int i=0; i<vec.size(); i++)
        cout<<vec[i]<<"\n";

    return 0;
}

