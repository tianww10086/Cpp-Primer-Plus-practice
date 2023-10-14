#include<iostream>
#include<string>
#include <ostream>

#ifndef MYTIME0_H0
#define MYTIME0_H0
class Move {
	double x;
	double y;
public:
	Move();
	Move(double a = 0, double b = 0); /*设置x and y 的值*/
	void showmove() const;  /*输出Move的参数*/
	Move add(const Move& m); 
	void reset(double a = 0, double b = 0);
};

#endif