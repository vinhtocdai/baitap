#include <iostream>
using namespace std;

int main()
{
	float n, s = 0;
	cout << "Nhap n: ";
	cin >> n;
	while (n < 1)
	{
		cout << "Vui long nhap n > 1 !!";
		cout << "Nhap n: ";
		cin >> n;
	}
	for (float i = 2; i <= n; i++)
	{
		s = s + 1 / i;
	}
	cout << "Tong la: " << s << endl;

	system("pause");
	return 0;
}
