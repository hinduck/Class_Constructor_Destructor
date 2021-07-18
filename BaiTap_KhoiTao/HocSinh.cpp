#include "HocSinh.h"

void HocSinh::Nhap()
{
	fflush(stdin);
	cout << "Nhap ho ten: ";
	getline(cin, HoTen);
	cout << "\nNhap tuoi: ";
	cin >> Tuoi;
	fflush(stdin);
	cout << "\nNhap dia chi: ";
	getline(cin, DiaChi);
	cout << "\nNhap diem Toan: ";
	cin >> DiemToan;
	cout << "\nNhap diem Ly: ";
	cin >> DiemLy;
	cout << "\nNhap diem Van: ";
	cin >> DiemVan;
}

void HocSinh::Xuat()
{
	cout << "\nHo ten: " << HoTen;
	cout << "\nTuoi: " << Tuoi;
	cout << "\nDia chi: " << DiaChi;
	cout << "\nDiem Toan: " << DiemToan;
	cout << "\nDiem Ly: " << DiemLy;
	cout << "\nDiem Van: " << DiemVan;
	cout << "\n";
}