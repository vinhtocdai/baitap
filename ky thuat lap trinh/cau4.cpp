#include <iostream>
using namespace std;

int main()
{
	int a, b;
	char c;
	cout << "Nhap so a: ";
	cin >> a;
	cout << "Nhap so b: ";
	cin >> b;
	cout << "+,-,* hoac / de thuc hien phep tinh: ";
	cin >> c;

	switch (c)
	{
	case '+': cout << "Tong hai so la: " << a + b << endl;
		break;
	case '-': cout << "Tich hai so la: " << a * b << endl;
		break;
	case '*': cout << "Hieu a - b la: " << a - b << endl;
		break;
	case '/': cout << "Thuong a / b la: " << a / b << " va du " << a % b << endl;
		break;
	default:
		cout << "Vui long nhap so +,-,* hoac /: ";
		cin >> c;
	}


	system("pause");
	return 0;
}
