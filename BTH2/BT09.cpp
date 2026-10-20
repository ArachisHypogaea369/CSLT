/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 13/10/2026
*/
#include <iostream>
using namespace std;
int main() {
	int n;
	int tongChan = 0;
	long long  tongGiaithua = 1;
	cout << "Nhap so nguyen duong n la: ";
	cin >> n;
	for (int dem = 1; dem <= n; dem++) {
		tongGiaithua *= dem;

		if (dem % 2 == 0) {
			tongChan += dem;
		}
	}
	cout << "Tong cac so chan tu 1 den " << n << " la: " << tongChan << endl;
	cout << "Tong giai thua tu 1 den " << n << " la: " << tongGiaithua << endl;
	return 0;
}