/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 13/10/2026
*/
#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Nhap vao so nguyen duong n la: ";
	cin >> n;
	while (n >= 1) {
		cout << n << endl;
		n = --n;
	}
	return 0;
}