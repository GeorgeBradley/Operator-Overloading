// Operator Overloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "My_String.h" //Including the file name that contains the class "MyString"
int main()
{
    //This tests the move assignmetn operator
    //MyString EmptyString; //Will call the no args constructor
    //MyString George("George");
    //MyString GeorgeCopy = George;
    //EmptyString = George;
    //EmptyString = MyString("Jack");
    //EmptyString.Display();
    //George.Display();
    //GeorgeCopy.Display();

    MyString George("George");
    MyString Simon("Simon");
    MyString Bob;

    std::cout << "Enter Bob's name: ";
    std::cin >> Bob;
    std::cout << "The three MyString objects are called: ";
    std::cout << George << ", " << Simon << " and " << Bob << std::endl;
    return 0;

}


