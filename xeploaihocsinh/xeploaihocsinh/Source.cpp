#include "Header.h"

void nhap(KetQuaHocTap& kqht)
{
	cout << "Nhap ten hoc sinh: ";
	cin.getline(kqht.HoVaTen,100);
	cout << "Nhap diem Toan: ";
	cin >> kqht.DiemToan;
	cout << "Nhap diem Van: ";
	cin >> kqht.DiemVan;
}
void xuat(KetQuaHocTap kqht)
{
	cout << "Ket qua hoc tap cua " << kqht.HoVaTen << endl;
	cout << " Diem Toan: " << kqht.DiemToan << " Diem Van: " << kqht.DiemVan << endl;
}
float tinhDiemTrungBinh(KetQuaHocTap kqht)
{
	float tb = (kqht.DiemToan + kqht.DiemVan) / 2;
	return tb;
}
void xepLoai(KetQuaHocTap kqht)
{
	float tb = tinhDiemTrungBinh(kqht);
	if (tb >= 8)
		cout << "Gioi";
	else if (6.5 < tb < 8)
		cout << "Kha";
	else if (6.5 > tb > 5)
		cout << "Trung binh";
	else
		cout << "Yeu";

}