/*####################################################
# File Name: my_stack.h
# Author: xxx
# Email: xxx@126.com
# Create Time: 2017-05-31 16:52:33
# Last Modified: 2017-05-31 18:37:17
####################################################*/
#ifndef MY_STACK_H
#define MY_STACK_H

#include <stdio.h>
#include <stdlib.h>
#include "dbg.h"

#define TRUE 1
#define FALSE 0

typedef char elem_t;

typedef struct my_stack{
	elem_t *buffer;
	int size;
	int top;
}my_stack_t;

my_stack_t my_stack;

int init_stack(int size);
int destory_stack();

int is_stack_empty();

int is_stack_full();

void clear_stack();

int stack_length();

int push(elem_t elem);

int pop(elem_t *elem);

void stack_traverse(int is_from_bottom);

#endif
