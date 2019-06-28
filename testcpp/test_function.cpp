#include "pch.h"
#include <iostream>

// 构造函数（对象创建时执行）和析构函数（对象删除时执行）

using namespace std;

class Person {
public:
	Person();
	Person(int a,float t);
	~Person();
	int age;
	float tall;
};

//实现构造函数并给属性赋值，以参数形式给属性赋值也是可以的
Person::Person(int a, float t) { 
	age = a;
	tall = t;
};
Person::Person():age(12),tall(175.0) {
	cout << "构造函数Person()执行！" << endl;
}

//实现析构函数
Person::~Person() {
	cout << "析构函数~Person()执行！" << endl;
}

int main() {
	Person person;
	cout << "person.age = "<<person.age<< " : tall = "<< person.tall<< endl;
}

