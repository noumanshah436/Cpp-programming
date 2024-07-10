#include <fstream>
#include <iostream>
using namespace std;

// https://www.youtube.com/watch?v=TF2-F2duY6c
// https://simplesnippets.tech/file-handling-in-cpp/

int main() {

    char data[100];

    // open a file in write mode.

    ofstream outfile("afile.txt");
    // ofstream outfile;                  //  or open in two line
    // outfile.open("afile.dat");  

    cout << "Writing to the file" << endl;
    cout << "Enter your name: ";
    cin.getline(data, 100);

    // write inputted data into the file.
    outfile << data << endl;

    // close the opened file.
    outfile.close();


    // open a file in read mode.  ****************************

    ifstream infile("afile.txt");
    //ifstream infile;                       //  or open in two line
    //infile.open("afile.dat");

    cout << "Reading from the file" << endl;
    infile.getline(data, 100);
    //infile >> data;

    // write the data at the screen.
    cout << data << endl;

    // close the opened file.
    infile.close();

    return 0;
}
