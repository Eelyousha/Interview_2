#include <iostream>
#include <string>

using namespace std;

string spaceCheckerWithStr(string s) {
    for (size_t i = 0; i < s.size(); i++)
        if (s[i] == '.' && s[i + 1] != ' ')
            s.insert(i + 1, " ");
    return s;
}

string spaceCheckerWithOutStr(string s) {
    for (size_t i = 0; i < s.size(); i++)
        if (s[i] == '.' && s[i + 1] != ' ') {
            string left, right;
            for (size_t j = 0; j <= i; j++)
                left += s[j];
            for (size_t j = i + 1; j < s.size(); j++)
                right += s[j];
            s = left + " " + right;
        }
    return s;
}

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    s1 = spaceCheckerWithOutStr(s1);
    s2 = spaceCheckerWithStr(s2);
    cout << s1 << endl << s2;
    return 0;
}
