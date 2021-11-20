#pragma once
#include <iostream>
#include <string>

using namespace std;


class HocSinh
{
private:
	string name;
	float gpa;

public:
	HocSinh();
	HocSinh(const HocSinh&);
	~HocSinh();

	HocSinh& operator=(const HocSinh&);

	bool operator>(const HocSinh&);
	bool operator<(const HocSinh&);
	bool operator==(const HocSinh&);
	bool operator!=(const HocSinh&);
	bool operator>=(const HocSinh&);
	bool operator<=(const HocSinh&);

	operator char* ();

	friend istream& operator>>(istream&, HocSinh&);
	friend ostream& operator<<(ostream&, const HocSinh&);
};