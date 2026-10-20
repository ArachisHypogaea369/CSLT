/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 20/10/2026
*/
#include <iostream>
using namespace std;

int main() {
	int n,a,b;
	int dem = 0;
	cout << "Nhap so nguyen duong n la: ";
	cin >> n;
	if (n < 2) {
		cout << "Khong co so nguyen to nao nho hon " << n << endl;
		return 0;
	}
	else {
		cout << "Cac so nguyen to nho hon hoac bang " << n << " la: " << endl;

		for (int i = 2; i <= n; i++) {
			bool laNguyenTo = true;

			for (int j = 2; j * j <= i; j++) {
				if (i % j == 0) {
					laNguyenTo = false;
					break;
				}
			}

			if (laNguyenTo) {
				cout << i << endl;
				dem++;
			}
		}
	}
	cout << "So luong so nguyen to nho hon hoac bang " << n << " la: " << dem << endl;
	cout << endl;
	cout << " Nhap 2 so nguyen duong a va b la: ";
	cin >> a >> b;
	int A = a;
	int B = b;
	while (b != 0) { // UCLN
		int curr = b;
		b = a % b;
		a = curr;
	}
	cout << "Uoc chung lon nhat cua " << A << " va " << B << " la: " << a << endl;
	cout << "Boi chung nho nhat cua " << A << " va " << B << " la: " << (A / a) * B << endl; // Chia truoc roi nhan, tranh tran so
	return 0;
}