#include <cstdio>

int main() {
	for (int i = 1; i <= 4; i++) {//鄱阳湖
		for (int j = 1; j <= 4; j++) {//洞庭湖
			for (int k = 1; k <= 4; k++) {//太湖
				for (int l = 1; l <= 4; l++) {//洪泽湖
					int a = (j == 1) + (l == 4) + (i == 3) + (k == 2);
					int b = (l == 1) + (j == 4) + (i == 2) + (k == 3);
					int c = (l == 4) + (j == 3);
					int d = (i == 1) + (k == 4) + (l == 2) + (j == 3);
					if (a == 1 && b == 1 && c == 1 && d == 1 &&(i != j) && (i != k) && (i != l) && (j != k)
						&& (j != l) && (k != l)) {
						printf("%d\n", i);
						printf("%d\n", j);
						printf("%d\n", k);
						printf("%d\n", l);
						return 0;
					}
				}
			}
		}
	}
	// getchar();
	// return 0;
}