#include <iostream>
#include <vector>
#include <string>

using namespace std;

char translate(char ch, const vector<char>& codeTable) {
    char upperCaseLetter;
    int upperCaseCode;

    if (ch >= 'A' && ch <= 'Z') { // is a capital letter
        return codeTable[ch - 'A'];
    }
    else if (ch >= 'a' && ch <= 'z') { // is lowercase letter
        upperCaseLetter = ch - 32; // converts the letter to uppercase
        upperCaseCode = codeTable[upperCaseLetter - 'A']; // get uppercase code
        return (upperCaseCode + 32); // convert code back to lowercase
    }
    else { // is not a letter
        return ch;
    }
}

int main() {
    vector<char> codeTable = { 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' };

    string input;
    cout << "Input text here: ";
    getline(cin, input);
    int length = input.length();
    
    cout << "Encoded Message: ";
    for (int i = 0; i < length; i++) {
        cout << translate(input[i], codeTable);
    }
    return 0;
}
