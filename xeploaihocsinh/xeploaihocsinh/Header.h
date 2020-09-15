#include <iostream>
using namespace std;
struct KetQuaHocTap
{
	char HoVaTen[100];
	float DiemToan;
	float DiemVan;
};
void nhap(KetQuaHocTap &kqht);
void xuat(KetQuaHocTap kqht);
float tinhDiemTrungBinh(KetQuaHocTap kqht);
void xepLoai(KetQuaHocTap kqht); 
