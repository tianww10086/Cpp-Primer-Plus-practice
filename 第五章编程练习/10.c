#include<iostream>
/*
	要求用户输入一个值，指出要显示多少行，程序将显示行数相应的星号
	其中第一行包括一个星号，第二行包括两个信号，以此类推，第一行包含字符
	数等于用户指定的行数，在星号不够的情况下，在星号前面加上句点。例
	5row
	....*
	...**
	..***
	.****
	*****
*/
using namespace std;

int main() {   
	int row=0;
	cout<<"请输入行数"<<endl;
	cin>>row;
	
	for(int i=1;i<=row;i++){
		for(int k=row;k>i;k--){
			cout<<".";
		}
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
