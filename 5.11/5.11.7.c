#define _CRT_SECURE_NO_WARNINGS 1

/*
	编写一个计算double的平方数并输出它的函数
*/
#include <stdio.h>
double double_pow(double x);
int main(){
	double_pow(5.5);
}
double double_pow(double x) {
	printf("%.2lf的平方数为%.2lf", x, x * x);
	return x * x;
}
