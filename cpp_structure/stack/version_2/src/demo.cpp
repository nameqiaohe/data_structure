/*####################################################
# File Name: demo.cpp
# Author: xxx
# Email: xxx@126.com
# Create Time: 2017-05-31 17:28:22
# Last Modified: 2017-05-31 23:37:10
####################################################*/
#include "my_stack.hpp"

int main(int argc, char *argv[]){
	MyStack *pStack = new MyStack(5);

	pStack->push(Coordinate(1, 2));
	pStack->push(Coordinate(2, 3));
	pStack->push(Coordinate(3, 4));
	pStack->push(Coordinate(4, 5));
	pStack->push(Coordinate(5, 6));

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
	//cout << "pStack->pop(elem) = " << elem.printCoordinate() << endl;
	elem.printCoordinate();
	cout << "pStack->stackLength() = " << pStack->stackLength() << endl;

	pStack->stackTraverse(false);

	pStack->clearStack();

	pStack->stackTraverse(true);

	delete pStack;

	return 0;
}
