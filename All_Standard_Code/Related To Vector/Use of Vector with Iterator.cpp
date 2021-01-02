// Basic Information about using Vector with Iterator......

// Generally Iterator works look like a pointer, I can call it pointer of vector also, Now I Show you,how do work a iterator with
// a vector...Enjoy it.....

#include<bits/stdc++.h>
using namespace std;

int main()

{
    vector <int> vec;  // This is a simple vector declaration....

    // First I show you how can you declare an iterator, The declaration of an iterator syntax is shown in below..
    // Here, ita is an iterator variable name, and int represent the type of variable. That means...
    // the iterator ita can access the any integer type Vector....

    vector <int> :: iterator ita;

    // Initialization of a vector elements...

    for(int i=1; i<=100; i=i+2)
        vec.push_back(i);

    // Now I Show you, how can an iterator can access the elements of a vector, the syntax is shown in below....
    // It points the first element of vector vec, like a pointer....and it also can access the next elements
    // of vector vec by the increment operator ( ita++ ) .......

    ita = vec.begin();

    // Now I show you, how can you print the value of an iterator, the syntax is shown in below....
    // to print an iterator value you need a asterisk ( * ) preceded the iterator name....

    cout << *ita <<"\n"; // It prints the first element value of vector vec, that is 1....

    // Now I show you, How can you access the next elements....

    ita++;
    cout << *ita <<"\n"; // It prints the second element value of vector vec, that is 3....

    ita++;
    cout << *ita <<"\n"; // It prints the third element value of vector vec, that is 5....


    // Oh shit....! it's a very long process....you think about shorter....okay
    // Now I show you, How can you prints the all values of an iterator by a loop, the syntax is shown in below...
    // Here vec.end() means the termination of vec element.....

    for(ita=vec.begin(); ita != vec.end(); ita++)
        cout<<*ita<<"\n";

    return 0;

}
