#include <iostream>
#include <string>
using namespace std;

class HocSinh
{
	// Khai bao (cai dat) thuoc tinh
	// Khai bao (cai dat) phuong thuc
	// Khai báo thuộc tính: giống khai báo biến
	// Khai báo phương thức: giống khai báo hàm
	
	// private, protected, public
	// private: chỉ sử dụng trong class
	// public: thế giới bên ngoài có thể sử dụng
	// protected: ... tính kế thừa
private:
	string Hoten;
public:
	string DiaChi;
	void Nhap();
	float TinhDiem();
};

int main()
{
	HocSinh HS; // Cách khởi tạo 1 đối tượng từ class
	HS.DiaChi = "Q12, Ho Chi Minh";
	HS.Nhap(); // Cách truy cập đến thành phần của 1 class
	return 0;
}