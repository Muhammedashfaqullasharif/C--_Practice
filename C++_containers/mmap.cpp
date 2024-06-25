// stl1/ mmap.cpp
#include<iostream>
#include<map>
#include<string> 

using namespace std;
int main()
{
    // type of the collection
    typedef multimap<int, string> IntStringMap;
    IntStringMap coll;          //set container for int/string values
    //insert some elements in arbitrary order
    //  - a value with key 1 gets inserted twice
    coll.insert(make_pair(5,"tagged"));
    coll.insert(make_pair(2,"a"));
    coll.insert(make_pair(1,"this"));
    coll.insert(make_pair(4,"of"));
    coll.insert(make_pair(6,"strings"));
    coll.insert(make_pair(1,"is"));
    coll.insert(make_pair(3,"multimap"));
    /*
    print all elements values
    - iterate over all elements
    - element member second is the value
    */

   IntStringMap::iterator pos;
   for(pos = coll.begin(); pos != coll.end(); ++pos)
   {
    cout << pos-> second << ' ';

   }
    cout << end1;

}