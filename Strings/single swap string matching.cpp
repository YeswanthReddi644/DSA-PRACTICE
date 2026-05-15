QUESTION:

You are given two strings s1 and s2 of equal length. A string swap is an operation where you choose two indices in a string (not necessarily different) and swap the characters at these indices.

Return true if it is possible to make both strings equal by performing at most one string swap on exactly one of the strings. Otherwise, return false.

Example

Input:
s1 = "bank"
s2 = "kanb"

Output:
true

ANSWER:---------------------------------------------------------------------------------------------------------------------------------------------------------------
  

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s1, s2;

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;

    vector<int> diff;

    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] != s2[i]) {
            diff.push_back(i);
        }
    }

    bool ans = false;

    if (diff.size() == 0) {
        ans = true;
    }
    else if (diff.size() == 2) {
        int i = diff[0];
        int j = diff[1];

        if (s1[i] == s2[j] && s1[j] == s2[i]) {
            ans = true;
        }
    }

    if (ans)
        cout << "true";
    else
        cout << "false";

    return 0;
}
