#include <iostream>
using namespace std;

// Phương thức có đối tượng là tham số truyền vào
// Yêu cầu: Tính tổng của 2 giờ (số giờ, số phút)
// VD: 2h56p + 1h4p = 4h
// T1, T2, T3 . T3 = T1 + T2; T3.Cong(T1, T2)

class ThoiGian
{
private:
	int Gio, Phut;

public:
	void Nhap(int gio, int phut); // Có 2 tham số truyền vào
	void Xuat();
	ThoiGian Tong(ThoiGian T1, ThoiGian T2) // Đối tượng có thể làm tham số truyền vào
	{
		Phut = T1.Phut + T2.Phut;
		Gio = Phut / 60;
		Phut = Phut % 60;
		Gio = Gio + T1.Gio + T2.Gio;
		return *this;
	}
}; 

void ThoiGian::Nhap(int gio, int phut)
{
	Gio = gio;
	Phut = phut;
}

void ThoiGian::Xuat()
{
	cout << Gio << "h" << Phut << "p";
}


int main()
{
	ThoiGian T1, T2, T3;
	T1.Nhap(2, 56);
	T2.Nhap(1, 4);
	T3.Tong(T1, T2);
	T3.Xuat();
	return 0;
}