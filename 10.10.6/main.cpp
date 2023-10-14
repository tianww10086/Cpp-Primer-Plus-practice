#include<stdio.h>
#include "head.h"
#include<iostream>
int main() {
	Move S(13.5,14.5); //调用构造函数
	S.showmove();
	S.reset(88.99, 99.88);
	S.showmove();
	Move S1{ 8.9,9.8 };
	S1.add(S);
	S1.showmove();
}
