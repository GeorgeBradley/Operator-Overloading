#pragma 
#include <cstring>
#include <iostream>
class MyString
{
private:
	char* str;

public:
	MyString(); //No args constructor
	MyString(const char *s);//One Args constructor
	MyString(const MyString& source);//Deep copy constructor
	~MyString();//Destructor
	void Display() const; //Member function of MyString class
	int Get_Length() const;
	const char* Get_Str() const;


};

