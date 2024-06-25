// stl / rev_iter.cpp

// REVERSE ITERATOR EXAMOLE

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    vector<int> coll;
    // insert elements from 1 to 9
    for(int i=1; i<=9; ++i)
{


    coll.push_back(i);

}

// print all elements in reverse order
copy (coll.rbegin(),coll.rend(),ostream_iterator<int> (cout," "));
cout << endl;
}