#define LOCAL
#include <stdio.h>

int a[10][10];

int main()
{
#ifdef LOCAL
    FILE *file = NULL;
    file = freopen("in", "r", stdin);
    if (NULL == file) {
        perror("freopen\n");
    }
    file = freopen("out", "w", stdout);
    if (NULL == file) {
        perror("freopen\n");
    }
#endif

    int n = 0;
    int val,i,j;

    scanf("%d", &n);
    val = a[i=0][j=n-1] = 1;

    while (val < n*n) {
        while (i<n-1 && !a[i+1][j]) {
            a[++i][j] = ++val;
        }
        while (j>0 && !a[i][j-1]) {
            a[i][--j] = ++val;
        }
        while (i>0 && !a[i-1][j]) {
            a[--i][j] = ++val;
        }
        while (j<n-1 && !a[i][j+1]) {
            a[i][++j] = ++val;
        }
    }

    for (i=0; i<n; ++i) {
        for (j=0; j<n; ++j) {
            printf("%-3d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
