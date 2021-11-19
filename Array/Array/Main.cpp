#include <cstdlib>
#include "Array.h"
#include "HocSinh.h"


void mainMenu();
void arr();
void hs();

int main()
{
	int choice;

	while (1) {
		system("cls");
		mainMenu();
		cout << "\nEnter your choice: ";
		cin >> choice;
		system("cls");

		switch (choice) {
		case 1:
			arr();
			break;


		case 2:
			hs();
			break;


		case 0:
			goto Exit;


		default:
			cout << "This choice is not available. Please try again!" << endl << endl;
			system("pause");
		}
	}

Exit:
	cout << "\n\t\t\t==================================================================="
		<< "\n\t\t\t\t\t*** THANK YOU! SEE YOU LATER! ***\n\n";

	return 0;
}


void mainMenu()
{
	cout << "\t\t\t\t***********************************************************\n"
		<< "\t\t\t\t***\t\t       - MAIN MENU -\t\t\t***\n"
		<< "\t\t\t\t***********************************************************\n"
		<< "\t\t\t\t*\t\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t* [1]. A program performing Array\t\t\t  *\n"
		<< "\t\t\t\t*\t\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t* [2]. A program performing HocSinh\t\t\t  *\n"
		<< "\t\t\t\t*\t\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t* [0]. Exit\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t*\t\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t***********************************************************\n";
}
//******************************************************************************************************************


void ArrayMenu()
{
	cout << "\t\t\t\t***********************************************************\n"
		<< "\t\t\t\t***\t\t       - ARRAY MENU -\t\t\t***\n"
		<< "\t\t\t\t***********************************************************\n"
		<< "\t\t\t\t*\t\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t* [1]. Default constructor\t\t\t\t  *\n"
		<< "\t\t\t\t*\t\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t* [2]. Constructor with given size\t\t\t  *\n"
		<< "\t\t\t\t*\t\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t* [3]. Constructor from int[] with given size\t\t  *\n"
		<< "\t\t\t\t*\t\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t* [4]. Assignment operator =\t\t\t\t  *\n"
		<< "\t\t\t\t*\t\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t* [5]. Bracket operator []\t\t\t\t  *\n"
		<< "\t\t\t\t*\t\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t* [6]. Type casting operator (int*)\t\t\t  *\n"
		<< "\t\t\t\t*\t\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t* [0]. Back\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t*\t\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t***********************************************************\n";
}


void arr()
{
	int choice;

	while (1) {
		system("cls");
		ArrayMenu();
		cout << endl << endl;

		cout << "Enter your choice: ";
		cin >> choice;
		cout << endl;

		system("cls");
		switch (choice) {
		case 1: {
			Array a;
			cout << "Enter array a:\n";
			cin >> a;
			cout << "\na = " << a << endl << endl;

			break;
		}


		case 2: {
			int size;

			do {
				cout << "Enter size of Array a: ";
				cin >> size;
				if (size < 0)
					cout << "Array size must greater than or equal to 0. Please try again!\n\n";
			} while (size < 0);

			Array a(size);

			for (int i = 0; i < size; i++) {
				cout << "a[" << i << "] = ";
				cin >> a[i];
			}

			cout << "\na = " << a << endl << endl;

			break;
		}


		case 3: {
			int size;
			do {
				cout << "Enter size of array b: ";
				cin >> size;
				if (size < 0)
					cout << "Array size must greater than or equal to 0. Please try again!\n\n";
			} while (size < 0);

			int* b = new int[size];
			cout << "Enter array b:\n";
			for (int i = 0; i < size; i++) {
				cout << "b[" << i << "] = ";
				cin >> b[i];
			}

			Array a(b, size);
			cout << "\nArray a(b, size);\n"
				<< "=> a = " << a << endl << endl;

			break;
		}


		case 4: {
			Array a;
			cout << "Enter array a:\n";
			cin >> a;

			Array b = a;
			cout << "\nArray b = a;\n"
				<< "=> b = " << b << endl << endl;

			break;
		}


		case 5: {
			Array a;
			cout << "Enter array a:\n";
			cin >> a;
			cout << "\na = " << a << endl << endl;
			
			int i;
			cout << "Enter index: ";
			cin >> i;
			if (i < 0 || i >= a.getSize())
				cout << "\na[" << i << "] = N/A" << endl << endl;
			else
				cout << "\na[" << i << "] = " << a[i] << endl << endl;

			break;
		}


		case 6: {
			Array a;
			cout << "Enter array a:\n";
			cin >> a;
			cout << "\na = " << a << endl << endl;

			int* b = a;
			cout << "int* b = a;\n"
				<< "=> b = ";
			for (int i = 0; i < a.getSize(); i++)
				cout << b[i] << " ";
			cout << endl << endl;

			break;
		}


		case 0:
			goto Exit;


		default:
			cout << "This choice is not available. Please try again!" << endl << endl;

		}
		system("pause");
	}

Exit:
	return;
}
//******************************************************************************************************************


