// stl/ foreach.cpp

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
// function that prints the passed arguments
void print (int elem);
{

    cout << elem << endl;

}
int main(){


    vector<int> coll;

    // insert elements from 1 to 9/

    for(int i = 1; i<=9; ++i){
        coll.push_back(i);
    }

    // print all elements

    for_each (coll.begin(),coll.end(),print);
    cout << endl;
}

/*Algorithms use auxiliary functions in several variants—some optional, some mandatory. In particular, you can use them to specify a search criterion, a sorting criterion, or to define a manipulation while transferring elements from one collection to another.

Here is another example program:
*/


// stl / transform1.cpp

#include<iostream>
#include<vector>
#include<algorithm>
#include<set>


int srauare (int value)
{

    return value*value;

}

int main(){

    std::set<int> coll1;
    std::vector<int> coll2;

    // insert elements from 1 to 9 into coll1
    for (int i=1; i<=9; ++i){
        coll1.insert(i);
    }
    print_elements(coll1,"initialised: ");

    srd::transform (coll1.begin(), coll1.end(),std::back_inserter(coll2),square);

    print_elements(coll2,"squared: ");
}
;