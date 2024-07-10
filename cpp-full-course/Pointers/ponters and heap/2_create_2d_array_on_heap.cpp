#include <iostream>
 
using namespace std;


const int row=2, col=3;

void displayArray(int ** p, int row, int col)
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {

			cout << p[i][j] << " ";
		}
		cout << endl;

	}
}
int main() {

	int** m = new int* [row]; // create an array that store "pointer to integer" datatype value
	for (int i = 0; i < row; i++) {

		m[i] = new int[col]; // create array

		for (int j = 0; j < col; j++) {  //  taking values directly in here
			cout << "a[" << i << "][" << j << "] = ";
			cin >> m[i][j];
		}

	}


	//for (int i = 0; i < row; i++) {    //  we can skip that loop that takes input
	//	for (int j = 0; j < col; j++) {
	//		cout << "a[" << i << "][" << j <<"] = "  ;
	//		cin >> m[i][j];
	//	}

	//} 

	displayArray(m, row, col);
	

	return 0;
}





/*
#include <iostream>
 
using namespace std;


const int row=2, col=3;

 
int main() {

	int** m = new int* [row]; // create an array that store "pointer to integer" datatype value
	for (int i = 0; i < row; i++) {
		m[i] = new int[col];

	}

	for (int i = 0; i < row; i++) {    //  we can skip that loop
		for (int j = 0; j < col; j++) {
			cout << "a[" << i << "][" << j <<"] = "  ;
			cin >> m[i][j];
		}

	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {

			cout<< m[i][j]<<" ";
		}
		cout << endl;

	}

	return 0;
}

*/