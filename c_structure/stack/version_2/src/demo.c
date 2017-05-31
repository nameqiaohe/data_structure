/*####################################################
# File Name: demo.c
# Author: xxx
# Email: xxx@126.com
# Create Time: 2017-05-31 17:28:22
# Last Modified: 2017-05-31 19:42:33
####################################################*/
#include "my_stack.h"

int main(int argc, char *argv[]){
	init_stack(5);

#if 1
	elem_t elem[5] = {{"zhangsan", 20}, {"lisi", 25}, {"zhaosi", 17}, {"wangwu", 30}, {"sunba", 12}};

	push(elem[0]);
	push(elem[1]);
	push(elem[2]);
	push(elem[3]);
	push(elem[4]);
#endif

#if 0
	elem_t elem = {"zhangsan", 20};
	//elem_t elem = {"sunba", 20};

	push(elem);
#endif

	if(is_stack_empty()){
		printf("stack is empty\n");
	}

	if(is_stack_full()){
		printf("stack is full\n");
	}

	printf("stack_length() = %d\n", stack_length());

	stack_traverse(TRUE);

#if 1
	elem_t elem_pop;
	if(TRUE == pop(&elem_pop)){
		printf("pop(&elem_pop) = %s, ", elem_pop.name);
		printf("pop(&elem_pop) = %d\n", elem_pop.age);
	}

	if(TRUE == pop(&elem_pop)){
		printf("pop(&elem_pop) = %s, ", elem_pop.name);
		printf("pop(&elem_pop) = %d\n", elem_pop.age);
	}
#endif
	stack_traverse(FALSE);

	clear_stack();

	stack_traverse(TRUE);

	destory_stack();

	return 0;
}
