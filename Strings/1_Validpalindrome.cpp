#include <iostream>
#include <string>
using namespace std;

bool valid(char ch) {
    if ((ch >= 'a' && ch <= 'z') ||
        (ch >= 'A' && ch <= 'Z') ||
        (ch >= '0' && ch <= '9')) {
        return true;
    }
    return false;
}

char toLowerCase(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        return ch;
    else
        return ch - 'A' + 'a';
}

bool checkPalindrome(string a) {
    int s = 0;
    int e = a.length() - 1;

    while (s <= e) {
        if (a[s] != a[e]) {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

bool isPalindrome(string s) {
    string temp = "";

    // Remove invalid characters
    for (int j = 0; j < s.length(); j++) {
        if (valid(s[j])) {
            temp.push_back(s[j]);
        }
    }

    // Convert to lowercase
    for (int j = 0; j < temp.length(); j++) {
        temp[j] = toLowerCase(temp[j]);
    }

    return checkPalindrome(temp);
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    if (isPalindrome(input)) {
        cout << "Palindrome ✅" << endl;
    } else {
        cout << "Not a Palindrome ❌" << endl;
    }

    return 0;
}