void HocSinhMenu()
{
	cout << "\t\t\t\t***********************************************************\n"
		<< "\t\t\t\t***\t\t     - HOCSINH MENU -\t\t\t***\n"
		<< "\t\t\t\t***********************************************************\n"
		<< "\t\t\t\t*\t\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t* [1]. Default constructor\t\t\t\t  *\n"
		<< "\t\t\t\t*\t\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t* [2]. Constructor from another HocSinh object\t\t  *\n"
		<< "\t\t\t\t*\t\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t* [3]. Assignment operator =\t\t\t\t  *\n"
		<< "\t\t\t\t*\t\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t* [4]. Comparison operator GPA\t\t\t\t  *\n"
		<< "\t\t\t\t*\t\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t* [5]. Type-casting operator (char*)\t\t\t  *\n"
		<< "\t\t\t\t*\t\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t* [0]. Back\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t*\t\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t***********************************************************\n";
}

void gpa();

void hs()
{
	int choice;

	while (1) {
		system("cls");
		HocSinhMenu();
		cout << endl << endl;

		cout << "Enter your choice: ";
		cin >> choice;
		cout << endl;

		system("cls");
		switch (choice) {
		case 1: {
			HocSinh hs;
			cout << "Enter HocSinh hs:\n";
			cin.ignore() >> hs;
			cout << "\nhs:\n" << hs << endl << endl;

			system("pause");
			break;
		}


		case 2: {
			HocSinh hs1;
			cout << "Enter HocSinh hs1:\n";
			cin.ignore() >> hs1;
			cout << "\nhs1:\n" << hs1 << endl << endl;

			HocSinh hs2(hs1);
			cout << "HocSinh hs2(hs1);\n"
				<< "=> hs2:\n" << hs2 << endl << endl;

			system("pause");
			break;
		}


		case 3: {
			HocSinh hs1;
			cout << "Enter HocSinh hs1:\n";
			cin.ignore() >> hs1;
			cout << "\nhs1:\n" << hs1 << endl << endl;

			HocSinh hs2;
			cout << "Enter HocSinh hs2:\n";
			cin.ignore() >> hs2;
			cout << "\nhs2:\n" << hs2 << endl << endl;

			hs2 = hs1;
			cout << "hs2 = hs1;\n"
				<< "=> hs2:\n" << hs2 << endl << endl;

			system("pause");
			break;
		}


		case 4: {
			gpa();
			break;
		}


		case 5: {
			HocSinh hs;
			cout << "Enter HocSinh hs:\n";
			cin.ignore() >> hs;
			cout << "\nhs:\n" << hs << endl << endl;

			char* s = hs;
			cout << "char* s = hs;\n"
				<< "=> s = " << s << endl << endl;

			system("pause");
			break;
		}


		case 0:
			goto Exit;


		default:
			cout << "This choice is not available. Please try again!" << endl << endl;
			system("pause");
		}
	}

Exit:
	return;
}
//******************************************************************************************************************


