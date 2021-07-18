#include <iostream>
#include <string>
using namespace std;

#pragma once
class HocSinh
{
private:
	string HoTen, DiaChi;
	float DiemToan, DiemVan;
public:
	// Khai báo phương thức .h và cài đặt ở .cpp
	void Xuat();
	void Nhap();
	// HocSinh(); // Phương thức khởi tạo mặc định
	// ~HocSinh(); // Phương thức phá huỷ
};

