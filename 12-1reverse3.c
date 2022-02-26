//
// Created by 卢振鹏 on 2022/2/26.
//

#include "stdio.h"

#define N 10

int main(void)
{
    int a[N], *p;

    printf("Enter %d numbers: ", N);
    for (p = a; p < a + N; p++) {
        scanf("%d", p);
    }

    printf("In reverse order:");
    for (p = a + N - 1; p >= a; p--) {
        printf(" %d", *p);
    }
    printf("\n");

    return 0;
}