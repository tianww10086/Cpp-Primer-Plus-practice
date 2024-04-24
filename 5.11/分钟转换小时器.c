#define _CRT_SECURE_NO_WARNINGS 1

/* 把用分钟表示的时间转换成用小时和分钟表示的时间。通过while循环让用户重复输入值，知道用户输
入小于或等于0的值才停止循环*/
#include <stdio.h>
#define HOUR 60
int main(){
	int minute = 1;
	int hours = 0;
	int hours_minute = 0;
	do {
		printf("请输入分钟数\n");
		scanf("%d", &minute);
		hours = minute / 60;
		hours_minute = minute % 60;
		if (minute <= 0) {
			printf("程序结束\n");
			break;
		}
		printf("%02d:%02d\n", hours, hours_minute);
	} while (minute>0);

}
