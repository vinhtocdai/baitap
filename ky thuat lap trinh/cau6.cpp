#include <iostream>
using namespace std;

int main()
{
	int n, dem = 0, tong = 0;
	cout << "Nhap n: ";
	cin >> n;
	while (n <= 1)
	{
		cout << "Vui long nhap n > 1 !!" << endl;
		cout << "Nhap n: ";
		cin >> n;
	}
	cout << "Cac uoc so la: ";
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			cout << i << " ";
			dem++;
			tong += i;
		}
	}
	cout << "So uoc: " << dem << endl;
	cout << "Tong cac uoc so: " << tong << endl;
	
	system("pause");
	return 0;
}
