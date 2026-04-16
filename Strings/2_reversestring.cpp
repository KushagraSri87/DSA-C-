#include<string>
#include<iostream>
#include<vector>
using namespace std;

    void reverseString(vector<char>& s) {
        int st=0;
        int e = s.size()-1;

        while(st<e) {
            swap(s[st++], s[e--]);
        }
    }
int main() {
    // Input string as vector of characters
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    cout << "Original string: ";
    for (char c : s) {
        cout << c;
    }
    cout << endl;

    // Call function
    reverseString(s);

    cout << "Reversed string: ";
    for (char c : s) {
        cout << c;
    }
    cout << endl;

    return 0;
}