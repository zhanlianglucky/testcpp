#include "pch.h"
#include <iostream>

//静态static 修饰的属性/函数 

/*
如果把函数成员声明为静态的，就可以把函数与类的任何特定对象独立开来。静态成员函数即使在类对象不存在的情况下也能被调用，静态函数只要使用类名加范围解析运算符 :: 就可以访问。
静态成员函数只能访问静态成员数据、其他静态成员函数和类外部的其他函数。
静态成员函数有一个类范围，他们不能访问类的 this 指针。您可以使用静态成员函数来判断类的某些对象是否已被创建。
*/

using namespace std;

class Box {
public:
	static int width;
	static int add(int a ,int b) {
		return a + b;
	}
};

int Box::width = 12;//静态属性使用方式

/*int main() {
	cout <<"Box'x width = "<< Box::width << endl;
	cout << "12 + 13 = " << Box::add(12,13) << endl;//静态函数调用方式
}*/

