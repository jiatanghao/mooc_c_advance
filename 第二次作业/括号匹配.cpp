#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

int main() {
    stack<int> s, t;
    char str[101];
    while (cin >> str) {
        char wrong[101] = {0};
        for (int i = 0; i < strlen(str); i++) {
            if (str[i] == '(') {
                s.push(i);
            } else if (str[i] == ')') {
                if (!s.empty()) {
                    s.pop();
                } else {
                    t.push(i);
                }
            }
        }
        int max = -1;
        while (!s.empty()) {
            if (s.top() > max)
                max = s.top();
            wrong[s.top()] = '$';
            s.pop();
        }
        while (!t.empty()) {
            if (t.top() > max)
                max = t.top();
            wrong[t.top()] = '?';
            t.pop();
        }
        for (int i = 0; i < max; i++) {
            if (wrong[i] != '$' && wrong[i] != '?') {
                wrong[i] = ' ';
            }
        }
        wrong[max+1] = '\0';
        cout << str << endl;
        cout << wrong << endl;
    }
    return 0;
}