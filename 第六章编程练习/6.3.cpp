#include<iostream>
#include<array>
using namespace std;
void menu();
/*编写一个菜单选项，有4个选项，还有1个退出选项*/
int main() {
	menu();

	char ch;

	cin >> ch;

	switch (ch) {
	case 'A':
		cout << "你出生在一个中产阶级的家庭，从小你的成绩在班里就在"
			<< "中上游，父母对你抱有很大的期望。在你的努力下，你考上\n"
			"国内顶尖的医科大学。工作后更是一帆风顺，不到30岁就评上了高级职称";
		break;
	case 'B':
		cout << "你是一个老师，没了，懒得写。";
		break;
	case 'C':
		cout << "你出生于底层家庭，从小叛逆，在中专毕业后，觉得进厂没意思，于是开始学习起了计算机\n，在你的"
			"努力下，你一步步往上爬，从大专到本科，再到研究生。期间积极参加比赛。毕业获得大厂offer，成功总上人生巅峰";
		break;
	case 'D':
		cout << "你是一个公务员，没了，懒得写";
		break;
	case 'Q':
		cout << "已退出人生选择系统....请珍惜您的人生。";

	}
}

void menu() {
	cout << "A: 医生 \tB:老师 \nC:程序员\tD:公务员\nQ:退出\n";
	cout << "请选择你的人生:";

}
