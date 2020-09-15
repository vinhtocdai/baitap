#include "Header.h"

void nhap(HinhTron& ht)
{
	cout << "Nhap ban kinh: ";
	cin >> ht.BanKinh;
}
void xuat(HinhTron ht)
{
	cout << "Voi Ban kinh la " << ht.BanKinh << endl;
}
float tinhChuVi(HinhTron ht)
{
	float pi = 3.14;
	
	float cv = ht.BanKinh * 2 * pi;
	return cv;
}
float tinhDienTich(HinhTron ht)
{
	float pi = 3.14;
	float S = pi * (ht.BanKinh * ht.BanKinh);
	return S;
}