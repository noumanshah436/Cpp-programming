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

//store record in file and then display it by fstream object 
//  the point is that we have to control filepointer after writing to file 
// i.e to read from file we have to take file pointer at the begining

int main()
{

	fstream fs("Student_Record.txt", ios::in | ios::app);     // for app , no need to write out
	if (!fs.is_open())
	{
		cout << "error";
	}

	Student s;
	for (int i = 0; i < 2; i++)   //   input 2 records and write to file
	{
		cin >> s;   // input from keyboard
		fs << s;   //  write to file
	}

	fs.seekg(0, ios::beg);

	Student a;
	while (fs >> a)
	{
		cout << a;  // dispay on screen
	}

	fs.close();

	return 0;
}