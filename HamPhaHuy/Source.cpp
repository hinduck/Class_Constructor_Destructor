#include <iostream>
using namespace std;

class PhanSo {
private:
	int TuSo, MauSo;
	int* p;
public:
	PhanSo() {
		TuSo = 0;
		MauSo = 1;
	}
	PhanSo(int tu, int mau) {
		TuSo = tu;
		MauSo = mau;
	}
	~PhanSo() {
		if (p) {
			delete p;
			p = nullptr;
		}
	}
};

int main() {
	PhanSo ps;
	return 0;
}