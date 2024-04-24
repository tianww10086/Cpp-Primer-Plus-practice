#define _CRT_SECURE_NO_WARNINGS 1

/*
	提示用户输入天数，将其转换为周数和天数。例如，用户输入18，则转换成2周4天。以下面的格式显示结果
	18 days are 2 weeks, 4days.
	输入非正值时循环结束。
*/
#include <stdio.h>
int main(){
	int day;
	int week;
	int week_days;
	do {
		printf("Please enter your days：");
		scanf("%d", &day);
		week = day / 7;
		week_days = day % 7;
		printf("%d days are %d weeks, %d days\n", day, week, week_days);
	} while (day > 0);

	return 0;
}

