#include <iostream>
#include <string>
using namespace std;

string removeOccurrences(string s, string part) {
    
    while (s.length() != 0 && s.find(part) < s.length()) {
        s.erase(s.find(part), part.length());
    }
    
    return s;
}

int main() {
    string s, part;

    cout << "Enter main string: ";
    getline(cin, s);

    cout << "Enter part to remove: ";
    getline(cin, part);

    string result = removeOccurrences(s, part);

    cout << "Result: " << result << endl;

    return 0;
}