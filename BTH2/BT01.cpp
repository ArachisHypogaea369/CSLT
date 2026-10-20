/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 13/10/2026
*/
#include <iostream>
using namespace std;
int main() {
	int n;
	cout << " Nhap so nguyen n: ";
	cin >> n;
	if (n % 2 == 0) {
		cout << " n la so chan " << endl;
		if (n > 0) {
			cout << " n la so duong " << endl;
		}
		if (n == 0) {
			cout << " n bang 0 " << endl;
		}
		if (n < 0) {
			cout << " n la so am " << endl;
		}
	} else {
			cout << " n la so le " << endl;
		}
	return 0;
	}