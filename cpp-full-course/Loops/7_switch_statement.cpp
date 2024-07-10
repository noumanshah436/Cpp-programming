#include <iostream>
#include <string>
using namespace std;

int main()
{

    
    //--------------------- Example 1 ---------------------
    int month;
    cout << "Enter the month (1-12): ";
    cin >> month;

    switch (month) {
    case 1:
        cout << "It is January";
        break;
    case 2:
        cout << "It is February";
        break;
    case 3:
        cout << "It is March";
        break;
    case 4:
        cout << "It is April";
        break;
    case 5:
        cout << "It is May";
        break;
    case 6:
        cout << "It is June";
        break;
    case 7:
        cout << "It is July";
        break;
    case 8:
        cout << "It is August";
        break;
    case 9:
        cout << "It is September";
        break;
    case 10:
        cout << "It is October";
        break;
    case 11:
        cout << "It is November";
        break;
    case 12:
        cout << "It is December";
        break;
    default:
        cout << "You did not enter a number (1-12)";
    }
    
    /*
    //--------------------- Example 2 ---------------------
        char answer;
        cout << "What letter grade did you get (A-F): ";
        cin >> answer;

        switch (answer) {
        case 'A':
            cout << "You did PERFECT!";
            break;
        case 'B':
            cout << "You did good!";
            break;
        case 'C':
            cout << "You did OKAY!";
            break;
        case 'D':
            cout << "You did not do so good";
            break;
        case 'F':
            cout << "YOU FAILED!";
            break;
        default:
            cout << "Enter a letter grade (A-F): ";
        }

    */
    cout << endl;
    return 0;
}