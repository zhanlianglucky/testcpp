#include "pch.h"
#include <iostream>

//�ο����� https://www.runoob.com/cplusplus/cpp-preprocessor.html

using namespace std;

#ifdef NULL
#define NULL 0
#endif // NULL ��Ϊ0

//���Ե�ʱ�����
#ifdef DEBUG
cerr << "Variable x = " << x << endl;
#endif

//���ñ�������
#if 0
�����б���Ĵ���
#endif


//��xתΪ�����ŵ��ַ���
#define STR(x) #x

//����x,y Ϊxy
#define CONTACT(x,y) x ## y;

//�ӷ�����
#define SUM(a,b) (a+b)


int main() {

	cout << NULL << endl;

	cout << CONTACT(12,12);//������Ϊ1212
	cout << endl;

	cout << SUM(12, 12) << endl;//���24

	cout << STR(hello world) << endl;

	return 0;
}