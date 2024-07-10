#include<iostream>
using namespace std;
 

template <typename T, typename U>    //  we need to pass datatype list 
class Weight
{
private:
	T kg;
	U grams;

public:
	void setKgData(T x) {
		kg = x;
	}

	T getKgData() {
		return kg;
	}

	void setGramsData(U x) {    //  getting double
		grams = x;
	}

	U getGramsData() {      //  return double
		return grams;  
	} 


};

int main() {

	Weight<int, double> obj1;
	obj1.setKgData(20);
	obj1.setGramsData(20.23);
	cout << obj1.getKgData() << endl;
	cout << obj1.getGramsData();

	cout << endl;


	Weight<int, int> obj2;
	obj2.setKgData(20);
	obj2.setGramsData(20);
	cout << obj2.getKgData() << endl;
	cout << obj2.getGramsData();
	 
	  

	return 0;
}