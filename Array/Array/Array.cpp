#include "Array.h"


Array::Array()
{
	this->size = 0;
	this->data = nullptr;
}


Array::Array(int size)
{
	if (size <= 0) {
		this->size = 0;
		this->data = nullptr;
		return;
	}

	this->size = size;
	this->data = new int[this->size];

	for (int i = 0; i < this->size; i++)
		this->data[i] = 0;
}


Array::Array(int a[], int size)
{
	if (size <= 0) {
		this->size = 0;
		this->data = nullptr;
		return;
	}

	this->size = size;
	this->data = new int[this->size];

	for (int i = 0; i < this->size; i++)
		this->data[i] = a[i];
}


Array::Array(const Array& a)
{
	this->size = a.size;
	this->data = new int[this->size];

	for (int i = 0; i < this->size; i++)
		this->data[i] = a.data[i];
}


Array::~Array()
{
	if (this->size > 0) {
		this->size = 0;
		delete[] this->data;
		this->data = nullptr;
	}
}


Array& Array::operator=(const Array& a)
{
	delete[] this->data;

	this->size = a.size;
	this->data = new int[this->size];

	for (int i = 0; i < this->size; i++)
		this->data[i] = a.data[i];

	return *this;
}


int& Array::operator[](int index)
{
	if (index >= 0 && index < this->size)
		return this->data[index];
}


Array::operator int* ()
{
	int* tmp = new int[this->size];

	for (int i = 0; i < this->size; i++)
		tmp[i] = this->data[i];

	return tmp;
}


int Array::getSize() const
{
	return this->size;
}


istream& operator>>(istream& is, Array& a)
{
	delete[] a.data;

Size:
	cout << "Enter array size: ";
	is >> a.size;
	if (a.size < 0) {
		cout << "Array size must greater than or equal to 0. Please try again!\n\n";
		goto Size;
	}

	a.data = new int[a.size];

	for (int i = 0; i < a.size; i++) {
		cout << "a[" << i << "] = ";
		is >> a[i];
	}

	return is;
}


ostream& operator<<(ostream& os, Array a)
{
	for (int i = 0; i < a.size; i++)
		os << a[i] << " ";
	return os;
}