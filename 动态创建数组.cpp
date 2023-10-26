
//创建动态数组
#include<iostream>
#include<ctime>
void sum_arr(int a[], int n);
using namespace std;
int main() {
	int x;
	cout << "创建动态数组:";
	cin >> x;
	int* arr = new int[x];
	sum_arr(arr, x);
	for (int i = 0; i < x; i++) {
		cout << arr[i] << " ";
	}
}
void sum_arr(int a[], int n) {
	for (int i = 0; i < n; i++) {
		a[i] = i + 1;
	}
}
