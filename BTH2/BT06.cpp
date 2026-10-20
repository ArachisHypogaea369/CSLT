/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 13/10/2026
*/
#include <iostream>
using namespace std;
int main() {
	float a, b;
	cout << " Nhap he so a va b: ";
	cin >> a >> b;
	if (a == 0) {
		if (b == 0) {
			cout << "Phuong trinh co vo so nghiem";
		}
		else {
			cout << "Phuong trinh vo nghiem";
		}
	}
	else { 
		cout << "Phuong trinh bac nhat co nghiem la: " << -b / a;
	}
	return 0;
}