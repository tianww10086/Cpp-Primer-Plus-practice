#define _CRT_SECURE_NO_WARNINGS 1

/*
	计算总和
*/
#include <stdio.h>
int main(){
	int count, sum;

	count = 0;
	sum = 0;
	int x = 0;
	printf("你想工作多少天?\n");
	scanf("%d",&x);
	while (count++< x) {
		sum = sum + count;
	}
	printf("sum = %d\n", sum);
}

