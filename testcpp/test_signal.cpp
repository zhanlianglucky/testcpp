#include "pch.h"
#include <iostream>
#include <csignal>
#include <windows.h>

//�����źŴ���

using namespace std;

void test_signal();
void signal_operate(int);

/*int main() {
	test_signal();
	return 0;
}*/

void test_signal() {
	signal(SIGINT,signal_operate);//���ü�����  �� ctrl+C ִ���жϲ���

	int i = 0;
	while (++i) {
		cout << "go to sleep..." << endl;
		Sleep(1000);

		if (i == 2) {
			raise(SIGINT);//�������źŷ���  ����֮���źŹر�
		}
		
	}

}

void signal_operate(int signal) {
	cout << "interrupt signal: "<<signal<<" was received!" << endl;
	Sleep(3*1000);
	exit(signal);
}