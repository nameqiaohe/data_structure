/*####################################################
# File Name: coordinate.cpp
# Author: xxx
# Email: xxx@126.com
# Create Time: 2017-05-31 23:07:30
# Last Modified: 2017-05-31 23:25:27
####################################################*/
#include "coordinate.hpp"
#include <iostream>

using namespace std;

Coordinate::Coordinate(int x, int y){
	m_x = x;
	m_y = y;
}

void Coordinate::printCoordinate(){
	cout << "(" << m_x << "," << m_y << ")" << endl;
}

