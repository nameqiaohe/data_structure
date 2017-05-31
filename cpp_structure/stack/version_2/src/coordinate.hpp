/*####################################################
# File Name: coordinate.hpp
# Author: xxx
# Email: xxx@126.com
# Create Time: 2017-05-31 23:06:07
# Last Modified: 2017-05-31 23:20:03
####################################################*/
#ifndef COORDINATE_H
#define COORDINATE_H

class Coordinate{
public:
	//默认构造函数？？？
	//通过 new来申请内存，需要给参数赋默认值？？？
	Coordinate(int x = 0, int y = 0);

	//当类中的数据类型设计指针时，可能需要添加拷贝构造函数

	void printCoordinate();

private:
	int m_x;
	int m_y;
};

#endif
