//#define LOCAL
#include <stdio.h>
#define INF 1000000000

/**
 * 习题2-1 水仙花数
 * 输出100~999中的所有水仙花数。
 * 若3位数ABC满足ABC=A^3+B^3+C^3，则为水仙花数。
 * @return
 */
int main() {
#ifdef LOCAL
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
#endif
    for (int i=100; i<=999; ++i) {
        int c = i%10;
        int b = (i%100)/10;
        int a = i/100;

        if (i == a*a*a + b*b*b + c*c*c) {
            printf("%d=%d+%d+%d\n", i, a*a*a, b*b*b, c*c*c);
        }
    }

    return 0;
}

/**
 * 153=1+125+27
 * 370=27+343+0
 * 371=27+343+1
 * 407=64+0+343
 */
