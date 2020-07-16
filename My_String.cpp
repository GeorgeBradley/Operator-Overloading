#include "My_String.h"
#include <string>
MyString::MyString()
	:str(nullptr) 
{
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
MyString::MyString(MyString&& source) 
	:str (source.str)
{
	source.str = nullptr;
	std::cout << "Move constructor used" << std::endl;

}
//Copy Constructor
MyString::MyString(const MyString& source) 
	:str(nullptr)
{
	str = new char[std::strlen(source.str) + 1];
	std::strcpy(str, source.str);
}

MyString::~MyString() 
{
	if (str == nullptr) {
		std::cout << "Calling destructor for MyString : nullptr" << std::endl;
	}
	else {
		std::cout << "Calling destructor for MyString : " << str << std::endl;
	}
	delete [] str;
}
//Copy assignment
MyString& MyString::operator=(const MyString& rhs) {
	std::cout << "Copy assignment." << std::endl;
	//Ensure it's not assigning to itself
	if (this == &rhs) {
		return *this;
	}
	delete[] this->str;
	str = new char[std::strlen(rhs.str) + 1];
	std::strcpy(this->str, rhs.str);
	return *this;
}
//Move assignment
MyString& MyString::operator=(MyString&& rhs) 
{
	std::cout << "Move assignment for " << str << std::endl;
	if (this == &rhs) {
		return *this;
	}
	else {
		delete[] str;
		this->str = rhs.str;
		rhs.str = nullptr;
		return *this;
	}
	
}
void MyString::Display() const 
{
	std::cout << str << " : " << Get_Length() << std::endl;
}

int MyString::Get_Length()const
{
	return std::strlen(str);
}

const char* MyString::Get_Str() const 
{
	return str;
}
//Overloaded insertion operator
std::ostream& operator<<(std::ostream& os, const MyString& rhs) 
{
	os << rhs.str;
	return os;

}
//Overloaded extration operator
std::istream& operator>>(std::istream& in, MyString& rhs) 
{
	char* buff = new char[1000];
	in >> buff;
	rhs = MyString(buff);
	delete [] buff;
	return in;

}