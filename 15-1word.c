//
// Created by 卢振鹏 on 2022/3/2.
//

#include "stdio.h"
#include "15-1word.h"

int read_char(void)
{
    int ch = getchar();

    if(ch == '\n' || ch == '\t')
        return ' ';

    return ch;
}

void read_word(char *word, int len)
{
    int ch, pos = 0;

    while ((ch = read_char()) == ' ')
        ;
    while (ch != ' ' && ch != EOF) {
        if (pos < len)
            word[pos++] = ch;
        ch = read_char();
    }
    word[pos] = '\0';
}


