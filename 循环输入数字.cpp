#include<iostream>
#include<cctype>
#include<string>
using namespace std;
const int Max = 5;
int main() {  
	int golf[Max];
	cout<<"Please enter your golf scores.\n";
	cout<<"You must enter "<< Max<<" rounds.\n";
	string str[Max];
	//输入
	int i;
	int k=0;
	for(i=0;i<Max;i++){
		cout<<"round # "<<i+1<<": ";
		
		//当输入为非法字符时，即不为数字，执行次循环
		//仅当输入成功时，才跳过此循环
		while(!(cin>>golf[i])){
			cin.clear();  //重置cin;
		
			//获取缓冲区的字符
			cin>>str[k++];
			//循环结束后，输出警告
			cout<<"ERROR: Please enter a number: \n";
			cout<<"round # "<<i+1<<": ";
		}
		
		//正常输入的进入下一次循环
	}
	
	//计算总和
	double total = 0.0;
	for(i=0;i<Max;i++)
		total+=golf[i];
	
	//输出平均数
	cout<<total/Max<<" = average score "<<Max<<" rounds\n";
	cout<<"您输入的错误字符有：";
	for(int i=0 ;i<k;i++){
		cout<<str[i]<<" ";
	}
	return 0;
}
