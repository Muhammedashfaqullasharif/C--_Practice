// stl/ rem_elements.cpp

#include<iostream>
#include<list>
#include<algorithms>

using namespace std;
int main(){


    list<int> coll;
    
    // insert elements from 6 to 1 and 1 to 6

    for (int i=1; i<=6; ++i)
{
    coll.push_front(i);
    coll.push_back(i);
}    

// peint all elemeents of the collection

cout << "pre: ";

copy (coll.begin(), coll.end(),ostream_iterator<int> (cout, "  "));
cout << endl;

// remove all elements of value 3
remove (coll.begin(), coll.end(),3);
// print all elements of the collection
cout << "post: ";
copy (coll.begin(), coll.end(), ostream_iterator<int> (cout," "));
cout << endl;
    
    
    }