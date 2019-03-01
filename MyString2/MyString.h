#pragma once
#include <string>
#include <iostream>
using namespace std;

class MyString;
ostream & operator << (ostream & OS, const MyString & S); // cout overload operator

class MyString {
private:
	char *str;
public:
	MyString(); // Default constructor
	~MyString(); // Deconstructor
	MyString(const char *input); // Constructor for params entered
	MyString(const MyString& S); // Copy constructor
	
	/*
	return const pointer to str
	Params: none
	Returns: str
	*/
	const char *c_str() const
	{
		return str;
	}

	MyString& operator = (const MyString& S);// Assigns the value one class to the value of another
	friend  bool operator ==(const MyString& S1, const MyString & S2);// checks if both strings are equal
	friend MyString operator + (const MyString& S1, const MyString & S2);// add the strings of two classes together

	
};

// MyString class declaration goes here