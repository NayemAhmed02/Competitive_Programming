#include<bits/stdc++.h>
using namespace std;

void explainPair()
{
    pair<int, int> p = {1, 5};

    // print 1 5
    cout<<p.first<<" "<<p.second<<"\n";

    // Nested Pair
    pair<int, pair<int, int>> np = {2,{5,9}};

    // print 2 5 9
    cout<<np.first<<" "<<np.second.first<<" "<<np.second.second<<"\n";

    // Pairs array
    pair<int, int> arrop[] = { {1,2}, {3,4}, {5,6} };

    // print 5 2 4
    cout<<arrop[2].first<<" "<<arrop[0].second<<" "<<arrop[1].second<<"\n";
}

void explainVector()
{
    // A empty vector
    vector<int> v; //{}

    // add element to vector
    v.push_back(5);    // {5}
    v.emplace_back(7); // {5,7}
    // the functionality of push_back AND emplace_back are same. Both of them are used for insert an element to vector.
    // use of push_back is good practice.

    // we can also create a pair inside of a vector.
    vector<pair<int,double>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);

    // initialize A vector of size 5 with everyone as 77
    vector<int> v1(5, 77);   //{77,77,77,77,77}

    // copy a vector to another
    vector<int> v2(v1);
    // the vector v2 will inherit all the element of vector v1.
    // v1 = {77,77,77,77,77}
    // v2 = {77,77,77,77,77}

    // ITERATOR
    // take a vector with element {10, 20, 30, 40}
    vector<int> v3 = {10, 20, 30, 40};
    // initialized iterator
    vector<int> :: iterator it = v3.begin();
    // v3.begin() always point to the first element of vector v3 that means 10. But
    // you can't say the iterator it is 10, the iterator it is point to the address
    // location of 10.

    cout<<*(it)<<"\n"; // print 10

    it++;   // now, iterator it is pointing to the address location of 20
    cout<<*(it)<<"\n"; // print 20

    it = it+2; // now, iterator it is pointing to the address location of 40
    cout<<*(it)<<"\n"; // print 40

    it--; // now, iterator it is pointing to the address location of 30
    cout<<*(it)<<"\n"; // print 30

    it = v3.end();
    // v3.end() always point to the after last element of vector v3 that means after 40.
    // remember v3.end() does not point the last element but after the last element;

    //==========================================================================================================
    //  vector<int> :: iterator it = v.rbegin(); --> the reverse begin point to the address of last element not
    //                  after the last element.
    //  vector<int> :: iterator it = v.rend(); --> the reverse end point to the address of before first element not
    //                 first element.
    //=============================================================================================================


    // How do access the element of vector without iterator. Indexing is similar like array starts from 0 to n-1.
    cout<<v3[0]<<" "<<v3[2]<<"\n";  //print 10 30
    // Print the last element of vector
    cout<<v3.back()<<"\n"; //print the last element of vector v3 that means 40.

    // ways to print the element of vector

    // First way.
    cout<<"First Way: \n";
    for(it=v3.begin(); it!=v3.end(); it++)
    {
        cout<<*(it)<<"\n";
    }

    // Second way
    cout<<"Second Way: \n";
    for(auto it=v3.begin(); it!=v3.end(); it++)
    {
        cout<<*(it)<<"\n";
    }

    // Third way
    cout<<"Third Way: \n";
    for(auto i : v3)
    {
        cout<<i<<"\n";
    }

    // Fourth way
    cout<<"Fourth Way: \n";
    for(int i=0; i<v3.size(); i++)
    {
        cout<<v3[i]<<"\n";
    }

    // Use of erase function.
    vector<int> v4 = {13,14,15,16,17,18,19,20,21,22,23,24};

    // erase the first element of vector v4
    v4.erase(v4.begin());
    // now the vector v4 = {14,15,16,17,18,19,20,21,22,23,24};

    // erase 16 from vector v4
    v4.erase(v4.begin()+2);
    // now the vector v4 = {14,15,17,18,19,20,21,22,23,24};

    // erase a range of elements from vector v4. let's erase 18 to 22 from vector v4.
    v4.erase(v4.begin()+3, v4.begin()+8);
    // now the vector v4 = {14,15,17,23,24};


    // Use of Insert function
    vector<int> v5 = {31,32,33,34};
    // insert 600 as the first element of v5
    v5.insert(v5.begin(), 600);  // v5 = {600,31,32,33,34};
    // insert 800 three times after 31 or from index number 2
    v5.insert(v5.begin()+2, 3, 800); // v5 = {600,31,800,800,800,32,33,34};

    // Copy an entire vector to another
    vector<int> v6 = {41,42};
    // copy the vector v6 to v5 at the beginning of v5.
    v5.insert(v5.begin(), v6.begin(), v6.end());  // v5 = {41,42,600,31,800,800,800,32,33,34};

    // how to know the size of vector.
    cout<<v5.size()<<"\n"; //it return 10.

    // remove the last element of vector v5.
    v5.pop_back(); // v5 = {41,42,600,31,800,800,800,32,33};

    v5.clear(); // erase the entire vector

    // use to check a vector is empty or not.
    // if empty then return true else return false
    cout<< v5.empty()<<"\n"; // print 1 that means true

    // swap vector
    vector<int> v7 = {51,52};
    vector<int> v8 = {61,62};

    // swap vector v7 and v8
    v7.swap(v8);  // v7 = {61,62},   v8 = {51, 52}
}

