#include "pch.h"
#include <iostream>

//参考资料 https://www.runoob.com/cplusplus/cpp-preprocessor.html

using namespace std;

#ifdef NULL
#define NULL 0
#endif // NULL 改为0

//调试的时候编译
#ifdef DEBUG
cerr << "Variable x = " << x << endl;
#endif

//不用编译条件
#if 0
不进行编译的代码
#endif


//将x转为带引号的字符串
#define STR(x) #x

//连接x,y 为xy
#define CONTACT(x,y) x ## y;

//加法运算
#define SUM(a,b) (a+b)


int main() {

	cout << NULL << endl;

	cout << CONTACT(12,12);//输出结果为1212
	cout << endl;

	cout << SUM(12, 12) << endl;//输出24

	cout << STR(hello world) << endl;

	return 0;
}