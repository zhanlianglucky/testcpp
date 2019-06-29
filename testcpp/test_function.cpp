#include "pch.h"
#include <iostream>

// 构造函数（对象创建时执行）、拷贝构造函数、析构函数（对象删除时执行）、友元函数、内联函数

using namespace std;

class Person {
public:
	Person();
	Person(int a,float t);
	Person(Person &obj);//拷贝构造函数
	~Person();
	int age;
	float tall;
	int getId();//访问ID
	//类的友元函数是定义在类外部，但有权访问类的所有私有（private）成员和保护（protected）成员。
	//尽管友元函数的原型有在类的定义中出现过，但是友元函数并不是成员函数。
	friend int getWeight(Person person);

	//声明类 ZhanSan 的所有成员函数作为类 Person 的友元，需要在类 Person 的定义中放置如下声明：
	friend class ZhanSan;

private:
	int *id;
	int weight;

};

//友元类
class ZhanSan {
public:
	void printInfo(Person *person) {
		cout << "zhangsan print age: " << person->age << endl;
	};
};


//拷贝构造函数是一种特殊的构造函数，它在创建对象时，是使用同一类中之前创建的对象来初始化新创建的对象
//obj 是一个对象引用，该对象是用于初始化另一个对象的。
Person::Person(Person &obj) {
	cout << "拷贝函数Person(Person &obj)执行" << endl;
	id = new int;
	*id = *obj.id;
}

//实现构造函数并给属性赋值，以参数形式给属性赋值也是可以的
Person::Person(int a, float t) { 
	cout << "构造函数Person(int a, float t)执行！" << endl;
	age = a;
	tall = t;
	// 为指针分配内存
	id = new int;
	*id = 12;
};
Person::Person():age(12),tall(175.0){
	cout << "构造函数Person()执行！" << endl;
	// 为指针分配内存
	id = new int;
	*id = 13;
}

//实现析构函数
Person::~Person() {
	cout << "析构函数~Person()执行！" << endl;
	delete id;//用完释放指针
}

//获取ID的值
int Person::getId() {
	return *id;
}

//友元函数
int getWeight(Person person) {
	/* 因为 getWeight() 是 Person 的友元，它可以直接访问该类的任何成员 */
	person.weight = 60;
	return person.weight;
}


//内联函数 资料：https://www.runoob.com/cplusplus/cpp-inline-functions.html
/*
C++ 内联函数是通常与类一起使用。如果一个函数是内联的，那么在编译时，编译器会把该函数的代码副本放置在每个调用该函数的地方。

对内联函数进行任何修改，都需要重新编译函数的所有客户端，因为编译器需要重新更换一次所有的代码，否则将会继续使用旧的函数。

如果想把一个函数定义为内联函数，则需要在函数名前面放置关键字 inline，在调用函数之前需要对函数进行定义。如果已定义的函数多于一行，编译器会忽略 inline 限定符。

在类定义中的定义的函数都是内联函数，即使没有使用 inline 说明符。
使用注意：
		1.在内联函数内不允许使用循环语句和开关语句；
		2.内联函数的定义必须出现在内联函数第一次调用之前；
		3.类结构中所在的类说明内部定义的函数是内联函数。
		只有当函数只有 10 行甚至更少时才将其定义为内联函数.
*/
inline int add(int a, int b) {
	return a + b;
}


/*int main() {
	Person person;
	cout << "person.age = "<<person.age<< " : tall = "<< person.tall<< endl;
	cout << "person.id = " << person.getId()<< endl;
	cout << "pserson.weight = " << getWeight(person) << endl;

	ZhanSan zhangsan;//友元类
	zhangsan.printInfo(&person);

	cout << "12 + 13 = " << add(12,13) << endl;

}*/

