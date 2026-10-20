/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 20/10/2026
*/
#include <iostream>
using namespace std;
int main() {
	int n;
	int max = 0;
	int dx = 0;
	cout << "Nhap so nguyen duong n la: ";
	cin >> n;
	int cur = n;
	cout << "So dao nguoc la: ";
	while (cur > 0) { // so dao nguoc
		int digit = cur % 10;
		if (digit > max) {
			max = digit;
		}
		dx = dx * 10 + digit;
		cout << digit;
		cur /= 10;            
	}
	cout << endl;
	cout << "Chu so lon nhat la: " << max << endl;
	if (dx == n) {
		cout << n << " la so doi xung " << endl;
	}
	else {
		cout << n << " khong phai so doi xung " << endl;
	}
	return 0;
}