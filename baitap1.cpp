#include <iostream>
using namespace std;

int main()
{
    char tensanpham;
    int soluong, dongia, tien, thuegtgt;

    cout << "Nhap ten san pham \n";
    cin >> tensanpham;
    cout << "Nhap so luong \n";
    cin >> soluong;
    cout << "Nhap don gia \n";
    cin >> dongia;

    tien = soluong * dongia;
    cout << "Tien =" << soluong * dongia << endl;
    cout << "Thue gia tri gia tang =" << tien * 10 / 100 << endl;
}
