#include<iostream>
using namespace std;

/*

int add(int x, int y) {

	return x + y;
}


float add(float x, float y) {

	return x + y;
}



double add(double x, double y) {

	return x + y;
}
*/

template <typename T>   // we need to pass datatype as parameter in angle bracket  
T add(T x, T y) {

	return x + y;
}


int main() {

	//cout << add(1, 2);
	cout << add<int>(1, 2);   // we pass int ( argument to template ) , which will be replaced with T ( placeholder)
	cout << "\n";
	cout << add<float>(3.4f, 2.0f);    

	return 0;
}