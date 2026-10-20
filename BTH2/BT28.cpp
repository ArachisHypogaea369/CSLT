/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 19/10/2026
*/
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double x;
	double tayLor = 1;
	double gt = 1;
	double soHang = 1;
	int dem = 1;
	cout << "Nhap x la: ";
	cin >> x;
	do {
		for (int i = 1; i <= dem; i++) {
			gt *= i;
		}
		soHang = pow(x, dem) / gt;
		tayLor += soHang;
		gt = 1;
		dem++;
	} while (abs(soHang) > pow(10, -6));
	if (exp(x) > tayLor) {
		cout << "exp > TayLor" << endl;
	}
	else {
		cout << "exp < TayLor" << endl;
	}
	return 0;
}