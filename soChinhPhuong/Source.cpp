#include "Header.h"

int testSoChinhPhuong(int n) {
	

	for (int i = 1; i <= n / 2; i++)
		if (i * i == n)
			return true; // Là số chính phương
	return false; // Không là số chính phương
}

void listSoChinhPhuongNhoHon(int n) {
	cout << "Cac so nguyen to nho " << n << " la ";
	for (int i = 1; i < n; i++) {
		if (testSoChinhPhuong(i) == 2) {
			cout << i << ", ";
		}
	}
}

void countSoChinhPhuongNhoHon(int n) {
	int count = 0;

	for (int i = 1; i < n; i++) {
		if (testSoChinhPhuong(i) == 2) {
			count++;
		}
	}
	cout << "\nSo nguyen to nho hon " << n << " co " << count << " so" << endl;
}

void sumSoChinhPhuongNhoHon(int n) {
	int sum = 0;

	for (int i = 1; i < n; i++) {
		if (testSoChinhPhuong(i) == 2) {
			sum += i;
		}
	}
	cout << "\nTong cac so nguyen to nho hon " << n << " la " << sum << endl;
}

void multiplySoChinhPhuongNhoHon(int n) {
	int multiply = 1;

	for (int i = 1; i < n; i++) {
		if (testSoChinhPhuong(i) == 2) {
			multiply *= i;
		}
	}
	cout << "\nTich cac so nguyen to nho hon " << n << " la " << multiply << endl;
}