#include "pch.h"
#include <iostream>
#include <cstring>

using namespace std;

//new��delete ʹ��  �ο����ϣ�https://www.runoob.com/cplusplus/cpp-dynamic-memory.html
//ʹ�� new �������Ϊ������������Ͷ�̬�����ڴ�

void test_new();
void test_obj();

/*int main() {
	test_obj();
}*/

class Car {
public:
	Car() {
		cout << "���캯��ִ�У�" << endl;
	}
	~Car() {
		cout << "��������ִ�У�" << endl;
	}
	int width, height;
};

void test_obj() {
	Car * p = new Car[3];
	
	/*
	delete p;
	��������
		���캯��ִ�У�
		���캯��ִ�У�
		���캯��ִ�У�
		��������ִ�У�
	*/


	delete[] p;
	/*
	��������
		���캯��ִ�У�
		���캯��ִ�У�
		���캯��ִ�У�
		��������ִ�У�
		��������ִ�У�
		��������ִ�У�
	*/

}

//���龡����Ҫʹ�� malloc() ������new �� malloc() ������ȣ�����Ҫ���ŵ��ǣ�new ��ֻ�Ƿ������ڴ棬���������˶���
void test_new() {
	int * p = new int();
	if (!p) { //����ѿռ�Ҫ�ж����Ƿ��ڴ����
		cout <<" out of memory error !"<< endl;
		exit(0);
	}

	*p = 12;
	cout << "*p = " << *p << endl;

	delete p;//�ͷ��ڴ�


	//����
	//char charP[20];
	//strcpy_s(charP,"zhang san");

	char * cp = new char[20];
	
	delete [] cp;//�ͷ�����

}