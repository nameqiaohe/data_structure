/*####################################################
# File Name: demo.cpp
# Author: xxx
# Email: xxx@126.com
# Create Time: 2017-05-31 17:28:22
# Last Modified: 2017-05-31 17:48:25
####################################################*/
#include "my_stack.hpp"

int main(int argc, char *argv[]){
	MyStack *pStack = new MyStack(5);

	pStack->push('a');
	pStack->push('b');
	pStack->push('c');
	pStack->push('d');
	pStack->push('e');

	if(pStack->isStackEmpty()){
		cout << "stack is empty" << endl;
	}

	if(pStack->isStackFull()){
		cout << "stack is full" << endl;
	}

	cout << "pStack->stackLength() = " << pStack->stackLength() << endl;

	pStack->stackTraverse(true);

	Elem elem;
	pStack->pop(elem);
	cout << "pStack->pop(elem) = " << elem << endl;

	pStack->stackTraverse(false);

	pStack->clearStack();

	pStack->stackTraverse(true);

	delete pStack;

	return 0;
}
