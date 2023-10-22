#pragma once
#ifndef STRING1_H_
#define STRING1_H_
#include<iostream>
using std::ostream;
using std::istream;
class String {
	char* str; //用于保存字符串
	int len;//保存字符串的长度
	static int num_stirngs; //用于保存字符串的个数
	static const int CINLIM = 80;
public:
	String(const char* s); //构造函数
	String();//default constructor
	String(const String&);  //copy constructor
	~String(); //destructor
	int length() const { return len; } 

	//重载运算符方法(:overloaded operator methods)
	String& operator=(const String&); //赋值string类的成员
	String& operator=(const char*); //赋值string类的字符串
	char& operator[](int i); //重载[]运算符
	const char& operator[](int i)const; //使这个函数无法修改调用者

	//重载运算符友元(overloaded operator friends)
	friend bool operator<(const String& st, const String& st2); //重载小于号
	friend bool operator>(const String& st, const String& st2); //重载大于号
	friend bool operator==(const String& st, const String& st2); //重载等于号
	friend ostream& operator<<(ostream& os, const String& st);
	friend istream& operator>>(istream& is, const String& st);

	//静态函数(static function)
	static int HowMany();
};
#endif
