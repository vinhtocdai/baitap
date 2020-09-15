#include "Header.h"
void nhap(HinhChuNhat &hcn)
{
	cout << "Nhap chieu dai: ";
	cin >> hcn.ChieuDai;
	cout << "Nhap chieu rong: ";
	cin >> hcn.ChieuRong;
}
void xuat(HinhChuNhat hcn)
{
	cout << "Chieu dai la: " << hcn.ChieuDai << endl;
	cout << "Chieu rong la: " << hcn.ChieuRong << endl;
}
float tinhChuVi(HinhChuNhat hcn)
{
	float cv = (hcn.ChieuDai + hcn.ChieuRong) * 2;
	return cv;
}
float tinhDienTich(HinhChuNhat hcn)
{
	float S = 0;
	S = hcn.ChieuRong * hcn.ChieuDai;
	return S;
}