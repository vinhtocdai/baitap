#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Nhap so a: ";
	cin >> a;
	cout << "Nhap so b: ";
	cin >> b;
	cout << "1,2,3 hoac 4 de thuc hien phep tinh: ";
	cin >> c;

	switch (c)
	{
	case 1: cout << "Tong hai so la: " << a + b << endl;
		break;
	case 2: cout << "Tich hai so la: " << a * b << endl;
		break;
	case 3: cout << "Hieu a - b la: " << a - b << " va hieu b - a la: " << b - a << endl;
		break;
	case 4: cout << "Thuong a / b la: " << a / b << " va du " << a % b << " || Thuong b / a la: " << b / a << " va du " << b % a << endl;
		break;
	default:
		cout << "Vui long nhap so 1,2,3 hoac 4: ";
		cin >> c;
	}

	
	system("pause");
	return 0;
}
