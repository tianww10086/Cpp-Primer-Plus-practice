#include<iostream>
#include <array>
using namespace std;
template<class T1>
auto max5(array<T1, 5>& A) -> decltype(A[0]);
int main() {
	array<int,5> ar_i{ 1,2,3,4,5 };
	array<double,5> ar_b{ 1.2,1.3,1.4,1.5 };
	cout << max5(ar_i) << endl;
	cout << max5(ar_b) << endl;
}

template<class T1>
auto max5( array<T1,5>&A) -> decltype(A[0]) {
	 
	typedef decltype(A[0]) arr_i;
	arr_i max = A[0];
	for (int i = 0; i < 5; i++) {
		if (max < A[i]) {
			max = A[i];
		}
	}

	return max;
}
