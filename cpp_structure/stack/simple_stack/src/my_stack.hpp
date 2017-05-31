/*####################################################
# File Name: my_stack.hpp
# Author: xxx
# Email: xxx@126.com
# Create Time: 2017-05-31 16:52:33
# Last Modified: 2017-05-31 17:37:41
####################################################*/
#ifndef MY_STACK_H
#define MY_STACK_H

#include <iostream>

using namespace std;

typedef char Elem;

class MyStack{
public:
	MyStack(int size);
	~MyStack();

	bool isStackEmpty();

	bool isStackFull();

	void clearStack();

	int stackLength();

	bool push(Elem elem);

//	Elem pop();
	bool pop(Elem &elem);

	void stackTraverse(bool isFromBottom);

private:
	Elem *m_buffer;
	int m_size;
	int m_top;
};

#endif
