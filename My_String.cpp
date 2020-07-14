#include "My_String.h"

MyString::MyString()
	:str(nullptr) {
	str = new char[1];
	*str = '\0';
}
//Overloading constructor which expects one argument
MyString::MyString(const char* s)
	: str(nullptr)
{
	if (s == nullptr)
	{
		str = new char[1];
		*str = '\0';
	}
	else 
	{
		str = new char[std::strlen(s) + 1];
		std::strcpy(str, s);

	}
}
//Copy Constructor

MyString::MyString(const MyString& source) 
	:str(nullptr)
{
	str = new char[std::strlen(source.str) + 1];
	std::strcpy(str, source.str);
}