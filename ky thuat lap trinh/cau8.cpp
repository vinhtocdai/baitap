#include <iostream>
using namespace std;

int main()
{
	int n, tong = 0;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 1; i <= n/2; i++)
	{
		if (n % i == 0)
		{
			tong += i;
		}
	}
	if (tong == n)
		cout << n << " la so hoan thien";
	else
		cout << n << " khong la so hoan thien";
	system("pause");
	return 0;
}
