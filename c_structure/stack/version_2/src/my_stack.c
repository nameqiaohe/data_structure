/*####################################################
# File Name: my_stack.c
# Author: xxx
# Email: xxx@126.com
# Create Time: 2017-05-31 17:00:40
# Last Modified: 2017-05-31 19:41:39
####################################################*/
#include "my_stack.h"

int init_stack(int size){
	my_stack.size = size;
	my_stack.buffer = (elem_t *)malloc(sizeof(elem_t) * size);
	if(my_stack.buffer == NULL){
		log_error("init_stack() : malloc space error");
		return FALSE;
	}
	my_stack.top = 0;

	return TRUE;
}

int destory_stack(){
	if(my_stack.buffer != NULL){
		free(my_stack.buffer);
		my_stack.buffer = NULL;

		return TRUE;
	}else{
		log_info("destory_stack() : stack is already destoried");
		return FALSE;
	}
}

int is_stack_empty(){
	if(0 == my_stack.top){
		return TRUE;
	}else{
		return FALSE;
	}
}

int is_stack_full(){
	if(my_stack.size == my_stack.top){
		return TRUE;
	}else{
		return FALSE;
	}
}

//清空栈中的元素  不是销毁栈
void clear_stack(){
	my_stack.top = 0;
}

int stack_length(){
	return my_stack.top;
}

void set_member(elem_t *dst, elem_t src){
	//strcpy((*dst).name, src.name);
	strncpy(dst->name, src.name, strlen(src.name));
	dst->name[strlen(src.name)] = '\0';
	(*dst).age = src.age;
}

//入栈，栈顶指针变化
int push(elem_t elem){
	if(TRUE == is_stack_full()){
		return FALSE;
	}else{
		//my_stack.buffer[my_stack.top] = elem;//对于复杂数据需要做具体的赋值操作
		set_member(&my_stack.buffer[my_stack.top], elem);
		my_stack.top++;
		return TRUE;
	}
}

int pop(elem_t *elem){
	if(TRUE == is_stack_empty()){
		return FALSE;
	}else{
		//*elem = my_stack.buffer[--my_stack.top];
		my_stack.top--;
		set_member(elem, my_stack.buffer[my_stack.top]);
		return TRUE;
	}
}

//void MyStack::stackTraverse(visit)
void stack_traverse(int is_from_bottom){
	printf("stack_traverse : \n");
	int i = 0;
	if(TRUE == is_from_bottom){
		for(i = 0; i < my_stack.top; ++i){
			printf("\t%s,", my_stack.buffer[i].name);
			printf("%d\n", my_stack.buffer[i].age);
		}
	}else{
		for(i = my_stack.top - 1; i >= 0; --i){
			printf("\t%s,", my_stack.buffer[i].name);
			printf("%d\n", my_stack.buffer[i].age);
		}
	}
}
