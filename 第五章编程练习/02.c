#include<iostream>
#include<array>
const int ArySize = 100;
/*使用array对象和long double 重写程序清单5.4,并计算100！的值
  程序清单5.4是一个计算阶乘的程序，只是将存储变量的类型变为array
*/
int main() {   
	using namespace std;
	array<long double,ArySize> ary;
	ary[0]=1;
	
	long double jiec = 1;
	
	for(int i=1;i<=ArySize;i++){
		jiec = jiec *i;
		ary[i]=jiec;
	}
	
	for(int i=0;i<ArySize;i++){
		cout<<i<<"!: "<<ary[i]<<endl;
	}
}
