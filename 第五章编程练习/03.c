#include<iostream>
 /*用户输入一个数组，每次输入后，程序都将报告到目前为止，所输入的累计和*/
int main() {   
	using namespace std;
	int sum=0;
	int x;
	cout<<"请输入一个数字(输入0退出)：";
	cin>>x;
	while(x){
		sum+=x;
		cout<<"到目前为止，所有输入的累计和："<<sum<<endl;
		cout<<"请输入一个数字(输入0退出)：";
		cin>>x;
	}
}
