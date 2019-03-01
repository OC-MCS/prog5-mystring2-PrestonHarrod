// main goes in this file
#include <iostream>
#include "MyString.h"
#include <string>
using namespace std;
void display(MyString & other);
MyString test();
int main()
{

	/*
	
	*/
	MyString s1;
	MyString s2("billy");
	MyString s3(s2);
	char a[] = "hello";
	MyString s4(a);

	s1 = s2 = s3;
	cout << "s3:" << s3 << endl;
	s1 = s1;
	cout << "s1: " << s1 << endl;
	s1 = "jimmy";
	cout << "s1: " << s1 << endl;

	if (s1 == s2)
	{
		cout << "matching" << endl;
	}
	else {
		cout << "not matching" << endl;
	}

	cout << "Before assignment: " << endl;
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	s1 = s2;
	cout << "After assignment: " << endl;
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;

	MyString s5;

	s5 = s1 + s2;
	cout << "c5: " << s5 << endl;

	display(s5);

	MyString s = test();
	cout << s << endl;
}

void display(MyString & other)
{
	cout << other << endl;
}

MyString test()
{
	MyString s("Passed from function test");
	return s;
}