void explainList()
{
    list<int> ls;

    ls.push_back(2); //{2}
    ls.emplace_back(4); // {2,4}
    // in list you also can push and pop at the front. vector can't do it.
    ls.push_front(6); // {6,2,4}
    ls.pop_front();   // {2,4}
    ls.pop_back();    //  {2}

    // Rest function same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap

    // we will prefer list whenever we need to push or pop on front.
    // otherwise we will prefer vector. because time complexity of list
    // higher than vector.
}

void explainDeque()
{
    deque<int> dq;

    dq.push_back(5); // {5}
    dq.emplace_back(10); // {5,10}
    dq.push_front(15);   // {15,5,10}
    dq.emplace_front(20); // {20,15,5,10}

    dq.pop_back(); // {20,15,5}
    dq.pop_front(); // {15,5}

    cout<<dq.back()<<"\n"; // print 5
    cout<<dq.front()<<"\n"; // print 15

    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

void explainStack()
{
    // Stack Also known as LIFO(last in first out).
    stack<int> st;

    st.push(1);  // {1}
    st.push(2);  // {2,1}
    st.push(3);  // {3,2,1}
    st.push(4);  // {4,3,2,1}
    st.emplace(5); // {5,4,3,2,1}

    cout<<st.top()<<"\n";  // print 5. **** st[2] is invalid in stack. ***
    // for accessing element stack does not allow indexing like st[0],st[1]....
    // it's only allow to access the topmost element by top() function.

    st.pop(); // {4,3,2,1}

    cout<<st.top()<<"\n";  // print 4
    cout<<st.size()<<"\n"; // print 4
    cout<<st.empty()<<"\n"; // print 0 that means false

    // swap stack;
    stack<int> st1,st2;
    st1.swap(st2);

    // stack has limited function. it does not use iterator, begin(), end() etc.
}

void explainQueue()
{
    // Queue also known as FIFO(first in first out).
    // queue is similar to stack ,it has limited functionality
    // it is dynamic in size
    queue<int> q;

    q.push(1); // {1}
    q.push(2); // {1,2}
    q.push(3); // {1,2,3}
    q.emplace(4); // {1,2,3,4}

    cout<<q.back()<<"\n"; // print 4
    q.back() += 5; // now q = {1,2,3,9}
    cout<<q.back()<<"\n"; // print 9

    cout<<q.front()<<"\n"; // print 1
    q.pop(); // {2,3,9}
    cout<<q.front()<<"\n"; // print 2

    // size(), swap(), empty() same as stack.
    // we can't use top() at queue.
}

void explainPriority_Queue()
{
    // it's not exactly queue. it is combination of stack and queue.
    // it is dynamic in size
    // priority queue stored element in a sorted fashion.
    // by default it stored element in descending order.
    priority_queue<int> pq;

    pq.push(1); // {1}
    pq.push(7); // {7,1}
    pq.push(5); // {7,5,1}
    pq.push(3); // {7,5,3,1}
    pq.emplace(6); // {7,6,5,3,1}

    cout<<pq.top()<<"\n"; // print 7

    pq.pop(); // {6,5,3,1}
    cout<<pq.top()<<"\n"; // print 6

    // Minimum Heap.
    // we can make a priority queue which stored element in ascending order.
    priority_queue<int, vector<int>, greater<int>> pq1;

    pq1.push(1); // {1}
    pq1.push(7); // {1,7}
    pq1.push(5); // {1,5,7}
    pq1.push(3); // {1,3,5,7}
    pq1.emplace(6); // {1,3,5,6,7}

    cout<<pq1.top()<<"\n"; // print 1

    pq1.pop(); // {3,5,6,7}
    cout<<pq1.top()<<"\n"; // print 3

    // size(), swap(), empty() same as others.

}
int main()
{
    //=============================
    //     PAIR
    //=============================
    explainPair();

    //=============================
    //     VECTOR
    //=============================
    explainVector();

    //=============================
    //     LIST
    //=============================
    explainList();

    //=============================
    //     DEQUE
    //=============================
    explainDeque();

    //=============================
    //     STACK
    //=============================
    explainStack();

    //=============================
    //     QUEUE
    //=============================
    explainQueue();

    //=============================
    //     PRIORITY_QUEUE
    //=============================
    explainPriority_Queue();




    return 0;


}

