#include "Header.h"

int main() {
	int n;
	cout << "Enter n = ";
	cin >> n;

	int result = testSoChinhPhuong(n);
	if (result == true) {
		cout << n << " la so chinh phuong" << endl;
	}
	else {
		cout << n << " khong la so chinh phuong" << endl;
	}

	listSoChinhPhuongNhoHon(n);
	countSoChinhPhuongNhoHon(n);
	sumSoChinhPhuongNhoHon(n);
	multiplySoChinhPhuongNhoHon(n);
	// system("pause");
	return 0;
}