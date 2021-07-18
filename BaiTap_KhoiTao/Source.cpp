#include <iostream>
#include <string>
#include "SoPhuc.h"
#include "ThoiGian.h"
#include "HocSinh.h"
using namespace std;

int main()
{
	SoPhuc sp; // PhanThuc = 1, PhanAo = 1
	sp.Xuat();
	SoPhuc sp1(1, 2); // PhanThuc = 1, PhanAo = 2
	sp1.Xuat();
	ThoiGian time1(3, 2, 1); // Gio = 3, Phut = 2, Giay = 1
	time1.Xuat();
	ThoiGian time2(4, 4); // Gio = 4, Phut = 0, Giay = 1;
	time2.Xuat();
	HocSinh hs;
	hs.Xuat();
	HocSinh hs1("Nguyen Hien Duc", 19, "TPHCM", 10, 10, 10);
	hs1.Xuat();
	HocSinh hs2(hs1);
	hs2.Xuat();
	return 0;
}