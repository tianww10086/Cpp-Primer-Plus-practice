#define _CRT_SECURE_NO_WARNINGS 1
/* 提示用户输入一个整数，然后打印该数到比该数大10的所有整数，例如输入5，则打印5-15的整数
	要求打印各值之间用一个空格、制表符、或换行符分开
*/
#include <stdio.h>
int main(){
	int a = 0;
	printf("请输入一个整数：\n");
	scanf("%d", &a);

	for (int i = a; i<= a + 10; i++) {
		printf("%d ", i);
	}

	return 0;
}
