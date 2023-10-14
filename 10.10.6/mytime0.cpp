#include<iostream>
#include "head.h"
//提供头文件的实现
/*构造函数*/
Move::Move() {
	x = 0;
	y = 0;
}
Move::Move(double a, double b) {
	x = a;
	y = b;
}
void Move::showmove() const {
	std::cout << "x = " << x << ", " << "y = " << y << std::endl;
}

Move Move::add(const Move& m)  {
	x += m.x; //原题意为将m的x添加到调用对象的x中，但是函数又写了const，不允许修改,所以我把const删掉了
	return m;
}

void Move::reset(double a, double b) {
	x = a;
	y = b;
}