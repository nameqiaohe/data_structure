/*####################################################
# File Name: my_stack.hpp
# Author: xxx
# Email: xxx@126.com
# Create Time: 2017-05-31 16:52:33
# Last Modified: 2017-05-31 23:17:55
####################################################*/
#ifndef MY_STACK_H
#define MY_STACK_H

#include <iostream>
#include "coordinate.hpp"

using namespace std;

//typedef char Elem;
typedef Coordinate Elem;

class MyStack{
public:
	MyStack(int size);//分配内存初始化空间，设定栈容量、栈顶
	~MyStack();//回收占空间内存

	bool isStackEmpty();//判断栈是否为空，空 返回 true，非空 返回 false

	bool isStackFull();//判断栈是否为满，满 返回 true，非满 返回 false

	void clearStack();//清空栈 （不是销毁栈）

	int stackLength();//返回栈中元素的个数

	bool push(Elem elem);//元素入栈，栈顶上升

//	Elem pop();
	bool pop(Elem &elem);//元素出栈，站定下降

	void stackTraverse(bool isFromBottom);//遍历栈中所有元素

private:
	Elem *m_buffer;//栈空间指针
	int m_size;//栈容量
	int m_top;//栈顶，栈中元素个数
};

#endif
