#include<iostream>
#include<cstring>
/*
	使用char数组和循环每次读取一个单词，直达输入done为止，统计用户总共输入了多少单词(不包括done)
*/
using namespace std;

int main() {   
	char ch[20]="hello";
	int i;
	// strcmp()函数，两者相等返回值为0；
	cout<<"请输入一个单词：\n";
	while(strcmp(ch,"done")){
		cin>>ch;
		i++;
	}
	cout<<"您总共输入了"<<i-1<<"个单词";
}
