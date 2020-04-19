#define LOCAL
#include <stdio.h>
#define INF 1000000000

/**
 * 习题2-2 韩信点兵
 * 士兵变换队形，3人一排，5人一排，7人一排，每次只看队伍
 * 排尾就知道总人数。
 * 输入非负整数a，b，c，表示每种队形排尾人数，
 * 输出总人数的最小值（或报告无解）。
 * 已知总人数不小于10，不超过100。
 * 输入到文件结束为止。
 *
 * 样例输入：
 * 2 1 6
 * 2 1 3
 * 样例输出：
 * Case 1: 41
 * Case 2: No answer
 * @return
 */
int main() {
#ifdef LOCAL
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
#endif
    int a, b, c, kase = 0;
    while (scanf("%d %d %d", &a, &b, &c) == 3) {
        int i = 10;
        for (; i<=100; ++i) {
            if (a == i%3 && b == i%5 && c == i%7) {
                printf("Case %d: %d\n", ++kase, i);
                break;
            }
        }
        if (i>100) {
            printf("Case %d: No answer\n", ++kase);
        }
    }

    return 0;
}

