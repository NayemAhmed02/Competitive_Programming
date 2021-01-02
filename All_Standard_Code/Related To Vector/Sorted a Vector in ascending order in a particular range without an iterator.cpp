// Sorted A Vector using iterator and not using a iterator..

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

    // Now I show you, The Advance feature of sort function...if you want you also can sorted a vector in a particular range...
    // by the sort function, that means if you want to sorted only first 4 elements and others will be remain constant....
    // this operation is also valid in sort function...you can sorted the elements in any particular range that you want....
    // if you want to sorted only first 5 elements and others will be remain constant..the syntax is shown in below...
    // here, sort(vec.begin(), vec.begin()+5); statement means that it will be sorted vec[0] to before vec[5]...
    // that means, it will be sorted vec[0] to vec[4]...as the same way, sort(vec.begin()+2, vec.begin()+6); statement means
    // that it will be sorted vec[2] to vec[5]......that's it...

    sort(vec.begin(), vec.begin()+5);

    // Now I show you, how can you print the sorted values. you can do this by two different ways..

    // The first way is shown in below..it's not need to iterator declaration...if iterator declared then this situation
    // it also be work properly...that means it's don't care that iterator is declared or not....

    for(int i=0; i<vec.size(); i++)
        cout<<vec[i]<<"\n";

    return 0;
}

