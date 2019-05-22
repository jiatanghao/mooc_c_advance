#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[501];
    cin.getline(s, 501);
    int i, j, k = 0;
    for (i = 0; i <= (int)strlen(s); i++) {
        if (s[i] == ' ') {
            for (j = i - 1; j >= k; j--) {
                cout << s[j];
            }
            cout << " ";
            k = i + 1;
        } else if (s[i] == '\0') {
            for (j = i - 1; j >= k; j--) {
                cout << s[j];
            }
        }
    }
    return 0;
}