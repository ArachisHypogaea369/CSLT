/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 20/10/2026
*/
#include <iostream>
using namespace std;
long long giaiThua(int n) {
	int giaiThua = 1;
	for (int i = 1; i <= n; i++) {
		giaiThua *= i;
	}
	return giaiThua;
}
int main() {
	int n;
	cout << "Nhap so nguyen n: ";
	cin >> n;
	cout << "Giai thua cua " << giaiThua(n) << endl;
	return 0;
}
/* Dinh nghia: ham giaiThua() nhan gia tri n, sau do tinh giai thua va tra lai tong giai thua cua n
*/