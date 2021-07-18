#include <iostream>
#include <string>
using namespace std;

class PhanSo
{
private:
	int TuSo, MauSo;
public:
	PhanSo()
	{
		TuSo = 0;
		MauSo = 1;
	}
	// Truyền vào 2 tham số (tử số, mẫu số)
	PhanSo(int tu, int mau)
	{
		TuSo = tu;
		MauSo = mau;
	}
	PhanSo(int tu)
	{
		TuSo = tu;
		// MauSo = 1;
	}
};

int main()
{
	// Cách 1: Trực tiếp
	PhanSo PS(1, 4);
	// Cách 2: Gián tiếp
	PhanSo PS2 = PhanSo(2, 5);
	PhanSo PS3;
	PS3 = PhanSo(2, 3);
	return 0;
}