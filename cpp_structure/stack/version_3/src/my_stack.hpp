/*####################################################
# File Name: my_stack.hpp
# Author: xxx
# Email: xxx@126.com
# Create Time: 2017-05-31 16:52:33
# Last Modified: 2017-06-01 00:16:15
####################################################*/
#ifndef MY_STACK_H
#define MY_STACK_H

#include <iostream>

using namespace std;

//typedef char Elem;
//typedef Coordinate Elem;

template <typename T>
class MyStack{
public:
	MyStack(int size);//分配内存初始化空间，设定栈容量、栈顶
	~MyStack();//回收占空间内存

	bool isStackEmpty();//判断栈是否为空，空 返回 true，非空 返回 false

	bool isStackFull();//判断栈是否为满，满 返回 true，非满 返回 false

	void clearStack();//清空栈 （不是销毁栈）

	int stackLength();//返回栈中元素的个数

//	bool push(Elem elem);//元素入栈，栈顶上升
	bool push(T elem);//元素入栈，栈顶上升

//	Elem pop();
//	bool pop(Elem &elem);//元素出栈，站定下降
	bool pop(T &elem);//元素出栈，站定下降

	void stackTraverse(bool isFromBottom);//遍历栈中所有元素

private:
	T *m_buffer;//栈空间指针
	int m_size;//栈容量
	int m_top;//栈顶，栈中元素个数
};

template <typename T>
MyStack<T>::MyStack(int size){
	m_size = size;
	//m_buffer = new Elem[size];
	m_buffer = new T[size];
	m_top = 0;
}

template <typename T>
MyStack<T>::~MyStack(){
	delete[] m_buffer;
	m_buffer = NULL;
}

template <typename T>
bool MyStack<T>::isStackEmpty(){
	if(0 == m_top){
		return true;
	}else{
		return false;
	}
}

template <typename T>
bool MyStack<T>::isStackFull(){
	if(m_size == m_top){
		return true;
	}else{
		return false;
	}
}

//清空栈中的元素  不是销毁栈
template <typename T>
void MyStack<T>::clearStack(){
	m_top = 0;
}

template <typename T>
int MyStack<T>::stackLength(){
	return m_top;
}

//入栈，栈顶指针变化
template <typename T>
bool MyStack<T>::push(T elem){
	if(true == isStackFull()){
		return false;
	}else{
		m_buffer[m_top] = elem;
		m_top++;
		return true;
	}
}

#if 0
//出栈，栈顶指针变化
template <typename T>
Elem MyStack<T>::pop(){
	if(true == isStackEmpty()){
		throw 1;
	}else{
		return m_buffer[--m_top];
	}
}
#endif

template <typename T>
bool MyStack<T>::pop(T &elem){
	if(true == isStackEmpty()){
		return false;
	}else{
		m_top--;
		elem = m_buffer[m_top];
		return true;
	}
}

//void MyStack::stackTraverse(visit)
template <typename T>
void MyStack<T>::stackTraverse(bool isFromBottom){
	if(isFromBottom){
		for(int i = 0; i < m_top; ++i){
			cout << m_buffer[i];
			//m_buffer[i].printCoordinate();
		}
	}else{
		for(int i = m_top - 1; i >= 0; --i){
			cout << m_buffer[i];
			//m_buffer[i].printCoordinate();
		}
	}
	cout << endl;
}

#endif
