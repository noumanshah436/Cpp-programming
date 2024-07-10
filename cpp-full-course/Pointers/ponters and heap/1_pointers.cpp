#include <iostream>
 
using namespace std;


int a[5];

int* f() {

	a[0] = 1;
	a[1] = 100;
	return a;
}
int main() {

	//cout << *(f() + 1);    //  100
	cout << (f())[0];			// 1
	 
	return 0;
} 