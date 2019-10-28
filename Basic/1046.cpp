//
// Created by 李昊城 on 2019/10/28.
//
#include <stdio.h>
int main(void) {
    int count;
    int afail = 0, bfail = 0;

    scanf("%d", &count);
    while (count) {
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        if (b == a + c && d != a + c) {
            bfail++;
        } else if (d == a + c && b != a + c) {
            afail++;
        }
        count--;

    }
    printf("%d %d\n", afail, bfail);
    return 0;
}
