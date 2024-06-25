// stl /ioiter.cpp

// STREAM ITERATORS


#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    vector<string> coll;
 /*read all words from the standard input
        * - source: all strings until end-of-file (or error)
        * - destination: coll (inserting)
*/

copy (istream_iterator<string>(cin),istream_iterator<string>(),back_inserter(coll));
//sort elemnts
sort (coll.begin(), coll.end);
 /*print all elements without duplicates
        * - source: coll
        * - destination: standard output (with newline between elements)
        */

unique_copy (coll.begin(),coll.ennd(),ostream_iterator<string> (cout, "\n"));
}