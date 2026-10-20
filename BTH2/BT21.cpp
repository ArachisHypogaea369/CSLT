/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 14/10/2026
*/
#include <iostream>
using namespace std;
int main() {
	int n;
	double S1 = 0;
	double S2 = 0;
	double S3 = 0;
	int dem = 1;
	cout << " Nhap so nguyen duong n la: ";
	cin >> n;
	for (dem; dem <= n; dem++) {
		S1 += 1.0 / dem;
		S2 += pow(dem,2);
		if (dem % 2 == 0) {
			S3 -= 1.0 / dem;
		}
		else {
			S3 += 1.0 / dem;
		}
	}
	cout << "Tong S1 la: " << S1 << endl;
	cout << "Tong S2 la: " << S2 << endl;
	cout << "Tong S3 la: " << S3 << endl;
	return 0;
}