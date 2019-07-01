#pragma once
class Goods
{
public:
	Goods(char *gn, float price);
	~Goods();
	float price;
	char goodsName[20];
};

