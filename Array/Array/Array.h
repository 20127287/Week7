#pragma once
#include <iostream>

using namespace std;


class Array
{
private:
	int* data;
	int size;

public:
	Array();
	Array(int);
	Array(int[], int);
	Array(const Array&);
	~Array();

	Array& operator=(const Array&);
	int& operator[](int);
	operator int* ();

	int getSize();

	friend istream& operator>>(istream&, Array&);
	friend ostream& operator<<(ostream&, Array);
};