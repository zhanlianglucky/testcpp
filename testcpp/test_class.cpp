#include "pch.h"
#include <iostream>

//�ο����ϣ�https://www.runoob.com/cplusplus/cpp-class-access-modifiers.html
//
// ���⣺���������
//

using namespace std;

//��
class Product {
public:
	char goods_name[20];
	float goods_price;//����
	float add_price() {//����
		return goods_price += 10;
	};
	float sub_price();
	void set_time(char *ctime);//��˽�б�������get set����
	char* get_time();
private:// ˽�б��� �����ܷ���
	char time[20];
protected://�ܱ������� ���󲻿ɷ���
	int num;
};


//�����ࣨ���ࣩ���ɷ��ʸ��౻ private���ε�[����]��[����],public��protected����Ӱ��
class Iphone :Product {
public:
	void print_info() {
		strcpy_s(goods_name,"iphone");
		goods_price = 10000.00;
		num = 12;
		add_price();

		cout << "iphone name:" <<goods_name << endl;
		cout << "iphone price:" <<goods_price << endl;
	}
};


//������ⲿʹ�÷�Χ��������� :: ���庯��
//�� :: �����֮ǰ����ʹ�����������ó�Ա�������ڶ�����ʹ�õ��������.��
float Product::sub_price() {
	return goods_price -= 5;
}

void Product::set_time(char *ctime) {
	strcpy_s(time,ctime);
}

char* Product::get_time() {
	return time;
}


void test_class();


///////////////////////////////////////////
int main() {
	test_class();
}
///////////////////////////////////////////



void test_class() {
	Product product;

	strcpy_s(product.goods_name, "AT601");
	product.goods_price = 100.0;

	cout << "product name:" << product.goods_name << endl;
	cout << "product price:" << product.goods_price << endl;
	cout << "product addPrice: " << product.add_price() << endl;
	cout << "product subPrice: " << product.sub_price() << endl;

	char str[20] = {"12:12"};
	product.set_time(str);
	cout << product.get_time() << endl;

	cout << "==============================" << endl;
	Iphone iphone;
	iphone.print_info();
}




