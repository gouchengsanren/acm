#define LOCAL
#include <stdio.h>

/**
 * 习题2-4 子序列的和
 * 输入两个正整数n<m<10^6，输出1/n^2 + 1/(n+1)^2 + ...
 * + 1/m^2，保留5位小数。输入包含多组数据，结束标记为
 * n=m=0.
 * 样例输入：
 * 2 4
 * 65536 655360
 * 0 0
 * 样例输出：
 * Case 1: 0.42361
 * Case 2: 0.00001
 * @return
 */
int main() {
#ifdef LOCAL
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
#endif
    int n, m;
    int kase = 0;
    while (scanf("%d %d", &n, &m) == 2 && n && m) {
        double s = 0;
        if (n>=1000) {
            printf("Case %d: 0.00001\n", ++kase);
            continue;
        }
        for (int i=n;i<=m;++i) {
            s += 1.0/(i*i);
        }
        printf("Case %d: %.5f\n", ++kase, s);
    }

    return 0;
}

