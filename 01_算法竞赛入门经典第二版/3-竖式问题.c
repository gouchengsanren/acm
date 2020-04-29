#define LOCAL
#include <stdio.h>
#include <string.h>

/**
 * 规定是abc*de，三位数乘以二位数
 * 最长 999*99=98901 五位数
 *
 * 要求整个过程中的所有数字都在数字集合中。
 * 例：
 * 2357
 * <1>
 *
 *   775
 * x  33
 * -----
 *  2325
 * 2325 
 * -----
 * 25575
 */
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
    int count = 0;
    char s[10], buf[100];
    int abc,de;
    scanf("%s", s);

    for (abc=111; abc<=999; ++abc) {
        for (de=11; de<=99; ++de) {
            int x=abc*(de%10);
            int y=abc*(de/10);
            int z=abc*de;
            int ok = 1, i;
            snprintf(buf, sizeof(buf), "%d%d%d%d%d", abc,de,x,y,z);
            for (i=0; i<strlen(buf); ++i) {
                if (NULL == strchr(s, buf[i])) {
                    ok = 0;
                    break;
                }
            }
            if (ok) {
                printf("<%d>\n", ++count);
                printf("%5d\nX%4d\n-----\n%5d\n%-5d\n-----\n%5d\n", abc,de,x,y,z);
            }
        }
    }

    return 0;
}
