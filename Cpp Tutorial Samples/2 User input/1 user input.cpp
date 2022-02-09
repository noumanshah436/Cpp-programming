#include <iostream>
#include <string>
using namespace std;

// insertion operator   <<
// extraction operator  >>

// cin takes only one word
// getline get complete line  ( only use with string types )

int main()
{
    string item;
    double price;
    int quantity;
    double total;

    cout << "What item do you want to buy?";
    getline(cin, item);     // function in string library
    cout << "What is the price for each? $";
    cin >> price;
    cout << "How many do you want to buy?: ";
    cin >> quantity;
    cout << endl;

    total = price * quantity;

    cout << "item: " << item << endl;
    cout << "price: $" << price << endl;
    cout << "x " << quantity << endl;
    cout << "Your total is: $" << total << endl;

    cout << endl;
    return 0;
}