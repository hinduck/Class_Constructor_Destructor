#include <iostream>
using namespace std;

void ThamTri(int x)
{
	//
	//x++;
}

void ThamChieu(int &x)
{
	cout << &x << endl;
	x++;
}

int main()
{
	int* p = NULL;
	int b = 12, c = 15;
	int& a = b;
	cout << &b << endl; // Địa chỉ của b
	//ThamTri(b);
	ThamChieu(b);
	cout << b;
	return 0;
}