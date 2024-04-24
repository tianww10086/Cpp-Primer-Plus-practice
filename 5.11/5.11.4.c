#define _CRT_SECURE_NO_WARNINGS 1

/*
	提示用户输入一个身高(单位：厘米)，并分别以厘米和英寸显示该值。
	根据百度 厘米 = 英寸*0.3937  英寸= 厘米*2.54
*/
#include <stdio.h>
int main(){
	double height = 0;
	double inches = 0;
	do {
		printf("Enter a height in centimeters(<=0 to quit):");
		scanf("%lf", &height);
		inches = height * 2.54;
		printf("%.1lf cm = %.1lf inches\n", height, inches);
	} while (height>0);

	return 0;
}

