#include "pch.h"
#include <iostream>
#include <thread>
#include <mutex>

#define THREAD_NUM 5

//线程
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
	mt.lock();//线程锁定
	cout << a << " + " << b << " = " << a + b << endl;
	mt.unlock();//释放锁
	return a + b;
}

/*
join（）主线程等待子线程结束方可执行下一步（串行），
detach（）独立于主线程并发执行，主线程后续代码段无需等待(并行)。
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
创建互斥量管理对象时，它试图给给定mutex加锁。当程序离开互斥量管理对象的作用域时，互斥量管理对象会析构并且并释放mutex。
所以我们则不需要担心程序跳出或产生异常引发的死锁了。
对于需要加锁的代码段，可以通过{}括起来形成一个作用域
*/
void thread_handler() {
	lock_guard<mutex> lock_guard(mt);
	cout << "thread handler!" << endl;
}


