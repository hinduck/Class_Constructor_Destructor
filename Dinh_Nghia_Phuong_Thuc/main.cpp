#include <iostream>
#include <string>
using namespace std;

// Nhập xuất thông tin của một học sinh (Tên, địa chỉ, điểm toán, điểm văn)

class HocSinh
{
private:
	string HoTen, DiaChi;
	float DiemToan, DiemVan;

	//	Có 2 cách định nghĩa cho phương thức của class
public:
	// Cách 1: Khai báo và định nghĩa trong class
	void Nhap()
	{
		// Thực thi ở đây

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
	// Cách 2: Khai báo trong class, định nghĩa ở bên ngoài
	void Xuat();

};

// KieuTraVeCuaPhuongThuc TenClass :: TenPhuongThuc() {code}
// Cách 2:
void HocSinh::Xuat()
{
	// Thực thi ở đây

	cout << "\nHo ten: " << HoTen;
	cout << "\nDia chi: " << DiaChi;
	cout << "\nDiem Toan: " << DiemToan;
	cout << "\nDiem Van: " << DiemVan;
}

int main()
{
	HocSinh HS;
	HS.Nhap(); // Tính đóng gói
	HS.Xuat();
	return 0;
}