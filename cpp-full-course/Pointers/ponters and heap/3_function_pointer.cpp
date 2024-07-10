#include <iostream>
 
using namespace std;

void f1()
{
	cout << "simple function\n";
}

int f2(int a)
{
	return a+1;
}

int* f3(int a)
{
	int* ptr = new int;
	*ptr = a;
	return ptr;  // return pointer of heap memory
}


int main() {

	//  function pointer syntax
	//		  return_value (*ptr)(arguments_list)   = function_name;

	void (*ptr1)() = f1;
	int (*ptr2)(int) = f2;
	int* (*ptr3)(int) = f3;


	ptr1();
	cout << ptr2(10);   //   11
	cout << "\n";


	cout << ptr3(10); //  print address of pointer
	cout << *ptr3(10);  // print value at pointer 

	return 0;
}