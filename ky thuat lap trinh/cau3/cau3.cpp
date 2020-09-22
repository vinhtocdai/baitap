#include <iostream>
using namespace std;

int main()
{
	float toan, van, ngoaiNgu, diemTb;
	cout << "Nhap diem Toan: ";
	cin >> toan;
	cout << "Nhap diem Van: ";
	cin >> van;
	cout << "Nhap diem Ngoai Ngu: ";
	cin >> ngoaiNgu;

	while (toan < 0 || toan> 10 || van < 0 || van > 10 || ngoaiNgu < 0 || ngoaiNgu > 10) 
	{
		cout << "Vui long nhap dung so diem!!";
		cout << "Nhap diem Toan: ";
		cin >> toan;
		cout << "Nhap diem Van: ";
		cin >> van;
		cout << "Nhap diem Ngoai Ngu: ";
		cin >> ngoaiNgu;
	}

	diemTb = (toan * 3 + van * 2 + ngoaiNgu) / 6;
	cout << "Diem trung binh: " << diemTb << endl;
	if (diemTb >= 8 && toan >= 6.5 && van >= 6.5 && ngoaiNgu >= 6.5)
		cout << "Gioi";
	else if (diemTb >= 7 && toan >= 5 && van >= 5 && ngoaiNgu >= 5)
		cout << "Kha";
	else if (diemTb >= 5 && toan >= 3.5 && van >= 3.5 && ngoaiNgu >= 3.5)
		cout << "Trung binh";
	else
		cout << "Yeu";
	system("pause");
	return 0;
}
