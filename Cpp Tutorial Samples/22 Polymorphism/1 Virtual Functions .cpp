#include<iostream>
using namespace std;

/*
https://codewithharry.com/videos/cpp-tutorials-in-hindi-56

A member function in the base class which is declared using virtual keyword is called virtual functions. 
They can be redefined in the derived class

*/
class BaseClass {
public:
    int var_base = 1;
    virtual void display() {
        cout << "1 Dispalying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass {
public:
    int var_derived = 2;
    void display() {
        cout << "2 Dispalying Base class variable var_base " << var_base << endl;
        cout << "2 Dispalying Derived class variable var_derived " << var_derived << endl;
    }
};


int main() {
    BaseClass* base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();
    // this will run the derive class display function because base class pointer is pointing to the 
    // derive class   (  polymorphism )

    // if we remove the virtal keyword of display function in base class 
    // this will now call the base class display function  ( no polymorphism )

    return 0;
}


/*

Rules of Virtual Function

Virtual functions must be members of some class.
Virtual functions cannot be static members.
They are accessed through object pointers.
They can be a friend of another class.
A virtual function must be defined in the base class, even though it is not used.
The prototypes of a virtual function of the base class and all the derived classes must be identical. If the two functions with the same name but different prototypes, C++ will consider them as the overloaded functions.
Return type of virtual function must be same otherwise it cause error
We cannot have a virtual constructor, but we can have a virtual destructor
Consider the situation when we don't use the virtual keyword.

*/