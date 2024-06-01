#include<iostream>
/*
	修改编程练习五，这次使用一个二维数组来存储输入——3年中每个月的销售量，程序输出每年销售量以及三年总销量
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
	
	int sale_num[3][12];
	int total=0;
	int year_total=0;
	for(int i=0;i<3;i++){
		cout<<"请输入《C++ For Fools》一书的第"<<i+1<<"年的销量"<<endl;
		for(int j=0;j<12;j++){
			cout<<month[j]<<":";
			cin>>sale_num[i][j];
			year_total+=sale_num[i][j];
		}
		cout<<"第"<<i+1<<"年的销量为:"<<year_total<<endl;
		total+=year_total;
		year_total=0;
	}
	cout<<"三年总销量为："<<total;
}
