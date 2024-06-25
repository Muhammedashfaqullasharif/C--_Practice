/*Here we create a static library which prints as -> "John Paul"

    To demonstrate the use of librares, and "include" to link all available libraries in a project.

        We create a function johnpaul() to print ->  "John Paul".
        But By using different source files as john.cpp & paul.cpp.
        Then including both source files into johnpaul() function.

Sourcecode: @ C++ Cookbook  
            By Jeff Cogswell, Christopher Diggins, Ryan Stephens, Jonathan Turkanis 
 

*/

johnpaul/john.cpp
#ifndef JOHN_HPP_INCLUDED
#define  JOHN_HPP_INCLUDED
void john();        // prints "john"

#endif // JOHN_HPP_INCLUDED


#include <iostream>
#include "john.hpp"

void john(){

std::cout <<"john";

}

#ifndef PAUL_HPP_INCLUDED
#define PAUL_HPP_INCLUDED

void paul( ); // Prints " Paul, "

#endif // PAUL_HPP_INCLUDED

johnpaul/paul.cpp

#include <iostream>
#include "paul.hpp"

void paul( )
{
    std::cout << "Paul, ";
}





//johnpaul/johnpaul.hpp

#ifndef JOHNPAUL_HPP_INCLUDED
#define JOHNPAUL_HPP_INCLUDED
void johnpaul();  //prints "John Paul"
#endif   // JOHNPAUL_HPP_INCLUDED


#include "john.hpp"
#include "paul.hpp"
#include "johnpaul.hpp"

void johnpaul() {

    john();
    paul();

}