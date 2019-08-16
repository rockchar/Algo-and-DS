//
//  main.cpp
//  Structures
//
//  Created by RockChar on 13/08/19.
//  Copyright © 2019 RockChar. All rights reserved.
//
// the following will demonstrate structures.
// recall that arrays are an aggregation or collection of identically related
// objects. Structures on the other hand are a collection of not identically related
// but different objects.

#include <iostream>

// a structure is defined by the struct keyword
// we can see here that the student structure is an aggregation of
// not identically related objects
typedef struct Student {
    std::string firstName;
    std::string lastName;
    int         nStudentNum;
    float       fGrade;
   
    
} Student;


void PrintStudentInformation(Student& aStudent);
 // comparison operator
bool operator <(const Student& lhs , const Student& rhs);

//exercise solution
void ExerciseSolution();
void SwapInt(int &a, int &b);
void SwapIntPtr(int *a, int *b);
int main(int argc, const char * argv[]) {
    // insert code here...
    //the structure fields can be accessed by the . operator
    //create a local object/instance of student
    Student st;
    st.firstName = "rohit";
    st.lastName  = "kumar";
    st.nStudentNum = 1234;
    st.fGrade      = 89.99;
    PrintStudentInformation(st);
    Student st1;
    st1.firstName = "rohit";
    st1.lastName  = "kumar";
    st1.nStudentNum = 1234;
    st1.fGrade      = 90.15;
    if(st1<st)
        std::cout<<"Student marks less"<<"\n";
    else
        std::cout<<"Student marks more"<<"\n";
    return 0;
}


void PrintStudentInformation(Student& aStudent)
{
    std::cout<<"First Name : "<<aStudent.firstName<<"\n";
    //we can also access structures using pointers
    Student * structPtr = &aStudent;
    std::cout<<"Last Name : "<<structPtr->lastName<<"\n";
    //change the value using pointers
    std::cout<<"Student number before : "<<structPtr->nStudentNum<<"\n";
    structPtr->nStudentNum = 789;
    std::cout<<"Student number after : "<<structPtr->nStudentNum<<"\n";
    ExerciseSolution();
}

// Exogeneous vs indigenous data and shallow vs deep copying
// C++ allows us to define operators on structures. Let us define a comparison
// operator. Check the struct definition on the top.
bool operator <(const Student& lhs , const Student& rhs)
{
    if(lhs.fGrade<rhs.fGrade)
        return true;
    else
        return false;
}

void ExerciseSolution()
{
    int a, b;
    int * ptr = NULL;
    int ** ptrPtr = NULL;
    a = 10;
    b = 20;
    ptr = &a;
    ptrPtr=&ptr;
    std::cout<<"valur of ptr is "<<ptr<<" and value of ptrPtr is "<<ptrPtr<<"\n";
    std::cout<<"value pointed by ptr is "<<*ptr<<" and value pointed by ptrPtr is "<<*ptrPtr<<"\n";
    SwapIntPtr(&a,&b);
    std::cout<<"After swap\n";
    std::cout<<"valur of ptr is "<<ptr<<" and value of ptrPtr is "<<ptrPtr<<"\n";
    std::cout<<"value pointed by ptr is "<<*ptr<<" and value pointed by ptrPtr is "<<*ptrPtr<<"\n";
}
// swap using references
void SwapInt(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
// c style swap using pointers
void SwapIntPtr(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
