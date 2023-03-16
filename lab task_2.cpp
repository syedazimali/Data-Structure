
#include <iostream>
#include <string>

using namespace std;

string encode(string s, int j) {
    string result = "";

    for (int i = 0; i < s.length(); i++) {
        if (i >= j && isalpha(s[i])) {
            int asciiValue = s[i] + 2;
            result += char(asciiValue);
        } else {
            result += s[i];
        }
    }

    return result;
}

int main() {
    string s = "I am a student";
    int j = 2;

    string encodedString = encode(s, j);

    cout << "Original String: " << s << endl;
    cout << "Encoded String: " << encodedString << endl;

    return 0;
}
