#include <iostream>
using namespace std;

int main() {
	long n;
	cin >> n;
	while (n != 1) {
		if (n % 2 == 1) {
			cout << n << "*3+1=";
			n = 3 * n + 1;
			cout << n << endl;
		} else {
			cout << n << "/";
			n /= 2;
			cout << "2=" << n << endl;
		}
	}
	cout << "End\n";
}