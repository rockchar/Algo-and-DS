//
//  main.cpp
//  Pointers and References
//
//  Created by RockChar on 11/08/19.
//  Copyright © 2019 RockChar. All rights reserved.
//
// the following program demostrates pointers and references
#include <iostream>

void PointerDemo();

int main(int argc, const char * argv[]) {
    // insert code here...
    PointerDemo();
    return 0;
}

/*
 Pointer syntax in c++
 
 To have a pointer point at an object we need to know the address of the
 object.
 The following code demonstrates the declaration of a pointer and basic
 things we can do with the pointers
 */

void PointerDemo()
{
    //we can declare a poiter pointing to an integer as
    int * ptr = NULL;
    //the value represented by the pointer is an address
    //so like any other integer values it is not assigned any particular
    //value at the time of declaration. So using it before it points to any
    //address can cause a crash. It is hence a good practice to initialise it
    int a = 10;
    int b = 20;
    //now we can make ptr point to a by assigning it the address or the memory
    //location where a is stored.
    ptr = &a;
    std::cout<<"Memory Address of a is "<<ptr<<"\n";
    //lets reassign ptr to point to b
    ptr = &b;
    std::cout<<"Memory Address of b is "<<ptr<<"\n";
    std::cout<<"The value of a is "<<a<<"\n";
    std::cout<<"The value of b is "<<b<<"\n";
    *ptr = 40;  //this operation is legal. here we assign the value at the memory location
                //at which variable b is stored thus changing the value.
    std::cout<<"The value of b is "<<b<<"\n";
    
    /////////////////////////////////////////////////////////////////////////////////
    // the following is a common mistake:
    //
    // int *ptr = NULL;
    // int a = 10;
    // int b = 20;
    // *ptr = a ; //illegal see that pointer is not pointing to any memory location
    // ptr = &b ;
    // *ptr = a ; //legal the value of b changes
    /////////////////////////////////////////////////////////////////////////////////
    
    
}