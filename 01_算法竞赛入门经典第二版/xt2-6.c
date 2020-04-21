#define LOCAL
#include <stdio.h>
#include <string.h>

int n[10] = {0};

int check_and_set(int x)
{
    if (n[x] || !x) return -1;
    n[x] = 1;
    return 0;
}

/**
 * 习题2-6 排列
 * 用1,2,3, ... , 9组成3个三位数abc，def，ghi
 * 每个数字恰好使用一次，
 * 要求abc：def：ghi = 1:2:3
 * 按照“abc def ghi”的格式输出所有解，每行一个解。
 * @return
 */
int main() {
#ifdef LOCAL
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
#endif
    int abc,def,ghi, a,b,c,d,e,f,g,h,i;
    for (a=1;a<=3;++a) {
        for (b=1;b<=9;++b) {
            for (c=1;c<=9;++c) {
                memset(n, 0, sizeof(int)*10);
                abc = a*100+b*10+c;
                def = 2*abc;
                ghi = 3*abc;
                d = def/100;
                e = (def - d*100)/10;
                f = def%10;
                g = ghi/100;
                h = (ghi - g*100)/10;
                i = ghi%10;
                if (check_and_set(a) || check_and_set(b) || check_and_set(c)
                    || check_and_set(d) || check_and_set(e) || check_and_set(f)
                    || check_and_set(g) || check_and_set(h) || check_and_set(i)) {
                    continue;
                }
                printf("%d %d %d\n", abc, def, ghi);
            }
        }
    }

    return 0;
}

/**
 * 192 384 576
 * 219 438 657
 * 273 546 819
 * 327 654 981
 */

