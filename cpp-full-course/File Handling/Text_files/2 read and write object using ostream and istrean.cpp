#include <iostream>
#include<fstream>

using namespace std;

struct Student
{
	int roll;
	char name[100];
	float cgpa;
};

ostream& operator <<(ostream& out, Student& s)
{
	out << s.roll << "\n";
	out << s.name << "\n";
	out << s.cgpa << "\n";

	return out;
}

istream & operator >>(istream& in, Student& s)
{

	//cout << "enter roll no:";
	in >> s.roll;
   
	// as cin stops on \n  (enter), cin.getline read it and stops reading hence do not take any input
	in.ignore();


	//cout << "enter name:";
	in.getline(s.name, 100);  
	// cin.getline readsan entire line including leading and embedded char and stops on \n

	//cout << "enter cgpa:";
	in >> s.cgpa;

	return in;
}


int main()
{

	ofstream ofs("Student_Record.txt", ios::app);
	if (!ofs.is_open())
	{
		cout << "error";
	}

	Student s;
	for (int i = 0; i < 2; i++)
	{
		cin >> s;
		ofs << s;
	}

	ofs.close();


	ifstream ifs;
	ifs.open("Student_Record.txt");
	if (!ifs.is_open())
	{
		cout << "error";
	}

	Student a;
	while (ifs >> a)
	{

		cout << a;
	}

	ifs.close();
	return 0;
}
