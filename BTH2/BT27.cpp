/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 19/10/2026
*/
#include <iostream>
using namespace std;
int main() {
	int n;
	int tong = 0;
	cout << "Nhap so nguyen n la: ";
	cin >> n;
	for (int i = 1; i < n; i++) {
		if (n % i == 0 && i != n) {
			tong += i;
		}
	}
	if (tong == n) {
		cout << "So " << n << " la so hoan thien" << endl;
	}
	else {
		cout << "So " << n << " khong la so hoan thien " << endl;
	}
	// Cac so hoan thien nho hon 10000
	cout << "Cac so hoan thien nho hon 10000" <<endl;
	for (int j = 1; j < 10000; j++) {
		int Tong = 0;
		for (int k = 1; k < j; k++) {
			if (j % k == 0 && k != j) {
				Tong += k;
			}
		}
		if (Tong == j) {
			cout << j << endl;
		}
	}
	return 0;
}