//
// Created by 卢振鹏 on 2022/2/26.
//

#include "stdio.h"

#define SENT_LEN 80

int main(void)
{

    char sentence[SENT_LEN+1];

    printf("Enter a sentence: \n");
    gets(sentence);
    printf(sentence);

    return 0;
}