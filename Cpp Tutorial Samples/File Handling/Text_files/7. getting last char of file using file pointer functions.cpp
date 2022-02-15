#include <iostream>
#include<fstream> 

using namespace std;



// file pointers
int main()
{

	ofstream ofs;
	ofs.open("file.txt");
	ofs << "hello how are you";  // 17 char
	ofs.close();

	ifstream ifs;
	ifs.open("file.txt");
	char ch;
	
	//  file indexing start from 0
	ifs.seekg(0, ios::end);
	cout << ifs.tellg() << endl;    //  17 , 

	ifs.seekg(-1, ios::end);         // we move 1 char back because of end of file character             
	cout << ifs.tellg() << endl;     //   16
	ifs >> ch;
	cout << ch;			 //  u
	ifs.close();
	return 0;
}
