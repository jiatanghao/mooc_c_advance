#include <cstdio>
#include <cstdlib>

int leap(int year);
int main() {
	int year, month, day;
	scanf("%d-%2d-%2d", &year, &month, &day);
	switch(month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
			if (day == 31) {
				day = 1;
				month++;
			} else {
				day++;
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if (day == 30) {
				day = 1;
				month++;
			} else {
				day++;
			}
			break;
		case 2:
			if (leap(year)) {
				if (day == 29) {
					day = 1;
					month++;
				} else {
					day++;
				}
			} else {
				if (day == 28) {
					day = 1;
					month++;
				} else {
					day++;
				}
			}
			break;
		case 12:
			if (day == 31) {
				day = 1;
				month = 1;
				year++;
			} else {
				day++;
			}
			break;
	}
	printf("%d-%02d-%02d\n", year, month, day);
	system("pause");
	return 0;
}

int leap(int year) {
	if (year % 100 == 0) {
		return year % 400 == 0;
	} else {
		return year % 4 == 0;
	}
}