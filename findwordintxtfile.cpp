// findwordintxtfile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    //winhtut,NationalCyberCity
    ifstream readFile("TextFile1.txt");
    string targetStr;
    unsigned int line = 0;
    unsigned int times = 0;
    cout << "Enter word to find: ";
    cin >> targetStr;
    cout << endl;
    string text;
    while (getline(readFile, text)) {
        line++;
        if (text.find(targetStr, 0) != string::npos) {
            cout <<  targetStr << " found at line: " << line << endl;
            times++;
        }
    }
    cout << endl << "The word has been found " << times << " times!" << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
