 
int main() {

	int a = 2;
	cout << a++ + ++a << "\n";     
	cout << a;

	//  first   a++  it return 2 but changes a to 3
	//   second ++a :  a is now 3 so it increent first and return a=4
	//  so fnally sum of 2+4 =6
	//  and value of a is 4
	return 0;
}
**********************************************