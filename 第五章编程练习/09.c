#include<iostream>
#include<cstring>
#include<string>
/*
	修改上一题，使用string类对象，并使用关系运算符来进行比较测试
*/
using namespace std;

int main() {   
	string ch="hello";
	int i;
	// strcmp()函数，两者相等返回值为0；
	cout<<"请输入一个单词：\n";
	while(ch!="done"){
		cin>>ch;
		i++;
	}
	cout<<"您总共输入了"<<i-1<<"个单词";
}
