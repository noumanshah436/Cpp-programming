#include<iostream>
using namespace std;
 

template <typename T, typename U>  // we need to pass types in angular brackets
U add(T x, U y) {

	return x + y; 
}


int main() {

	// when function execute,  T is replaced with int and U is replaced with double
	// this function will return double as U is replaced with double
	cout << add<int, double>(4, 5.5) << endl; 


	// when function execute,  T is replaced with double and U is replaced with int
	// this function will return int as U is replaced with double
	cout << add<double, int >(5.5, 4);
	  

	return 0;
}