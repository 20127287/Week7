#include "HocSinh.h"


HocSinh::HocSinh()
{
	this->name = "";
	this->gpa = 0;
}


HocSinh::HocSinh(const HocSinh& hs)
{
	this->name = hs.name;
	this->gpa = hs.gpa;
}


HocSinh::~HocSinh()
{
	this->name = "";
	this->gpa = 0;
}


HocSinh& HocSinh::operator=(const HocSinh& hs)
{
	this->name = hs.name;
	this->gpa = hs.gpa;
	return *this;
}


bool HocSinh::operator>(const HocSinh& hs)
{
	if (this->gpa > hs.gpa)
		return true;
	return false;
}


bool HocSinh::operator<(const HocSinh& hs)
{
	if (this->gpa < hs.gpa)
		return true;
	return false;
}


bool HocSinh::operator==(const HocSinh& hs)
{
	if (this->gpa == hs.gpa)
		return true;
	return false;
}


bool HocSinh::operator!=(const HocSinh& hs)
{
	if (this->gpa != hs.gpa)
		return true;
	return false;
}


bool HocSinh::operator>=(const HocSinh& hs)
{
	if (this->gpa >= hs.gpa)
		return true;
	return false;
}


bool HocSinh::operator<=(const HocSinh& hs)
{
	if (this->gpa <= hs.gpa)
		return true;
	return false;
}


HocSinh::operator char* ()
{
	int len = this->name.length();
	char* tmp = new char[len + 1];

	for (int i = 0; i < len; i++)
		tmp[i] = this->name[i];
	tmp[len] = '\0';

	return tmp;
}


istream& operator>>(istream& is, HocSinh& hs)
{
	cout << "Enter student name: ";
	getline(is, hs.name);

GPA:
	cout << "Enter GPA: ";
	is >> hs.gpa;
	if (hs.gpa < 0 || hs.gpa > 4) {
		cout << "0 <= GPA <= 4. Please try again!\n\n";
		goto GPA;
	}

	return is;
}


ostream& operator<<(ostream& os, const HocSinh& hs)
{
	os << "Name: " << hs.name << endl;
	os << "GPA: " << hs.gpa << endl;
	return os;
}