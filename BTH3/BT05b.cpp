/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 20/10/2026
*/
#include <iostream>
using namespace std;
int tongTu1DenN(int n) {
	int tong = 0;
	for (int i = 1; i <= n; i++) {
		tong += i;
	}
	return tong;
}
int main() {
	int n;
	cout << "Nhap so nguyen n: ";
	cin >> n;
	cout << "Tong tu 1 den " << n << " la: " << tongTu1DenN(n) << endl;
	return 0;
}
/* Dinh nghia: ham tongTu1DenN nhan so nguyen n sau do chay vong lap va cong don tong tu 1 den n 
*/