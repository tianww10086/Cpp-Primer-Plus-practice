#include<iostream>
/* 输入两个整数，计算并输出这两个整数之间所有整数的和，如输入的是2和9，则程序输出所有整数和为44 */
int main() {   
	using namespace std;
	int sum=0;
	int start =0;
	int end = 0;
	cout<<"请输入开始数：";
	cin>>start;
	cout<<"请输入结束数：";
	cin>>end;
	
	for(int i=start;i<=end;i++){
		sum +=i;
	}
	cout<<"整数和为："<<sum;
	return 0;
}
