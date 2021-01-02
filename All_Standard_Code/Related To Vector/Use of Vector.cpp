// Basic Information About Vector and its use

// Generally vector works look like an array to take input and give output.... array need to declare it's index size
// but vector does not need it.....one important point is that an array index size must be a constant..

#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Now I show you, How can you declare a Vector...The Syntax of a Vector Declaration is shown in below...
    // Here int Represent the type of variable, and vec Represent a variable name....

    vector <int> vec;

    // vector supports two different method to take input....both are valid to take input...
    // But always remember that if you want to use second method to take input, at least one input must be taken by the
    // First method before used second method, and used after second method first method used again not allowed...
    // otherwise program will be crash...
    // So, Aways Must be used only first method to take input for safety......

    // The First Method syntax is shown in below....

    vec.push_back(10); // this means vec[0] = 10
    vec.push_back(15); // this means vec[1] = 15
    vec.push_back(20); // this means vec[2] = 20

    // And the Second method syntax is shown in below...

    vec[3] = 25;
    vec[4] = 30;

    // For Print output Vector follows a method looks like an array, this method syntax is shown in below...

    cout<<vec[0]<<"\n";
    cout<<vec[1]<<"\n";
    cout<<vec[2]<<"\n";
    cout<<vec[3]<<"\n";
    cout<<vec[4]<<"\n";

    // Now I show you, How can you find the Size of a vector, that means the total number of elements of a vector..
    // The syntax is shown in below...

    cout<<"\nTotal Number of elements of given Vector Is: ";
    cout<<vec.size()<<"\n";  // It does not count those are taken by second method,it only count those are taken by first method.

    // Now I can easily print the values by a loop

    for(int i=0; i<vec.size(); i++)
        cout<<vec[i]<<"\n";

    // Now I show you, Another advance way to Vector Declaration, The syntax is shown in below..
    // Here, the additional part of this declaration from previous declaration is (5, 18)
    // here, 10 represent the number of element of the vector vec1, that means that vec1 has 10 elements.
    // And 18 represent the value of all elements of vector vec1, that means all elements value are initialized by 18..

    vector <int> vec1 (10, 18);

    // It prints 18 ten times....

    for(int i=0; i<vec1.size(); i++)
        cout<<vec1[0]<<"\n";

    // Now I Show you, I can also add new vector elements after advance vector declaration...

    vec1.push_back(20);
    vec1.push_back(25);

    // It prints 18 ten times, 20 one time, and 25 one time...

    for(int i=0; i<vec1.size(); i++)
        cout<<vec1[i]<<"\n";

    return 0;

}
