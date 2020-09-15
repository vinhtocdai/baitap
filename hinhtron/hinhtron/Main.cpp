#include "Header.h"

int main()
{
	HinhTron ht;
	nhap(ht);
	xuat(ht);
	float chuVi = tinhChuVi(ht);
	cout << "Chu vi la: " << chuVi << endl;
	float dienTich = tinhDienTich(ht);
	cout << "Dien tich la: " << dienTich << endl;
	system("pause");
	return 0;
}