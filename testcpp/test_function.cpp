#include "pch.h"
#include <iostream>

// ���캯�������󴴽�ʱִ�У�����������������ɾ��ʱִ�У�

using namespace std;

class Person {
public:
	Person();
	Person(int a,float t);
	~Person();
	int age;
	float tall;
};

//ʵ�ֹ��캯���������Ը�ֵ���Բ�����ʽ�����Ը�ֵҲ�ǿ��Ե�
Person::Person(int a, float t) { 
	age = a;
	tall = t;
};
Person::Person():age(12),tall(175.0) {
	cout << "���캯��Person()ִ�У�" << endl;
}

//ʵ����������
Person::~Person() {
	cout << "��������~Person()ִ�У�" << endl;
}

int main() {
	Person person;
	cout << "person.age = "<<person.age<< " : tall = "<< person.tall<< endl;
}

