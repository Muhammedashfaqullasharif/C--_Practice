

/*
Iterators are pure abstractions: Anything that behaves like an iterator is an iterator. For this reason, you can write classes that have the interface of iterators but do something (completely) different. The C++ standard library provides several predefined special iterators: iterator adapters. They are more than auxiliary classes; they give the whole concept a lot more power.

The following subsections introduce three iterator adapters:

Insert iterators 

Stream iterators 

Reverse iterators 



*/
/*
**INSERT_ITERATORS**/

// stl/ insert_iter.cpp

#include<iostream>
#include<vextor>
#include<list>
#include<deque>
#include<set>
#include<algorithm>

using namespace std;

int main()
{

    list<int>coll1;
    // insert elements from 1 to 9 into the first collection
    for(int i = 1; i<=9; ++i)
    coll1.push_back(i);
}

// copy the elements of coll1 into coll2 by appending them

vector<int>coll2;
copy (coll1.begin(),coll1.end(),back_inserter(coll2));

// copy the elements of coll1 into thecoll3 by inserting themm at the font
// - reverses the order of the elements

deque<int>coll3;
copy (coll1.begin(),coll1.end(),front_inserter(coll3));

// copy elements of collq into coll4
set<int>coll4;
copy (coll1.begin(),coll1.end(),insert(coll4,coll4.begin()));


// THIS EXAMPLE USES ALL THREE PRE DEFINED INSERT ITERATORS







