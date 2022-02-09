#include <iostream>
#include <string> 
using namespace std;

class Pizza {
public:
	string bread;
	string sauce;
	string cheese;
	string topping;
	
	Pizza(string bread, string sauce, string cheese, string topping) {
		this->bread = bread;
		this->sauce = sauce;
		this->cheese = cheese;
		this->topping= topping;
	}
	Pizza(string bread, string sauce, string cheese) {
		this->bread = bread;
		this->sauce = sauce;
		this->cheese = cheese;
	}
	Pizza(string bread, string sauce) {
		this->bread = bread;
		this->sauce = sauce;
	}
	Pizza(string bread) {
		this->bread = bread;
	}

	void orderPizza() {
		cout << "here is your ";
		if (!bread.empty())
			cout << bread << " ";
		if (!sauce.empty())
			cout << sauce << " ";
		if (!cheese.empty())
			cout << cheese << " ";
		if (!topping.empty())
			cout << topping << " ";
		cout << "pizza" << endl;
	}
};
	
int main()
{
	//constructor =  special function that is automatically called when an object is instantiated
	//useful for assigning arguments to variables

	Pizza first_pizza("thick crust,", "red sauce,", "mozzerella");
	Pizza second_pizza("flat bread,", "alfredo");

	first_pizza.orderPizza();
	second_pizza.orderPizza();
}

