#include "pch.h"
#include <iostream>

using namespace std;

//ÃüÃû¿Õ¼ä

namespace namespace_one {
	void print() {
		cout << "namespace one!" << endl;
	}
}

namespace namespace_two {
	void print() {
		cout << "namespace two!" << endl;
	}
}

using namespace namespace_one;

/*int main() {
	print();
	namespace_two::print();

	return 0;
}*/