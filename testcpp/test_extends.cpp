#include "pch.h"
#include <iostream>

//�������̳У���C++֧�ֶ�̳�

using namespace std;

class Animal {
public:
	int age;
};

class Person {
public:
	char name[20];
};

//��̳�
class Worker:public Animal,public Person {
public:
		void print() {
		age = 12;
		strcpy_s(name,"zhangsan");
		cout << name << age << endl;
	};
};

class Dog :public Animal {
public:
	char dogName[20];
};

class HaShiQi :public Dog {
public:
	void print() {
		age = 2;
		strcpy_s(dogName,"er ha");
		cout << dogName << age << endl;
	};
};


/*int main() {
	Worker worker;
	worker.print();

	HaShiQi hashiqi;
	hashiqi.print();
}*/