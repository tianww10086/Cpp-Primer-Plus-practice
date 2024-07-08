#include<iostream>
using namespace std;
int main() {
	unsigned int tvarp = 0;
	cout << "你有多少tvarps: ";
	double tax = 0;

	while (cin>>tvarp) {
		if (tvarp < 5000) {
			tax = 0;
		}
		else if (tvarp >= 5001 && tvarp <= 15000) {
			tax = (tvarp - 5000) * 0.10;
		}
		else if (tvarp >= 15001 && tvarp < 35000) {
			tax = (5000 * 0.0 + 10000 * 0.1) + (tvarp - 15000) * 0.15;
		}
		else if (tvarp >= 35000) {
			tax = (5000 * 0.0 + 10000 * 0.1 + 20000 * 0.15) + (tvarp - 35000) * 0.2;
		}

		cout << "所得税为" << tax << " tvarps" << endl;
		cout << "继续输入：";
	}

  return 0;
}

