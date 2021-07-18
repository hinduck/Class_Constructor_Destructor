#include <iostream>
using namespace std;

#pragma once
class SoPhuc
{
private:
	float PhanThuc, PhanAo;
public:
	SoPhuc()
	{
		PhanThuc = 1;
		PhanAo = 1;
	}
	SoPhuc(int thuc, int ao)
	{
		PhanThuc = thuc;
		PhanAo = ao;
	}
	void Xuat();
};

