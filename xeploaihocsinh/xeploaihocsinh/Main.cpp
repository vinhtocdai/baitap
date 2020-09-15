#include "Header.h"

int main()
{
	KetQuaHocTap kqht;
	nhap(kqht);
	xuat(kqht);
	float diemTb = tinhDiemTrungBinh(kqht);
	cout << "Diem trung binh la: " << diemTb << endl;
	cout << "Xep loai: ";
	xepLoai(kqht) ;
	system("pause");
	return 0;
}