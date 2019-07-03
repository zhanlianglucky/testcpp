#include "pch.h"
#include <iostream>
#include <vector>
#include <list>

// 标准模板
using namespace std;

void test_stl();//vector
void test_list();//列表

int main() {
	test_stl();
	test_list();
	return 0;
}

void test_list() {
	list<int> ls;
	int size = 5;
	for (int i = 0; i < size; i++) {
		ls.push_back(i*3);
	}

	cout << "list.size() = " << ls.size() << endl;
	list<int>::iterator it = ls.begin();
	while (it != ls.end()) {
		cout << *it << endl;
		it++;
	}
	cout << "====================================" << endl;
	
}

void test_stl() {
	vector<int> vec;
	int size = 5;

	//向量插入值
	for (int i = 0; i < size;i++) {
		vec.push_back(i*7);
	}
	cout << "vector.size() = " << vec.size()<<" ; 容量 vector.capacity() = "<<vec.capacity()<< endl;

	cout << "====================================" << endl;
	//访问向量值
	for (int i = 0; i < vec.size();i++) {
		cout << "vector["<<i<<"] = "<<vec[i]<< endl;
	}
	cout << "====================================" << endl;

	//使用迭代器 iterator 访问参数
	cout << "iterator 遍历结果：" << endl;
	vector<int>::iterator ite = vec.begin();
	while (ite != vec.end()) {
		cout << "iterator: " <<*ite<< endl;
		ite++;
	}
	cout << "====================================" << endl;

}