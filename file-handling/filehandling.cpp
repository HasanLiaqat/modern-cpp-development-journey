#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // Writing to a file
    ofstream outFile("example.txt");

    outFile << "Learning File Handling in C++" << endl;
    outFile << "Day 9 of my C++ journey." << endl;

    outFile.close();

    cout << "Data written to file." << endl;

    // Reading from a file
    ifstream inFile("example.txt");
    string line;

    cout << "\nReading from file:" << endl;

    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();

    return 0;
}
