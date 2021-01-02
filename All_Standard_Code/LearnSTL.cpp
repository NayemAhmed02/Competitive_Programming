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

void explainSet()
{
    // set stored element in a sorted order. it sort in ascending order.
    // but it only stored unique element, it does not stored duplicate element .
    // set works in logarithmic time
    set<int> st;

    st.insert(1); // {1}
    st.insert(6); // {1,6}
    st.insert(3); // {1,3,6}
    st.insert(1); // {1,3,6}
    st.emplace(5); // {1,3,5,6}

    // begin(), end(), rbegin(), rend(), size()
    // empty() and swap() are same as others.

    // if a want to find a specific element in set i can use find()
    // {1,3,5,6}
    auto it = st.find(5); // here, it check's 5 is present or not in the set.
    // if 5 is present then it pointing 5 and return the memory location of 5. otherwise
    // it point to st.end() and return st.end() as a memory location.
    if(it != st.end())
    {
        cout<<"find\n"; // execute this one.
    }
    else{
        cout<<"Not Found\n";
    }

    it = st.find(2);
    if(it != st.end())
    {
        cout<<"find\n";
    }
    else{
        cout<<"Not Found\n"; // execute this one.
    }

    // we will also can count() function for checking an element is present or not.
    int cnt = st.count(3); // if the set contain 3 then it will return 1, else return 0.

    // erase function
    // {1,3,5,6}
    st.erase(5); // {1,3,6} // Take logarithmic time. log(n)

    it = st.find(6);
    st.erase(it); // it will erase 6. // {1,3} // it's take constant time.

    // we also can remove a range of value.
    // {1,2,3,4,6,8,9}
    auto it1 = st.find(2);
    auto it2 = st.find(6);
    st.erase(it1, it2);    // after erase { 1,6,8,9} // [first, last).

    // lower_bound() and upper_bound() function works in the same way
    // as in the vector it does.
    // the syntax is.

    auto it3 = st.lower_bound(2);
    auto it4 = st.upper_bound(2);

}

void explainMultiset()
{
    // Everything is same as set.
    // but it allows to stores duplicate element also.

    multiset<int> ms;

    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1}
    ms.emplace(3); // {1,1,1,3}
    ms.emplace(3); // {1,1,1,3,3}

    // count how many specific element present in multi set.
    int cnt1 = ms.count(1);  // cnt1 = 3 // 1 has 3 times
    int cnt2 = ms.count(3);  // cnt2 = 2 // 3 has 2 times

    // erase all specific element
    ms.erase(1); // all 1's erased. // {3,3}

    // erase only a single element
    ms.erase(ms.find(3)); // it will erase only one 3. // {3}

    // what if you want to erase more than single element but not all elements.
    //ms.erase(ms.find(1), ms.find(1)+2);  // it will erase two 1.
   // ms.erase(ms.find(1), ms.find(1)+4);  // it will erase four 1.

    // rest all functions same as set.
}

void explainUnordered_Set()
{
    unordered_set<int> ust;

    // it has exactly similar functionality to set.but
    // it doesn't stored element in sorted order like set.
    // it stored only unique element but not in sorted order

    // lower_bound() and upper_bound() functions does not work
    // rest all function are same as set.
    // it doesn't stores in particular order / sorted order.
    // it has a better complexity than set in most cases.
    // except some when collision happens.

}

void explainMap()
{
    // maps contain sorted {key, value} pair. And elements are sorted
    // in ascending order according to the key element.
    // each key element is unique and can not be changed, and key
    // element can be inserted or deleted but can not be altered.
    // value associated with keys can be altered.
    // {key, value}
    // map stored unique key element. it doesn't allow duplicate key element.
    map<int, int> mp;

    map<int, pair<int,int>> mpp1;
    map<pair<int,int>, int> mpp2;

    // key and value can be anything, int, float, double, string...

    mp[1] = 2;
    /*{
        {1,2}

      }*/
    mp.insert({5,9});
    /*{
        {1,2},
        {5,9}

      }*/
    mp.insert({2,7});
    /*{
        {1,2},
        {2,7},
        {5,9}

      }*/
    mp.insert({3,4});
    /*{
        {1,2},
        {2,7},
        {3,4},
        {5,9}

      }*/

      //mpp1.insert({3}, {4,5});
      //mpp2.insert({6,7}, {8});

      // Ways to access the map elements.

      for(auto it: mp)
      {
          cout<<it.first<<" "<<it.second<<"\n";
      }

      cout<<mp[1]<<" "<<mp[5]<<" "<<mp[2]<<"\n"; // print 2 9 7
      cout<<mp[4]<<"\n"; // print 0, since it does not exists.

      // same option for using iterators as we did in vector for the insert function.

      // use of find() function
      auto it = mp.find(5); // point to the position where key 5 is found.
      //cout<<it.second<<"\n"; // print the value of key 5 that is 9.

      it = mp.find(11); // point to the end of the map, since 11 not there.

      // lower_bound() and upper_bound() works exactly in the
      // same way as explained in the other portion.

      // this is the syntax
      auto it1 = mp.lower_bound(2);
      auto it2 = mp.upper_bound(2);

      // swap(), erase(), size(), empty() are same as above.
}

void explainMultimap()
{
    // everything same as map, only it can store multiple keys
    // only mp[key] can not be used there.
}

void explainUnordered_Map()
{
    // same as set and unordered set difference.
}

bool compr(pair<int, int>p1, pair<int, int>p2)
{
    if(p1.second < p2.second)
        return true;
    else if(p1.second == p2.second)
        if(p1.first > p2.first) return true;

    return false;
}

void explainExtra_Stuff()
{
    int arr[] = {1,6,3,8,9,3};
    int n = 6;
    int arr1[] = {1,6,3,8,9,3};
    int m = 6;

    // use of sort() function
    sort(arr, arr+n); // sort the whole array in ascending order.
    sort(arr1, arr1+m, greater<int>()); // sort the whole array in descending order.

    sort(arr+2, arr+4); // sort in a particular range.

    // sort the given pair in ascending order according
    // to the second element. if second element is same
    // then sort it according to the first element but
    // in descending order.
    pair<int,int> a[] = {{1,2},{2,1},{4,1}};

    sort(a, a+3, compr);

    // { {4,1}, {2,1}, {1,2} };

    // count number of 1.
    int num = 7;
    int cnt = __builtin_popcount(num);

    long long int num1 = 734562563;
    int cnt2 = __builtin_popcountll(num1);

    // all possible permutation
    string st = "123";

    do
    {
        cout<<st<<endl;
    } while(next_permutation(st.begin(), st.end()));

    //123
    //132
    //213
    //231
    //312
    //321

    // find the maximum element in array arr.
    int maxi = *max_element(arr,arr+6);
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

    //=============================
    //     SET
    //=============================
    explainSet();

    //=============================
    //     MULTISET
    //=============================
    explainMultiset();

    //=============================
    //     UNORDERD_SET
    //=============================
    explainUnordered_Set();

     //=============================
    //       MAP
    //=============================
    explainMap();

     //=============================
    //     MULTIMAP
    //=============================
    explainMultimap();

     //=============================
    //     UNORDERD_MAP
    //=============================
    explainUnordered_Map();

     //=============================
    //     EXTRA_STUFF
    //=============================
    explainExtra_Stuff();


    return 0;
}

