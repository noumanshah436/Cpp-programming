// C++ program to implement the
// deep copy
#include <iostream>
using namespace std;

// Box Class
class box {
private:
	int length;
	int* breadth;
	int height;

public:
	// Constructor
	box()
	{
		breadth = new int;
	}

	// Function to set the dimensions
	// of the Box
	void set_dimension(int len, int brea, int heig)
	{
		length = len;
		*breadth = brea;
		height = heig;
	}

	// Function to show the dimensions
	// of the Box
	void show_data()
	{
		cout << " Length = " << length
			<< ", Breadth = " << *breadth
			<< ", Height = " << height
			<< endl;
	}

	// Parameterized Constructors for
	// for implementing deep copy
	box(box & sample)
	{
		cout<<"box(box & sample)" << endl;
		length = sample.length;
		breadth = new int;
		*breadth = *(sample.breadth);
		height = sample.height;
	}

	// Destructors
	~box()
	{
		delete breadth;
	}
};

// Driver Code
int main()
{
	// Object of class first
	box first;

	// Set the dimensions
	first.set_dimension(12, 14, 16);

	// Display the dimensions
	first.show_data();

	// When the data will be copied then
	// all the resources will also get
	// allocated to the new object
	box second = first;

	// Display the dimensions
	second.show_data();

	return 0;
}

/*
In Deep copy, an object is created by copying data of all variables and it also allocates similar memory resources with the same value to the object. In order to perform Deep copy, we need to explicitly define the copy constructor and assign dynamic memory as well if required. Also, it is required to dynamically allocate memory to the variables in the other constructors, as well.


*/