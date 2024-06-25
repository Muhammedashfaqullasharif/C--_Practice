/*
The following example creates an empty list of characters, inserts all characters from 'a' to 'z', 
and prints all elements by using a loop that actually prints and removes the first element of the collection:

*/
// stl/lists.cpp
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<char>coll;     // initialize a container list of char type.
    for (char c ='a'; c<+'z'; ++c){
        coll.push_back(c);
    }
    while (! coll.empty(){
        cout << coll.front() << ' ';
        coll.pop_front();
    }
    
        

}
