//
// Created by 卢振鹏 on 2021/12/6.
//

#include "stdio.h"

void print_count(int n)
{
    printf("T minus %d and counting\n", n);
}

int main(void)
{
    int i;

    for (i = 10; i > 0; --i)
        print_count(i);

    return 0;
}