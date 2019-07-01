#include "pch.h"
#include "Goods.h"
#include<cstring>
#include <iostream>

using namespace std;

Goods::Goods(char *gn,float price)
{
	this->price = price;
	strcpy_s(this->goodsName,gn);

	cout << this->goodsName << this->price << endl;
}


Goods::~Goods()
{
}

