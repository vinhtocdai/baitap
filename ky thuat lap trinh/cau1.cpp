#include <iostream>
using namespace std;

int main()
{
	int a, b, diemTb;
	cout << "Nhap diem Toan: ";
	cin >> a;
	cout << "Nhap diem Van: ";
	cin >> b;

	while (a < 0 || a> 10 || b < 0 || b> 10) {
		cout << "Vui long nhap dung so diem!!";
		cout << "Nhap diem Toan: " << endl;
		cin >> a;
		cout << "Nhap diem Van: " << endl;
		cin >> b;
	}

	diemTb = (a * 2 + b) / 2;
	cout << "Diem trung binh la: " << diemTb << endl;
	if (diemTb >= 5)
		cout << " Dau" << endl;
	else
		cout << " Rot" << endl;
	system("pause");
	return 0;
}
