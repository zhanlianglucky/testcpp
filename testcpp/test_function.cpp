#include "pch.h"
#include <iostream>

// ���캯�������󴴽�ʱִ�У����������캯������������������ɾ��ʱִ�У�����Ԫ��������������

using namespace std;

class Person {
public:
	Person();
	Person(int a,float t);
	Person(Person &obj);//�������캯��
	~Person();
	int age;
	float tall;
	int getId();//����ID
	//�����Ԫ�����Ƕ��������ⲿ������Ȩ�����������˽�У�private����Ա�ͱ�����protected����Ա��
	//������Ԫ������ԭ��������Ķ����г��ֹ���������Ԫ���������ǳ�Ա������
	friend int getWeight(Person person);

	//������ ZhanSan �����г�Ա������Ϊ�� Person ����Ԫ����Ҫ���� Person �Ķ����з�������������
	friend class ZhanSan;

private:
	int *id;
	int weight;

};

//��Ԫ��
class ZhanSan {
public:
	void printInfo(Person *person) {
		cout << "zhangsan print age: " << person->age << endl;
	};
};


//�������캯����һ������Ĺ��캯�������ڴ�������ʱ����ʹ��ͬһ����֮ǰ�����Ķ�������ʼ���´����Ķ���
//obj ��һ���������ã��ö��������ڳ�ʼ����һ������ġ�
Person::Person(Person &obj) {
	cout << "��������Person(Person &obj)ִ��" << endl;
	id = new int;
	*id = *obj.id;
}

//ʵ�ֹ��캯���������Ը�ֵ���Բ�����ʽ�����Ը�ֵҲ�ǿ��Ե�
Person::Person(int a, float t) { 
	cout << "���캯��Person(int a, float t)ִ�У�" << endl;
	age = a;
	tall = t;
	// Ϊָ������ڴ�
	id = new int;
	*id = 12;
};
Person::Person():age(12),tall(175.0){
	cout << "���캯��Person()ִ�У�" << endl;
	// Ϊָ������ڴ�
	id = new int;
	*id = 13;
}

//ʵ����������
Person::~Person() {
	cout << "��������~Person()ִ�У�" << endl;
	delete id;//�����ͷ�ָ��
}

//��ȡID��ֵ
int Person::getId() {
	return *id;
}

//��Ԫ����
int getWeight(Person person) {
	/* ��Ϊ getWeight() �� Person ����Ԫ��������ֱ�ӷ��ʸ�����κγ�Ա */
	person.weight = 60;
	return person.weight;
}


//�������� ���ϣ�https://www.runoob.com/cplusplus/cpp-inline-functions.html
/*
C++ ����������ͨ������һ��ʹ�á����һ�������������ģ���ô�ڱ���ʱ����������Ѹú����Ĵ��븱��������ÿ�����øú����ĵط���

���������������κ��޸ģ�����Ҫ���±��뺯�������пͻ��ˣ���Ϊ��������Ҫ���¸���һ�����еĴ��룬���򽫻����ʹ�þɵĺ�����

������һ����������Ϊ��������������Ҫ�ں�����ǰ����ùؼ��� inline���ڵ��ú���֮ǰ��Ҫ�Ժ������ж��塣����Ѷ���ĺ�������һ�У������������ inline �޶�����

���ඨ���еĶ���ĺ�������������������ʹû��ʹ�� inline ˵������
ʹ��ע�⣺
		1.�����������ڲ�����ʹ��ѭ�����Ϳ�����䣻
		2.���������Ķ���������������������һ�ε���֮ǰ��
		3.��ṹ�����ڵ���˵���ڲ�����ĺ���������������
		ֻ�е�����ֻ�� 10 ����������ʱ�Ž��䶨��Ϊ��������.
*/
inline int add(int a, int b) {
	return a + b;
}


/*int main() {
	Person person;
	cout << "person.age = "<<person.age<< " : tall = "<< person.tall<< endl;
	cout << "person.id = " << person.getId()<< endl;
	cout << "pserson.weight = " << getWeight(person) << endl;

	ZhanSan zhangsan;//��Ԫ��
	zhangsan.printInfo(&person);

	cout << "12 + 13 = " << add(12,13) << endl;

}*/

