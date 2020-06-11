#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

void bt1() //tinh giao thua n!
{
	int T, i, n;
	cout << "Nhap n: ";
	cin >> n;

	T = 1, i = 1;
	while (i <= n)
	{
		T = T * i;
		i++;
	}
	cout << "Giai thua la: " << T << endl;
}
void bt2() //ax^2 +bx+c=0
{

	float a, b, c, delta, x1, x2;
	cout << "Nhap a = ";
	cin >> a;
	cout << "Nhap b = ";
	cin >> b;
	cout << "Nhap c = ";
	cin >> c;
	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				cout << "Phuong trinh vo so nghiem" << endl;
			}
			else {
				cout << "Phuong trinh vo nghiem" << endl;
			}
		}
		else {
			cout << "Phuong trinh co nghiem duy nhat: " << -c / b << endl;
		}
	}
	else {
		delta = b * b - 4 * a*c;
		if (delta > 0) {
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			cout << "X1 = " << x1 << endl;
			cout << "X2 = " << x2 << endl;
		}
		else if (delta == 0) {
			cout << "Phuong trinh co nghiem kep: x1 = x2 = " << -b / 2 * a << endl;
		}
		else {
			cout << "Phuong trinh vo nghiem" << endl;
		}
	}
	
	
}

void bt3()//n phai la so nguyen to hay khong
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	if (n < 2) {
		cout << n << " khong phai so nguyen to";

	}
	int count = 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			count++;
		}
	}
	if (count == 0) {
		cout << n << " la so nguyen to";
	}
	else {
		cout << n << " khong phai so nguyen to";
	}
	system("pause");

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

}
