#include <cstdio>

int main()
{
	char a[103][103]; 
    
    int n, m;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i <= n + 1; i++) {
        a[0][i] = '#';
        a[n+1][i] = '#';
        a[i][0] = '#';
        a[i][n+1] = '#';
        a[i][n+2] = '\0';
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            scanf("%c", &a[i][j]);
        }
        getchar();
    }
    scanf("%d", &m);
    while (--m) {
        int b[103][103] = {0};
        for (int i = 1; i <= n; i++) {//记录当天已经得病的人
            for (int j = 1; j <= n; j++) {
                if (a[i][j] == '@') {
                    b[i][j] = 1;
                }
            }
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (b[i][j] == 1) {
                    if (a[i][j-1] == '.') {
                        a[i][j-1] = '@';
                    }
                    if (a[i][j+1] == '.') {
                        a[i][j+1] = '@';
                    }
                    if (a[i-1][j] == '.') {
                        a[i-1][j] = '@';
                    }
                    if (a[i+1][j] == '.') {
                        a[i+1][j] = '@';
                    }
                }
            }
        }
    }
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] == '@') {
                sum++;
            }
        }
    }
    printf("%d\n", sum);
	return 0;
}
