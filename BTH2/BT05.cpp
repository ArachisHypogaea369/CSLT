/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 13/10/2026
*/
#include <iostream>
using namespace std;
int main() {
	float d;
	cout << "Nhap so diem: ";
	cin >> d;
	if (d >= 0 && d < 5.0) {
		cout << "Xep loai: Yeu";
	}
	else if (d >= 5 && d < 6.5) {
		cout << "Xep loai: Trung binh";
	}
	else if (d >= 6.5 && d < 8.0) {
		cout << "Xep loai: Kha";
	}
	else if (d >= 8.0 && d <= 10) {
		cout << "Xep loai Gioi";
	}
	else {
		cout << "Khong hop le";
	}
	return 0;
}