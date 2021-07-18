#include "HocSinh.h"

// syntax:
// KieuTraVe TenClass::TenPhuongThuc

void HocSinh::Nhap()
{
	// Xử lý ở đây
	
	// Tên học sinh
	fflush(stdin);
	cout << "Nhap ho ten hoc sinh: ";
	getline(cin, HoTen);

	// Địa chỉ
	fflush(stdin);
	cout << "\nNhap dia chi: ";
	getline(cin, DiaChi);

	// Điểm Toán
	cout << "\nNhap diem Toan: ";
	cin >> DiemToan;

	// Điểm Văn
	cout << "\nNhap diem Van: ";
	cin >> DiemVan;

}

void HocSinh::Xuat()
{
	// Xử lý ở đây
	cout << "\nHo ten: " << HoTen;
	cout << "\nDia chi: " << DiaChi;
	cout << "\nDiem Toan: " << DiemToan;
	cout << "\nDiem Van: " << DiemVan;
}