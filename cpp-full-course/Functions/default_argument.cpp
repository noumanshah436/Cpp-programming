
#include <iostream>
#include <cmath>
using namespace std;
void displayStars(int starsPerRow = 10, int numRows = 1);

int main() {
    displayStars();
    cout << endl;
    displayStars(5);
    cout << endl;
    displayStars(7, 3);
    cout << endl;
    return 0;
}

void displayStars(int starsPerRow, int numRows) {
    for (int row = 1; row <= numRows; row++) {
        for (int star = 1; star <= starsPerRow; star++)
            cout << "*";
        cout << endl;
    }
}
