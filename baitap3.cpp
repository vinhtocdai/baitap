#include <iostream>
#include <cmath>
using namespace std;

void bt1()
{
	int a, b, c;
	cout << "Nhap so a: ";
	cin >> a;
	cout << "Nhap so b: ";
	cin >> b;
	cout << "Nhap so c: ";
	cin >> c;

	if (a > b && a > c)
	{
		cout << "So lon nhat la so: " << a << endl;	
	}
	else if (b > c)
	{
		cout << "So lon nhat la so: " << b << endl;		
	}
	else
	{
		cout << "So lon nhat la so: " << c << endl;
	}
}
void bt2a()
{
	int n, s = 0, dau = 1;
    cout << "Nhap n = ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
	s = s + (dau * i);
	dau = dau * -1;
}
    cout << "S = " << s << endl;
}
void bt2b()
{
	int n;
	int gt = 1;
	float s = 0;
	cout << "Nhap n = ";
	cin >> n;

	for (int i = 1; i <= n; i++) 
	{
		gt = 1;
		for (int j = 1; j <= i + 1; j++)
			gt *= j;
		s += pow(i, i + 1) / (float)gt;
	}
	cout << "S = " << s;
}
void bt3()
{
	int x, y;
	long mu = 1;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y:";
	cin >> y;
	
	for (int i = 1; i <= y; i++) {
		mu = mu * x;
	}
	cout << "x^y " << " = " << mu << endl;
}
int main()
{
	cout << "\nTran Thanh Vinh - DH51902450" << endl;

	cout << "\nBai tap 1" << endl;
	bt1();
	cout << "\nBai tap 2a" << endl;
	bt2a();
	cout << "\nBai tap 2b" << endl;
	bt2b();
	cout << "\nBai tap 3" << endl;
	bt3();
	return 0;
	}

