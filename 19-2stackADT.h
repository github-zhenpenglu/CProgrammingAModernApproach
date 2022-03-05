//
// Created by 卢振鹏 on 2022/3/5.
//

#ifndef CPROGRAMMINGAMODERNAPPROACH_19_2STACKADT_H
#define CPROGRAMMINGAMODERNAPPROACH_19_2STACKADT_H

#include "stdbool.h"

typedef int Item;

typedef struct stack_type *Stack;

Stack create(void);
void destroy(Stack s);
void make_empty(Stack s);
bool is_empty(Stack s);
bool is_full(Stack s);
void push(Stack s, Item i);
Item pop(Stack s);

#endif //CPROGRAMMINGAMODERNAPPROACH_19_2STACKADT_H
