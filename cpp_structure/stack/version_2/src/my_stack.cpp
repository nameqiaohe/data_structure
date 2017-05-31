/*####################################################
# File Name: my_stack.cpp
# Author: xxx
# Email: xxx@126.com
# Create Time: 2017-05-31 17:00:40
# Last Modified: 2017-05-31 23:28:47
####################################################*/
#include "my_stack.hpp"

MyStack::MyStack(int size){
	m_size = size;
	m_buffer = new Elem[size];
	m_top = 0;
}

MyStack::~MyStack(){
	delete[] m_buffer;
	m_buffer = NULL;
}

bool MyStack::isStackEmpty(){
	if(0 == m_top){
		return true;
	}else{
		return false;
	}
}

bool MyStack::isStackFull(){
	if(m_size == m_top){
		return true;
	}else{
		return false;
	}
}

//清空栈中的元素  不是销毁栈
void MyStack::clearStack(){
	m_top = 0;
}

int MyStack::stackLength(){
	return m_top;
}

//入栈，栈顶指针变化
bool MyStack::push(Elem elem){
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
Elem MyStack::pop(){
	if(true == isStackEmpty()){
		throw 1;
	}else{
		return m_buffer[--m_top];
	}
}
#endif

bool MyStack::pop(Elem &elem){
	if(true == isStackEmpty()){
		return false;
	}else{
		m_top--;
		elem = m_buffer[m_top];
		return true;
	}
}

//void MyStack::stackTraverse(visit)
void MyStack::stackTraverse(bool isFromBottom){
	if(isFromBottom){
		for(int i = 0; i < m_top; ++i){
			//cout << m_buffer[i] << ",";
			m_buffer[i].printCoordinate();
		}
	}else{
		for(int i = m_top - 1; i >= 0; --i){
			//cout << m_buffer[i] << ",";
			m_buffer[i].printCoordinate();
		}
	}
	cout << endl;
}
