// Stl1_algo.cpp

#include<iostream>
#include<vector>
#include<algorithm>

int main(){


    vector<int> coll;
    vector<int>::iterator pos;

    // insert elements from 1 to 6 in arbitrary

    coll.push_back(2);
    coll.push_back(5);
    coll.push_back(4);
    coll.push_back(1);
    coll.push_back(6);
    coll.push_back(3);

    // find and print minimum & maximum elements

    pos = min_element (coll.begin(),coll.end());
    cout << "min: " << *pos << endl;
    pos = max_element (coll.begin(),coll.end());
    cout << "max: " << *pos << endl;

    // sort all elements
    sort(coll.begin(), coll.end());
    // find first element with value 3
    pos = find (coll.begin(),coll.end(),3);
    // reverse the order of element with value 3
    reverse(pos, coll.end());

    // print all elements
    for (pos = coll.begin(); pos!=col.end(); ++pos){

        cout << *pos << ' ';
    }


    }

    cout << endl;