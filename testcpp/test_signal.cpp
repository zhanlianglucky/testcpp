#include "pch.h"
#include <iostream>
#include <csignal>
#include <windows.h>

//测试信号处理

using namespace std;

void test_signal();
void signal_operate(int);

/*int main() {
	test_signal();
	return 0;
}*/

void test_signal() {
	signal(SIGINT,signal_operate);//设置监听器  按 ctrl+C 执行中断操作

	int i = 0;
	while (++i) {
		cout << "go to sleep..." << endl;
		Sleep(1000);

		if (i == 2) {
			raise(SIGINT);//主动发信号方法  三次之后发信号关闭
		}
		
	}

}

void signal_operate(int signal) {
	cout << "interrupt signal: "<<signal<<" was received!" << endl;
	Sleep(3*1000);
	exit(signal);
}