/**
 * Author:    Tridib Samanta
 * Created:   27.01.2020
 **/

#include <iostream>
using namespace std;

int main()
{

    // Type casting
    //
    // cout << (double) 5 / 2;            -- 2.5
    // cout << (double) (5 / 2);          --  2
    // cout << (int) (5.051 / 2.021);

    // Programming equations ex.(1+2*3)
    //-----------------------------------
    // step #1 Parenthesis ( )
    // step #2 multiply * & divide /
    // step #3 add + & substract -

    // double total = 1 + 2 - 3 * 4 / 5.0 + (6 + 7);   // total 13.6
    // cout << total;

    double val = 5.5;

    cout << val << endl;
    cout << (int)val << endl; // Explicit Casting

    int a = 5, b = 7;
    cout << a / b << endl;
    cout << (double)a / b << endl; // Explicit Casting

    int x = 444;
    short y = x; // Implicit Casting
    cout << y << endl;

    cout << static_cast<int>(val) << endl; // C++

    char ch = 't';
    cout << (int)ch << endl; // Check ASCII value of a character
    cout << static_cast<int>(ch) << endl;

    return 0;
}
