#include<iostream>
/* A以%10的单利投资了100元，每年的利润是投资额的%10，
	B以%5的复利投资了100元，每年的利润是当前存款的%5
	计算多少年后，B的投资超过了A
*/
int main() {   
	using namespace std;
	double A  =100.0;
	double B = 100.0;
	int year=0;
	while(1){
		A += 100*0.1;
		B += B*0.05;
		year++;
		cout<<"第"<<year<<"年：" <<"A存款有："<<A<<"\t"
		<<"B存款有: "<<B<<endl;
		if(A<B){
			break;
		}
	}
	cout<<"在第"<<year<<"年后，B投资价值超过了A的投资价值";
}
