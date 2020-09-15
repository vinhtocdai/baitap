#include "Header.h"
int main()
{
	HinhChuNhat hcn;
	nhap(hcn);
	xuat(hcn);
	float chuVi = tinhChuVi(hcn);
	cout << "Chu vi la: " << chuVi << endl;
	float dienTich = tinhDienTich(hcn);
	cout << "Dien tich la: " << dienTich << endl;
	system("pause");
	return 0;
}