#include <iostream>
using namespace std;

class PhanSo {
private:
	// Khai báo: static	KieuDuLieu TenBien;
	static int dem;
	int TuSo, MauSo;
public:
	PhanSo() {
		TuSo = 0;
		MauSo = 1;
	}
	PhanSo(int tu, int mau) {
		TuSo = tu;
		MauSo = mau;
		dem++;
	}
	/*int XemGiaTri() {
		return dem;
	}*/
	static int XemGiaTri() {
		return dem;
	}
};

int PhanSo::dem; // không giá trị (hoặc gán giá trị)

int main()
{
	// nếu không phải bản duy nhất: ps1(dem), ps2(dem)
	PhanSo ps1(2, 3), ps2(3, 4), ps3(5, 6);
	cout << "So luong phan so dang co la: " << PhanSo::XemGiaTri();
	return 0;
}