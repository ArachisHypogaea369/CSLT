/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 14/10/2026
*/
#include <iostream>
using namespace std;

int main() {
	float a, b, c;
	float delta, x1, x2;
	cout << "Nhap vao 3 he so: a, b, c la: ";
	cin >> a >> b >> c;
	if (a == 0.0) {
		cout << "Phuong trinh bac 2 tro thanh bac 1" << endl;
		if (b == 0.0) {
			if (c == 0.0) {
				cout << "Phuong trinh co vo so nghiem";
			}
			else {
				cout << "Phuong trinh vo nghiem";
			}
		}
		else {
			cout << "Phuong trinh bac nhat co nghiem la: " << -c / b;
		}
	}
	else {
		delta = b * b - 4 * a * c;
		if (delta > 0.0) {
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			cout << "Phuong trinh co hai nghiem phan biet: x1 = " << x1 << ", x2 = " << x2 << endl;
		}
		else if (delta == 0.0) {
			x1 = -b / (2 * a);
			cout << "Phuong trinh co nghiem kep: x = " << x1 << endl;
		}
		else {
			cout << "Phuong trinh vo nghiem" << endl;
		}
	}
	return 0;
}