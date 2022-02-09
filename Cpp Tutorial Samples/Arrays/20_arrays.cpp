// -------------------------- Example 1 --------------------------
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// int main()
// {
//     string cars[] = {"Corvette","Tesla","Ferrari","Audi" };

//     for (int i = 0; i < size(cars) ; i++) {
//         cout << cars[i] << endl;
//     }
    
//     cout << endl;
//     return 0;
// }
// -------------------------- Example 2 --------------------------

int main()
{
    int number;

    cout << "How many cars do you have?:";
    cin >> number;
    cin.ignore();

    string* pCars = new string[number];
    //pointer

    for (int i = 0; i < number;i++) {
        cout << "Enter car #" << i + 1<<" ";
        getline(cin, pCars[i]);
    }

    cout << "\nHere is your garage!\n";
    cout << "------------------------\n";

    for (int i = 0; i < number; i++) {
        cout << "Parking spot #" << i + 1 << " " << pCars[i]<<endl;
    }

    cout << endl;
    return 0;
}