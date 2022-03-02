//
// Created by 卢振鹏 on 2022/3/3.
//

#include "ctype.h"
#include "stdio.h"
#include "16-1readline.h"

int read_line(char str[], int n)
{
    int ch, i = 0;

    while (isspace(ch = getchar()))
        ;
    while (ch != '\n' && ch != EOF) {
        if (i < n)
            str[i++] = ch;
        ch = getchar();
    }
    str[i] = '\0';
    return i;
}