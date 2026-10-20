/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 19/10/2026
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	cout << "Nhap so nguyen n: ";
	cin >> n;
	string xau = "";
	do {
		xau = to_string(n % 2) + xau;
		n /= 2;
	} while (n > 1);
	xau = to_string(n) + xau;
	cout << "So nhi phan tuong ung la: " << xau;
}