#include <iostream>
#include<fstream>
#include <errno.h>

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


// update record
int main()
{

	ifstream ifs;
	ifs.open("Student_Record.txt");

	Student s1;
	Student s = { 13,"nomi", 3.7 }; 


	ofstream ofs;
	ofs.open("temp.txt", ios::app);

	while (ifs >> s1)
	{

		if (s1.roll == 3)  //  update record with roll number 3
		{
			ofs << s;
		}
		else
		{
			ofs << s1;
		}
	}

	ifs.close();
	ofs.close();

	remove("Student_Record.txt");
	rename("temp.txt", "Student_Record.txt");


	return 0;
}
