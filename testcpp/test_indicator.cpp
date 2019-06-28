// testcpp.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//指针 数组 操作

#include "pch.h"
#include <iostream>

using namespace std;

//声明函数
void test();
void test2();

int main()
{
	test2();
}

//指针操作字符串列表
void test2() {
	const char * p[3] = {"zhang san","li si","wang wu"};
	for (int i = 0; i < 3;i++) {
		cout << p[i] << endl;
	}
}


//使用指针遍历数组
void test() {
	int max = 3;
	int arr[3] = { 1,2,3 };
	int *p;
	p = &arr[0];
	for (int i = 0; i < max;i++) {
		cout << *p<<" ";
		p++;
	}
	cout << "sizeof(p) = "<<sizeof(p) << endl;
	cout << *arr << endl;//取值

	*(arr + 1) = 6;//修改数组值
	cout << *(arr + 1) << endl;//取值

	for (int i = 0; i < max;i++) {
		cout << "*（arr+" << i << "）=" << *(arr + i) <<endl ;
	}

}






// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
