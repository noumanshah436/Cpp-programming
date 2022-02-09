#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

//  max(x, y)
//  min(x, y)
//  pow(x, y)
//  sqrt(x)
//  abs(x)
//  round(x)
//  ceil(x)
//  floor(x)

int main()
{
	double x;
	double y;
	double z;

	//---------------------------------------------------------------------------
	//max(x,y) returns highest of two number
	//---------------------------------------------------------------------------

	cout << "This program will enter the max of two numbers" << endl;

	cout << "Enter in number 1: ";
	cin >> x;

	cout << "Enter in number 2: ";
	cin >> y;

	z = max(x, y);

	cout << z;
	//---------------------------------------------------------------------------
	//min(x, y) returns lowest of two numbers
	//---------------------------------------------------------------------------

	cout << "This program will enter the min of two numbers" << endl;

	cout << "Enter in number 1: ";
	cin >> x;

	cout << "Enter in number 2: ";
	cin >> y;

	z = min(x, y);

	cout << z;

	//---------------------------------------------------------------------------
	// pow(x, y) returns number 1 to the power of number 2
	//---------------------------------------------------------------------------

	cout << "This program will return x ^ y" << endl;

	cout << "Enter in number 1: ";
	cin >> x;

	cout << "Enter in number 2: ";
	cin >> y;

	z = pow(x, y);

	cout << z;
	//---------------------------------------------------------------------------
	//  sqrt(x) returns the square root of a number
	//---------------------------------------------------------------------------

	cout << "This program will return square root of a #" << endl;

	cout << "Enter in the number: ";
	cin >> x;

	z = sqrt(x);

	cout << z;
	//---------------------------------------------------------------------------
	// abs(x) returns the absolute value of a number
	//---------------------------------------------------------------------------

	cout << "This program will return the absolute value of a #" << endl;

	cout << "Enter in the number: ";
	cin >> x;

	z = abs(x);

	cout << z;

	//---------------------------------------------------------------------------
	// round(x) rounds a number to the nearest whole integer
	//---------------------------------------------------------------------------

	cout << "This program will round a number to the nearest whole integer" << endl;

	cout << "Enter in the number: ";
	cin >> x;

	z = round(x);

	cout << z;
	//---------------------------------------------------------------------------
	// ceil(x) rounds a number UP to the nearest whole integer
	//---------------------------------------------------------------------------

	cout << "This program will round a number UP" << endl;

	cout << "Enter in the number: ";
	cin >> x;

	z = ceil(x);

	cout << z;

	//---------------------------------------------------------------------------
	// floor(x) rounds a number DOWN to the nearest whole integer
	//---------------------------------------------------------------------------

	cout << "This program will round a number DOWN" << endl;

	cout << "Enter in the number: ";
	cin >> x;

	z = floor(x);

	cout << z;

	cout << endl;
	return 0;
}