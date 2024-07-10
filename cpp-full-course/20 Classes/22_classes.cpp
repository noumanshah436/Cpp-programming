#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Human
{
public:
    string name;
    int age;
    double weight;
    Human(string name, int age, double weight)
    {
        this->name = name;
        this->age = age;
        this->weight = weight;
    }
};

int main()
{
    //constructor =  special function that is automatically called when an object is instantiated
    //useful for assigning arguments to variables

    Human human1("Rick", 65, 80);
    Human human2("Morty", 16, 60);
    Human human3("Jerry", 45, 85);

    cout << human3.name << endl;
    cout << human3.age << " yo" << endl;
    cout << human3.weight << " kgs" << endl;

    cout << endl;
    return 0;
}