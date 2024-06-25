// stl / copy1.cpp

#include<iostream>
#include<vector>
#include<list>
#include<algorithm>

using namespace std;
int main()
{
    list<int> coll1;
    vector<int>coll2;
    // insert elements from 1 to 9
    for (int i = ; i<=9; ++i)
    {
        coll1.push_back(i);
    }

    // - overwrite non existing elements in the destination
    copy (coll1.begin(),coll1.end(),coll2.begin());

}