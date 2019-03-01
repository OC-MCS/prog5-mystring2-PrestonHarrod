#pragma once
#include <string>
#include <iostream>
using namespace std;

class MyString;
ostream & operator << (ostream & OS, const MyString & S);

class MyString {
private:
	char *str;
public:
	MyString(); // Default constructor
	~MyString(); // Deconstructor
	MyString(const char *input); // Constructor for params entered
	MyString(const MyString& S); // Copy constructor
	
	const char *c_str() const
	{
		return str;
	}

	MyString& operator = (const MyString& S);//if A and B are object B is "neil", the A =B therefore A is "neil"
	friend  bool operator ==(const MyString& S1, const MyString & S2);// checks if both strings are equal
	friend MyString operator + (const MyString& S1, const MyString & S2);//still buggy

	
};

// MyString class declaration goes here