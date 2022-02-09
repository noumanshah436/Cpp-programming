#include <iostream>
#include <string>
using namespace std;

int main()
{
    // pointers
    // & address-of operator
    // * dereference operator

    string name = "Bro";
    int age = 100;
    string food = "pizza";

    string *pName = &name;  // var name can be uninitialized
    int *pAge = &age;
    string *pFood = &food;

    cout << pName << endl;
    cout << pAge << endl;
    cout << pFood << endl;
    cout << endl;

    cout << *pName << endl;
    cout << *pAge << endl;
    cout << *pFood << endl;

    cout << endl;
    return 0;
}