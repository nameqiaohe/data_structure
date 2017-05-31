/*####################################################
# File Name: coordinate.cpp
# Author: xxx
# Email: xxx@126.com
# Create Time: 2017-05-31 23:07:30
# Last Modified: 2017-06-01 00:05:52
####################################################*/
#include "coordinate.hpp"
#include <iostream>

using namespace std;

ostream &operator<<(ostream &out, Coordinate &coor){
	out << "(" << coor.m_x << "," << coor.m_y << ")" << endl;

	return out;
}

Coordinate::Coordinate(int x, int y){
	m_x = x;
	m_y = y;
}

void Coordinate::printCoordinate(){
	cout << "(" << m_x << "," << m_y << ")" << endl;
}

