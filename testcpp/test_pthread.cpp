#include "pch.h"
#include <iostream>
#include <thread>
#include <mutex>

#define THREAD_NUM 5

//�߳�
using namespace std;

void test_thread();
void thread_handler();
int test_add(int a,int b);
mutex mt;


/*int main() {
	test_thread();
	return 0;
}*/

int test_add(int a,int b) {
	mt.lock();//�߳�����
	cout << a << " + " << b << " = " << a + b << endl;
	mt.unlock();//�ͷ���
	return a + b;
}

/*
join�������̵߳ȴ����߳̽�������ִ����һ�������У���
detach�������������̲߳���ִ�У����̺߳������������ȴ�(����)��
*/
void test_thread() {
	thread t(thread_handler);
	thread t1(test_add,12,13);

	/*t.join();
	t1.join();*/

	t.detach();
	t1.detach();
	
	cout << "main thread" << endl;

}

/*
�����������������ʱ������ͼ������mutex�������������뿪��������������������ʱ�����������������������Ҳ��ͷ�mutex��
������������Ҫ���ĳ�������������쳣�����������ˡ�
������Ҫ�����Ĵ���Σ�����ͨ��{}�������γ�һ��������
*/
void thread_handler() {
	lock_guard<mutex> lock_guard(mt);
	cout << "thread handler!" << endl;
}


