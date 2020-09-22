#include <iostream>
using namespace std;

int main()
{
	int n, count = 0;
	cout << "Nhap n: ";
	cin >> n;

	if (n < 2)
		cout << n << " khong phai la so nguyen to";
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			count++;
	}
	if (count == 0)
		cout << n << " la so nguyen to";
	else
		cout << n << " khong la so nguyen to";
	
	system("pause");
	return 0;
}
