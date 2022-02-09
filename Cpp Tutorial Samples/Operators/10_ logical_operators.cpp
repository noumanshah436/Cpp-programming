#include <iostream>
#include <string>
using namespace std;

int main()
{
    // && AND logical operator
    // || OR logical operator
    // ! NOT logical operator

    // -------------- && AND --------------

    double temp;

    cout << "Enter your temperature (C): ";
    cin >> temp;

    if (temp >= 35 && temp <= 37.5)
    {
        cout << "Your temperature is normal";
    }
    else
    {
        cout << "GO TO THE HOSPITAL";
    }

    // -------------- || OR --------------

    string cough;

    cout << "Do you have a cough (yes/no): ";
    cin >> cough;

    if (cough.at(0) == 'y' || cough.at(0) == 'Y')
    {
        cout << "You are sick!";
    }
    else
    {
        cout << "You are probably fine";
    }

    // -------------! NOT -------------

    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    if (!name.empty())
    {

        cout << "Welcome " << name;
    }
    else
    {
        cout << "YOU DID NOT ENTER YOUR NAME! >:(";
    }
}
