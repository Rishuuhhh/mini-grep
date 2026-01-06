#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main(int argc, char* argv[]) {
    
    if (argc != 3) {
        cout << "Usage: ./minigrep <word> <filename>" << endl;
        return 1;
    }

    string keyword = argv[1];
    string filename = argv[2];

    for (char &c : keyword) {
        c = tolower(c);
    }

    ifstream file(filename);
    if (!file) {
        cout << "Error: Cannot open file " << filename << endl;
        return 1;
    }

    string line;
    int lineNumber = 1;
    int matchCount = 0;

    while (getline(file, line)) {
        string lowerLine = line;
        for (char &c : lowerLine) {
            c = tolower(c);
        }
        if (lowerLine.find(keyword) != string::npos) {
            cout << lineNumber << ": " << line << endl;
            matchCount++;
        }
        lineNumber++;
    }

    cout << "Total matches: " << matchCount << endl;

    file.close();
    return 0;
}