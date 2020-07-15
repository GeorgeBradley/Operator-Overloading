// Operator Overloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "My_String.h" //Including the file name that contains the class "MyString"
int main()
{
    MyString EmptyString; //Will call the no args constructor
    MyString George("George");
    MyString GeorgeCopy = George;
    EmptyString = George;

    EmptyString.Display();
    George.Display();
    GeorgeCopy.Display();

    return 0;

}


