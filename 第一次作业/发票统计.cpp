#include <cstdio>
#include <cstdlib>

int main()
{
	double sum1[3] = {0}, sum2[3] = {0};
	int id[3], count[3];
	char invoice_type[3][100];
	double invoice[3][100];
	for (int i = 0; i < 3; i++) {
		scanf("%d %d", &id[i], &count[i]);
		getchar();
		for (int j = 0; j < count[i]; j++) {
			scanf("%c %lf", &invoice_type[i][j], &invoice[i][j]);
			getchar();
		}
	}
	/*for (int i = 0; i < 3; i++) {
		for (int j = 0; j < count[i]; j++) {
			printf("%c ", invoice_type[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < count[i]; j++) {
			printf("%lf ", invoice[i][j]);
		}
		printf("\n");
	}*/
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < count[i]; j++) {
			sum1[i] += invoice[i][j];
			switch (invoice_type[i][j]) {
				case 'A':
					sum2[0] += invoice[i][j];
					break;
				case 'B':
					sum2[1] += invoice[i][j];
					break;
				case 'C':
					sum2[2] += invoice[i][j];
					break;
			}
		}
	}

	for (int i = 0; i < 3; i++) {
		if (id[i] == 1) {
			printf("%d %.2f\n", 1, sum1[i]);
		}
	}

	for (int i = 0; i < 3; i++) {
		if (id[i] == 2) {
			printf("%d %.2f\n", 2, sum1[i]);
		}
	}

	for (int i = 0; i < 3; i++) {
		if (id[i] == 3) {
			printf("%d %.2f\n", 3, sum1[i]);
		}
	}	

	for (int i = 0; i < 3; i++) {
		printf("%c %.2f\n", 'A' + i, sum2[i]);
	}
	return 0;
}