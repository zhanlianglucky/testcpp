#include "pch.h"
#include <iostream>
#include <thread>


#define THREAD_NUM 5

//Ïß³Ì
using namespace std;

void test_thread();
void thread_handler(void * did);

int main() {
	test_thread();
	return 0;
}


void test_thread() {
	//main_thread_id = thread::get_id;
	

}

void thread_handler(void * did) {


}


