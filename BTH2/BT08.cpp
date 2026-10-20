/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 13/10/2026
*/
#include <iostream>
using namespace std;
int main() {
	int n;
	do {
		cout << "Nhap vao so nguyen n la: " << endl;
		cin >> n;
	} while (n <= 0 || n > 9);
	for (int dem = 1; dem <= n; dem++)
		cout << "3 x " << dem << " = " << 3 * dem << endl;
	return 0;
}