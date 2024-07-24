#include<iostream>
#include"golf.h"
#include<cstring>
using std::cout;
using std::cin;
using std::endl;
void setgolf(golf& g, const char* name, int hc) {
	//将姓名存入到g.name中
	int i = 0;
	while (name[i] != '\0') {
		g.fullname[i] = name[i];
		i++;
	}
	g.fullname[i] = '\0';

	g.handicap = hc;
	
}
int setgolf(golf& g) {
	cout << "请输入姓名：";
	cin.getline(g.fullname, len);

	//判断字符串是否为空
	if (g.fullname[0]=='\0') {
		cout << "姓名为空，程序结束" << endl;
		return 0;
	}
	cout << "请输入等级：";
	cin >> g.handicap;
	cin.get(); //清除换行符
	return 1;
}
void handicap(golf& g, int hc) {
	g.handicap = hc;
}
void showgolf(const golf& g) {
	cout << "fullname = " << g.fullname << ", hanicap = " << g.handicap<<endl;
}
