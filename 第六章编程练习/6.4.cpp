#include<iostream>

struct bop {
	char fullname[20];
	char title[20];
	char bopname[20];
	int preference;
};
void Show_st(bop);
void menu();
using namespace std;
int main() {
	bop arr[3]{
		{"TIAN","高级","T",1},
		{"WEI","中级","W",2},
		{"We","初级","E",3}
	};

	Show_st(arr[0]);
	Show_st(arr[1]);
	Show_st(arr[2]);

	char ch;

	menu();
	cout << "\nselect a option:";
	cin >> ch;
	while (ch!='q'){
		switch (ch) {
		case 'a':
			for (int i = 0; i < 3; i++) {
				cout << arr[i].fullname<<"\n";
			}
			break;
		case 'b':
			for (int i = 0; i < 3; i++) {
				cout << arr[i].title << endl;
			}

			break;
		case 'c':
			for (int i = 0; i < 3; i++) {
				cout << arr[i].bopname<<endl;
			}
			break;
		case 'd':
			for (int i = 0; i < 3; i++) {
				cout << arr[i].preference << endl;
			}
			break;
		default:
			cout << "请输入正确的代码!" << endl;
		}
		cout << "\nselect a option:";
		cin >> ch;
	}

	cout << "已退出" << endl;
}

void Show_st(bop ar) {
	
	cout << "real name: " << ar.fullname << endl;
	cout << "job title: " << ar.title << endl;
	cout << "secret name: " << ar.bopname << endl;
	cout << " preference:" << ar.preference << endl;
	cout << "-------------" << endl;

}

void menu() {
	cout << "a. display by name\tb.display by title" << endl;
	cout << "c.display by bopname\td.display by preference" << endl;
	cout << "q.quit";
}
