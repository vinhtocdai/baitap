#include <iostream>
#include <cmath>
using namespace std;

void bt1()
{
	int a, b;
	cout << "Nhap so a = ";
	cin >> a;
	cout << "Nhap so b = ";
	cin >> b;

	cout << "a + b = " << a + b << endl;
	cout << "a - b = " << a - b << endl;
	cout << "a * b = " << a * b << endl;
	cout << "a / b = " << a / b << endl;
}
void bt2()
{
	char tensanpham[50];
	int soluong, dongia, tien, thuegtgt;

	cout << "Nhap ten san pham: ";
	cin >> tensanpham ;
	cout << "Nhap so luong: ";
	cin >> soluong;
	cout << "Nhap don gia: ";
	cin >> dongia;

	tien = soluong * dongia;
	cout << "Tien =" << tien << endl;
	thuegtgt = tien * 0.1;
	cout << "Thue gia tri gia tang =" << thuegtgt << endl;
}
void bt3()
{
	int toan, van, anh, diemtb;

	cout << "Nhap diem toan: ";
	cin >> toan;
	cout << "Nhap diem anh: ";
	cin >> anh;
	cout << "Nhap diem van: ";
	cin >> van;

	diemtb = (toan + van + anh) / 3;
	cout << "Diem trung binh: " << diemtb << endl;

}
void bt4()
{
	int bankinh, chuvi, dientich;

	cout << "Nhap ban kinh hinh tro: ";
	cin >> bankinh;
	
	chuvi = 2 * bankinh * 3.14159;
	cout << "Chu vi la: " << chuvi << endl;
	dientich = pow(bankinh, 2) * 3.14159;
	cout << "Dien tich la: " << dientich << endl;
}
void bt5()
{
	int soxe, a, b, c, d, sonut;

	cout << "Nhap bien so xe: ";
	cin >> soxe;

	a = soxe % 10;
	b = soxe / 10 % 10;
	c = soxe / 1000 % 10;
	d = soxe / 10000 % 10;
	sonut = a + b + c + d;
	cout << "So nut: " << sonut << endl;
}
void bt6()
{
	int a, b, x;

	cout << "Nhap so a = ";
	cin >> a;
	cout << "Nhap so b = ";
	cin >> b;

	if( a == 0 )
	{
		cout << "Phuong trinh khong the giai neu a = 0";
	}
	else
	{
		x = -b / a;
		cout << "Nghiem cua phuong trinh la: " << x << endl;
	}
}
void bt7()
{
	int a, b, c;
	float x1, x2;

	cout << "Nhap so a = ";
	cin >> a;
	cout << "Nhap so b = ";
	cin >> b;
	cout << "Nhap so c = ";
	cin >> c;

	if (a == 0)
	{
		cout << "Phuong trinh khong the giai neu a = 0";
	}
	else
	{
		x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
		x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
		cout << "Nghiem x1 = " << x1 << endl;
		cout << "Nghiem x2 = " << x2 << endl;
	}

}
int main()
{
	cout << "\nTran Thanh Vinh - DH51902450" << endl;

	cout << "\nBai tap 1" << endl;
	bt1();
	
	cout << "\nBai tap 2" << endl;
	bt2();
	
	cout << "\nBai tap 3" << endl;
	bt3();
	
	cout << "\nBai tap 4" << endl;
	bt4();

	cout << "\nBai tap 5" << endl;
	bt5();

	cout << "\nBai tap 6" << endl;
	bt6();

	cout << "\nBai tap 7" << endl;
	bt7();
	return 0;
}