void GPA_Menu()
{
	cout << "\t\t\t\t***********************************************************\n"
		<< "\t\t\t\t***\t\t  - GPA COMPARISON MENU -\t\t***\n"
		<< "\t\t\t\t***********************************************************\n"
		<< "\t\t\t\t*\t\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t* [1]. Input student\t\t\t\t\t  *\n"
		<< "\t\t\t\t*\t\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t* [2]. Comparison operator GPA >\t\t\t  *\n"
		<< "\t\t\t\t*\t\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t* [3]. Comparison operator GPA <\t\t\t  *\n"
		<< "\t\t\t\t*\t\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t* [4]. Comparison operator GPA ==\t\t\t  *\n"
		<< "\t\t\t\t*\t\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t* [5]. Comparison operator GPA !=\t\t\t  *\n"
		<< "\t\t\t\t*\t\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t* [6]. Comparison operator GPA >=\t\t\t  *\n"
		<< "\t\t\t\t*\t\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t* [7]. Comparison operator GPA <=\t\t\t  *\n"
		<< "\t\t\t\t*\t\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t* [0]. Back\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t*\t\t\t\t\t\t\t  *\n"
		<< "\t\t\t\t***********************************************************\n";
}


void gpa()
{
	int choice;
	HocSinh hs1, hs2;

Input:
	cout << "Enter hs1:\n";
	cin.ignore() >> hs1;
	cout << "\nEnter hs2:\n";
	cin.ignore() >> hs2;
	cout << endl << endl;
	system("pause");

	while (1) {
		system("cls");
		GPA_Menu();
		cout << endl << endl;

		cout << "Enter your choice: ";
		cin >> choice;
		cout << endl;

		system("cls");
		switch (choice) {
		case 1: {
			goto Input;
		}


		case 2: {
			cout << "hs1:\n" << hs1 << endl << endl;
			cout << "hs2:\n" << hs2 << endl << endl;

			cout << "(hs1 > hs2) ?\n";
			if (hs1 > hs2)
				cout << "=> True";
			else
				cout << "=> False";

			cout << endl << endl;
			break;
		}


		case 3: {
			cout << "hs1:\n" << hs1 << endl << endl;
			cout << "hs2:\n" << hs2 << endl << endl;

			cout << "(hs1 < hs2) ?\n";
			if (hs1 < hs2)
				cout << "=> True";
			else
				cout << "=> False";

			cout << endl << endl;
			break;
		}


		case 4: {
			cout << "hs1:\n" << hs1 << endl << endl;
			cout << "hs2:\n" << hs2 << endl << endl;

			cout << "(hs1 == hs2) ?\n";
			if (hs1 == hs2)
				cout << "=> True";
			else
				cout << "=> False";

			cout << endl << endl;
			break;
		}


		case 5: {
			cout << "hs1:\n" << hs1 << endl << endl;
			cout << "hs2:\n" << hs2 << endl << endl;

			cout << "(hs1 != hs2) ?\n";
			if (hs1 != hs2)
				cout << "=> True";
			else
				cout << "=> False";

			cout << endl << endl;
			break;
		}


		case 6: {
			cout << "hs1:\n" << hs1 << endl << endl;
			cout << "hs2:\n" << hs2 << endl << endl;

			cout << "(hs1 >= hs2) ?\n";
			if (hs1 >= hs2)
				cout << "=> True";
			else
				cout << "=> False";

			cout << endl << endl;
			break;
		}


		case 7: {
			cout << "hs1:\n" << hs1 << endl << endl;
			cout << "hs2:\n" << hs2 << endl << endl;

			cout << "(hs1 <= hs2) ?\n";
			if (hs1 <= hs2)
				cout << "=> True";
			else
				cout << "=> False";

			cout << endl << endl;
			break;
		}


		case 0:
			goto Exit;


		default:
			cout << "This choice is not available. Please try again!" << endl << endl;

		}
		system("pause");
	}

Exit:
	return;
}