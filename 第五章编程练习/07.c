#include<iostream>
/*
	创建一个为car的结构，它有如下信息：生产商、生产年份。
	程序向用户询问有多少辆汽车。随后使用new来创建一个由数量相应的car结构组成的动态数组。
	程序提示用户输入每辆车的生产商和年份信息。最后，程序将显示每个结构的内容。
*/
using namespace std;
struct car{
	string producers; //生产商
	int produce_year; //生产年份
};
int main() {   
	int car_num=0;
	cout<<"你有多少辆车？";
	(cin>>car_num).get();
	
	car *car_ary = new car[car_num];

	for(int i=0;i<car_num;i++){
		cout<<"第"<< i+1<<"辆车的信息\n";
		cout<<"生产商:";
		getline(cin,car_ary[i].producers);
		cout<<"生产信息:";
		cin>>car_ary[i].produce_year;
		cin.get();
	}
	
	cout<<"这是您车辆的信息：\n";
	
	for(int i=0;i<car_num;i++){
		cout<<"生产商："<<car_ary[i].producers<<" "<<"生产年份: "<<car_ary[i].produce_year<<endl;
	}

	delete[] car_ary;
}
