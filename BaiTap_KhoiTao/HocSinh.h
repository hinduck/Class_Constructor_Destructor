#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

#pragma once
class HocSinh
{
private:
	string HoTen, DiaChi;
	int Tuoi;
	float DiemToan, DiemLy, DiemVan;
public:
	HocSinh()
	{
		HoTen = "Nguyen Van A";
		srand(time(NULL));
		Tuoi = rand() % (100 - 1 + 1) + 1;
		DiaChi = "Viet Nam";
		DiemToan = rand() % (10 - 1 + 1) + 1;
		DiemLy = rand() % (10 - 1 + 1) + 1;
		DiemVan = rand() % (10 - 1 + 1) + 1;
	}
	HocSinh(string hoten, int tuoi, string diachi, float Toan, float Ly, float Van)
	{
		HoTen = hoten;
		Tuoi = tuoi;
		DiaChi = diachi;
		DiemToan = Toan;
		DiemLy = Ly;
		DiemVan = Van;
	}
	void Nhap();
	void Xuat();
};

