// member function implementations go in this file
#include <string>
#include <iostream>
#include "MyString.h"
using namespace std;
/*

Constructor that sets value of string to null byte
Params: none
Returns: none
*/
MyString::MyString()
{
	int len = 1;
	str = new char[len];
	str[len - 1] = '\0';
}


/*
Constructor that sets value of string to the parameter entered
Params: user string input
Returns: none
*/
MyString::MyString(const char *input)
{
	int len = strlen(input) + 1;
	str = new char[len];
	strcpy_s(str, len, input);
}


/*
Copy constructor that assigns the string of parameter entered
to the string of the instance created
Params: MyString class
Returns: None
*/
MyString::MyString(const MyString& S)
{
	int len = strlen(S.str) + 5; 
	str = new char[len];
	strcpy_s(str, len, S.str);
}


/*
Deconstructor
*/
MyString::~MyString()
{
	delete[] str;
}

/*
Overload operator for ==
Params: MyString classes
Returns: bool
*/
bool operator == (const MyString & S1, const MyString & S2)
{
	bool status = true;
	if (strlen(S1.str) != strlen(S2.str))
	{
		status = false;
	}
       
	for (int i = 0; i < strlen(S1.str); ++i)
	{
		if (toupper(S1.str[i]) != toupper(S2.str[i]))
			status = false;
	}
        
	return status;
}


/*
Overload operator for =
Params: MyString class
Returns: instance
*/
MyString& MyString::operator =(const MyString &S)
{
	if (this != &S)
	{
		delete[] str;
		str = new char[strlen(S.str) + 1];
		strcpy_s(str, strlen(S.str) + 1, S.str);
	}
	return *this;
}

/*
Overload operator for cout
Params: outstream, MyString class
Returns: outstream
*/
ostream & operator<<(ostream &OS, const MyString &S)
{
	OS << S.c_str();
	return OS;
}


/*
Overload operator for + 
Params: MyString classes
Returns: MyString class
*/
MyString operator + (const MyString& S1, const MyString & S2)
{
	int size = strlen(S1.str) + strlen(S2.str) + 1;

	MyString S3;
	delete[] S3.str;
	S3.str = new char[size];
	strcpy_s(S3.str, strlen(S1.str) + 1, S1.str);
	strcat_s(S3.str, size, S2.str);
	return S3;
}


