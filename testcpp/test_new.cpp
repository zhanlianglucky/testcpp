#include "pch.h"
#include <iostream>
#include <cstring>

using namespace std;

//new，delete 使用  参考资料：https://www.runoob.com/cplusplus/cpp-dynamic-memory.html
//使用 new 运算符来为任意的数据类型动态分配内存

void test_new();
void test_obj();

/*int main() {
	test_obj();
}*/

class Car {
public:
	Car() {
		cout << "构造函数执行！" << endl;
	}
	~Car() {
		cout << "析构函数执行！" << endl;
	}
	int width, height;
};

void test_obj() {
	Car * p = new Car[3];
	
	/*
	delete p;
	输出结果：
		构造函数执行！
		构造函数执行！
		构造函数执行！
		析构函数执行！
	*/


	delete[] p;
	/*
	输出结果：
		构造函数执行！
		构造函数执行！
		构造函数执行！
		析构函数执行！
		析构函数执行！
		析构函数执行！
	*/

}

//建议尽量不要使用 malloc() 函数。new 与 malloc() 函数相比，其主要的优点是，new 不只是分配了内存，它还创建了对象。
void test_new() {
	int * p = new int();
	if (!p) { //分配堆空间要判断下是否内存充足
		cout <<" out of memory error !"<< endl;
		exit(0);
	}

	*p = 12;
	cout << "*p = " << *p << endl;

	delete p;//释放内存


	//数组
	//char charP[20];
	//strcpy_s(charP,"zhang san");

	char * cp = new char[20];
	
	delete [] cp;//释放数组

}