#include "pch.h"
#include <iostream>

//参考资料：https://www.runoob.com/cplusplus/cpp-class-access-modifiers.html
//
// 主题：类和派生类
//

using namespace std;

//类
class Product {
public:
	char goods_name[20];
	float goods_price;//属性
	float add_price() {//函数
		return goods_price += 10;
	};
	float sub_price();
	void set_time(char *ctime);//对私有变量进行get set操作
	char* get_time();
private:// 私有变量 对象不能访问
	char time[20];
protected://受保护变量 对象不可访问
	int num;
};


//派生类（子类）不可访问父类被 private修饰的[变量]和[方法],public和protected不受影响
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


//在类的外部使用范围解析运算符 :: 定义函数
//在 :: 运算符之前必须使用类名。调用成员函数是在对象上使用点运算符（.）
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




