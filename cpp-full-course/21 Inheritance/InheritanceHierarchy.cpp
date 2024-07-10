#include <iostream>
using namespace std;

class C {
	int x;
public:
	C() : x(0) {}
	virtual void f() = 0;
};

class D : public C {
	int y;
public:
	D() : C(), y(2) {}
	void f() {
		cout << "hello" << y;
	}
};
	
class E : public C {
	int z;
public:
	E() : C(), z(3) {}
	void f() {
		cout << "bye" << z;
	}
};
	

int main() {
//	C c1; // error: cannot declare variable ‘c1’ to be of abstract type ‘C’
//	C c2(); //error: invalid abstract return type ‘C’
	C* cp; // It is ALWAYS legal to declare a pointer
	D d1;
  d1.f();
	E e1;
	e1.f();
//	D d2();
//	cp = new C();  // error: invalid new-expression of abstract class type ‘C’
//	cp = new D();
//	cp = &d1;
//	cp = &e1;
	D* dp = &d1;
//	dp = &e1; //error: cannot convert ‘E*’ to ‘D*’ in assignment
	dp->f();
}


