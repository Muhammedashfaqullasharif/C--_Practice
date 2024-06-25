// stl / find1.cpp
#include<iostream>
#include<list>
#include<algorithm>

using  namespace std; 

int  main()
{
    list<int>coll;
    list<int>iterator_pos;

    // insert elements from 20 to 40
    for (int i = 20; i<=40; ++i)
    {
        coll.push_back(i);
    
    }
    // find position of element with value 3
    pos = find (coll.begin(),coll.end(),3);

    //reverse the order of elements between found and end element

    reverse (pos, coll.end());
    // find positions of values 25 and 35
    list<int>::iterator pos25, pos35;
    pos25 = find(coll.begin(),coll.end(),25);
    pos35 =  find(coll.begin(),coll.end(),35);

    cout << "max: "<< *max_element (pos25,pos35) << endl;
    cout << "max: " << *max_element (pos25, ++pos35) << endl;

}   