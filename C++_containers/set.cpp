// stl1/set.cpp
#include<iostream>
#include<set>

int main()
{
        // type of the collection
        typedef std::set<int> intset;           // to use mutiset: typedef multiset<int> intset
        intset coll;        // set container for int values

         /* insert elements from 1 to 6 in arbitrary order
         - value 1 gets inserted twice

        */

        coll.insert(3);
        coll.insert(1);
        coll.insert(5);
        coll.insert(4);
        coll.insert(1);
        coll.insert(6);
        coll.insert(2);


        /*
        print all elements
        - iterate over all elements
        
        
        **/

       intset::const_iterator pos;
       for (pos  = coll.begin(); pos != coll.end(); ++pos)
       {
        /* code */
            std::cout << *pos << ' ';
       }
            std::cout << std::endl;


       }
       
}