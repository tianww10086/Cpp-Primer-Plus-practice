#include<cstring>
#include"string1.h"
using std::cin;
using std::cout;

int String::num_stirngs = 0;

int String::HowMany() {
	return num_stirngs;
}

//class methods(类方法)
String::String(const char* s) {  //从C字符串构建字符串(construct String from C string)
	len = std::strlen(s); //计算传入的字符串的长度
	str = new char[len + 1];  //用C++方法给str分配空间
	std::strcpy(str, s); //把s里的字符串复制到str里。
	num_stirngs++; //字符串个数+1
}

String::String() { //默认构造函数(defalut constructor)
	len = 4;
	str = new char[1];
	str[0] = '\0';
	num_stirngs;
}


String::String(const String& st) {
	num_stirngs++;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
}//copy constructor

String::~String() {
	--num_stirngs;
	delete[] str;
}


//overloaded operator methods(重载运算符方法)
String& String::operator=(const String& st) {
	//如果调用对象和被调用对象的地址一样，则返回调用对象
	if (this == &st) {
		return *this;
	}
	delete[]str; //先清除掉调用对象的str内存
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
	return *this;
}//把st的元素赋值给调用对象

String& String::operator=(const char* s) {
	delete[] str;
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	return *this;
}

char& String::operator[](int i) {
	return str[i];
}
const char& String::operator[](int i)const {
	return str[i];
}


//overloaded operator friends

bool operator<(const String& st1, const String& st2) {
	//strcmp(参数1,参数2),若参数1位于第二个参数前,该方法返回一个负值,代表参数1<参数2
	return (std::strcmp(st1.str, st2.str) < 0);  
}

bool operator>(const String& st1, const String& st2) {
	return st2 < st1; //若st2<st1,返回值为真，则代表st1大于st2
}

bool operator==(const String& st1, const String& st2){
	return (std::strcmp(st1.str, st2.str) == 0);
}

ostream& operator<<(ostream& os, const String& st) {
	os << st.str;
	return os;
}

istream& operator>>(istream& is,String& st) {
	char temp[80]; //创建一个容量大小为80的字符串
	is.get(temp,80); //从键盘上获取一个最大为80的字符串
	if (is)
		st= temp;
	while (is && is.get() != '\n') {
		continue;
	}

	return is;
}