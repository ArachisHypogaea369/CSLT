/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 13/10/2026
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so nguyen duong n la: ";
    cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "*";
		}
		cout << endl;
	}
    return 0;
}