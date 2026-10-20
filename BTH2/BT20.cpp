/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 14/10/2026
*/
#include <iostream>
using namespace std;
int main() {
	float km, tongTien;
	cout << " Nhap so km la: ";
	cin >> km;
	if (km < 1 && km >= 0) {
		tongTien = 12000;
	}
	else if (km >= 1 && km < 30) {
		tongTien = 12000 + (km - 1) * 14500;
	}
	else if (km >= 30) {
		tongTien = 12000 + 29 * 14500 + (km - 30) * 11600;
	}
	else {
		cout << "So km khong hop le" << endl;
		return 0;
	}
	cout << "Tong tien phai tra la: " << tongTien << " VND" << endl;
	return 0;
}