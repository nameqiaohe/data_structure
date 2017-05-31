/*####################################################
# File Name: demo.c
# Author: xxx
# Email: xxx@126.com
# Create Time: 2017-05-31 17:28:22
# Last Modified: 2017-05-31 18:29:16
####################################################*/
#include "my_stack.h"

int main(int argc, char *argv[]){
	init_stack(5);

	push('a');
	push('b');
	push('c');
	push('d');
	push('e');

	if(is_stack_empty()){
		printf("stack is empty\n");
	}

	if(is_stack_full()){
		printf("stack is full\n");
	}

	printf("stack_length() = %d\n", stack_length());

	stack_traverse(TRUE);

	elem_t elem;
	pop(&elem);
	printf("pop(&elem) = %c\n", elem);

	stack_traverse(FALSE);

	clear_stack();

	stack_traverse(TRUE);

	destory_stack();

	return 0;
}
