#include <cstdio>
const int N = 100;

int main() {
	int a[N] = {0};
	int n;
	scanf("%d", &n);
	for (auto i = 0; i < n; i++) {
		scanf("%d", a + i);
	}
	for (auto i = 0; i < n; i++) {
		if (a[i] == i) {
			printf("%d\n", i);
			return 0;
		}
	}
	printf("N");
	return 0;
}