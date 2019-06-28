#include "pch.h"
#include <iostream>
#include <cstring>

using namespace std;

//普通方式
struct Person {
	char name[20];
	int age;
};

//别名方式
typedef struct Device {
	char name[20];
	int type;

}Device;

void test();
void print_device(Device device);
void print_person(Person * person);


/*int main() {
	test();
}*/


void test() {

	Person person;
	strcpy_s(person.name,"zhang san");
	person.age = 30;
	print_person(&person);

	Device device;
	strcpy_s(device.name,"AT601");
	device.type = 1;
	print_device(device);

}

void print_person(Person * person) {
	cout << "pserson name: " << person->name << endl;
	cout << "person age: " << person->age << endl;
	cout << "============================" << endl;
}

void print_device(Device device) {
	cout << "device name: " << device.name << endl;
	cout << "device type: " << device.type << endl;
	cout << "============================" << endl;
}
