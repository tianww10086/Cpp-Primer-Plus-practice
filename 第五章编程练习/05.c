#include<iostream>
/*
	使用字符串数组，内容为月份。输入每月中的图书销量，存储在int数组中。
	计算一年的总销量
*/
int main() {   
	using namespace std;
	const char *month[12]{
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"Noverber",
		"December"
	};
	int sale_num[12];
	int total=0;
	cout<<"输入《C++ For Fools》一书的销量:\n";
	for(int i=0;i<12;i++){
		cout<<month[i]<<":";
		cin>>sale_num[i];
		total+=sale_num[i];
	}
	cout<<"这一年的总销量为："<<total;
}
