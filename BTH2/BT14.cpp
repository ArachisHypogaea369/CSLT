/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 14/10/2026
*/
#include <iostream>
using namespace std;

int main() {
	int kWh;
	int tongTien = 0;
	cout << " Nhap so kWh tieu thu trong thang la: ";
	cin >> kWh;
	if (kWh >= 0 && kWh <= 50) {
		tongTien = kWh * 1984;
	}
	else if (kWh >= 51 && kWh <= 100) {
		tongTien = 50 * 1984 + (kWh - 50) * 2050;
	}
	else if (kWh >= 101 && kWh <= 200) {
		tongTien = 50 * 1984 + 50 * 2050 + (kWh - 100) * 2380;
	}
	else if (kWh >= 201 && kWh <= 300) {
		tongTien = 50 * 1984 + 50 * 2050 + 100 * 2380 + (kWh - 200) * 2998;
	}
	else if (kWh >= 301 && kWh <= 400) {
		tongTien = 50 * 1984 + 50 * 2050 + 100 * 2380 + 100 * 2998 + (kWh - 300) * 3350;
	}
	else if (kWh > 400) {
		tongTien = 50 * 1984 + 50 * 2050 + 100 * 2380 + 100 * 2998 + 100 * 3350 + (kWh - 400) * 3460;
	}
	cout << "Tien dien: " << tongTien << endl;
	cout << "VAT (8%):" << tongTien * 0.08 << endl;
	cout << "Tong cong: " << tongTien + tongTien * 0.08 << endl;
}