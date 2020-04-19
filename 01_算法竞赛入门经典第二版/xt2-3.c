//#define LOCAL
#include <stdio.h>
#define INF 1000000000

/**
 * 习题2-3 倒三角形
 * 输入正整数n<=20，输出一个n层的倒三角形。
 * 例如，n=5时输出：
 * #########
 *  #######
 *   #####
 *    ###
 *     #
 * @return
 */
int main() {
#ifdef LOCAL
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
#endif
    int n;
    scanf("%d", &n);
    for (int i=0; i<n; ++i) {
        int nr_kongge = i;
        int nr_jinhao = (n-i)*2-1;
        for (int j=0; j<nr_kongge; ++j) {
            printf(" ");
        }
        for (int j=0; j<nr_jinhao; ++j) {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}

