#include <iostream>
using namespace std;

// Con trỏ this
// Con trỏ this tham chiếu đến đối tượng đang gọi hàm thành phần

class PhanSo
{
private:
	int TuSo, MauSo;

public:
	PhanSo RutGon();
	void Xuat();
	void Nhap();
};

// Cách sử dụng thứ 1: "trỏ" đến các thành phần của class hiện tại

void PhanSo::Nhap()
{
	cout << "Nhap tu so: ";
	// cin >> TuSo;
	cin >> this->TuSo;
	cout << "\nNhap mau so: ";
	// cin >> MauSo;
	cin >> this->MauSo;
}

void PhanSo::Xuat()
{
	cout << "\n" << this->TuSo << "/" << this->MauSo << "\n";
}

// Cách sử dụng thứ 2: Trả về object hiện tại
PhanSo PhanSo::RutGon()
{
	int a, b;
	a = abs(this->TuSo);
	b = abs(this->MauSo);
	while (a != b)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	this->TuSo /= a;
	this->MauSo /= b;
	// Giá trị của TuSo, MauSo đã thay đổi
	return *this;
}

int main()
{
	PhanSo PS;
	PS.Nhap();
	PS.RutGon();
	PS.Xuat();
	return 0;
}