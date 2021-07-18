#include <iostream>
using namespace std;

#pragma once
class ThoiGian
{
private:
	float Gio, Phut, Giay;
public:
	ThoiGian(float hour, float minute, float second)
	{
		Gio = hour;
		Phut = minute;
		Giay = second;
	}
	ThoiGian(float hour, int h)
	{
		Gio = hour;
		Phut = 0;
		Giay = 1;
	}
	void Xuat();
};

