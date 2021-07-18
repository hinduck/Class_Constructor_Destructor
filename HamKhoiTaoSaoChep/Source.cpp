#include <iostream>
#include <string>
using namespace std;

class PhanSo {
private:
	int TuSo, MauSo;
public:
	PhanSo() {
		TuSo = 0;
		MauSo = 1;
	}
	// truyền vào 2 tham số (tử số, mẫu số)
	PhanSo(int tu, int mau) {
		TuSo = tu;
		MauSo = mau;
	}
	void Cong() {
		MauSo++;
	}
};

class HocSinh {
private:
	int MSSV;
	string HoTen;
public:
	HocSinh() {

	}
	HocSinh(int ms, string ten) {
		MSSV = ms;
		HoTen = ten;
	}
	// Cú pháp: Truyền tham chiếu
	// Nếu truyền tham trị --> tạo ra 1 vùng copy 
	HocSinh(const HocSinh &hs) {
		HoTen = hs.HoTen;
	}
};

int main() {
	PhanSo h1;
	HocSinh hs1(1, "Khoa"), hs2;
	hs2 = HocSinh(hs1);
	return 0;
}