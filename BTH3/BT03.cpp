/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 20/10/2026
*/
#include <iostream>
using namespace std;
double chuVi (float d, float r) {
	cout << "Chu vi hinh chu nhat voi chieu dai: " << d << " va chieu rong: " << r << " la: ";
	return (d + r) * 2;
}
double dienTich(float d, float r) {
	cout << "Dien tich hinh chu nhat voi chieu dai: " << d << " va chieu rong: " << r << " la: ";
	return d * r;
}
double dienTichHtron(float R) {
	cout << "Dien tich hinh tron la: ";
	return 3.14 * R * R;
}
int main() {
	float d, r, R;
	cout << "Nhap chieu dai, chieu rong, ban kinh la: ";
	cin >> d >> r >> R;
	cout << chuVi(d, r) << endl;
	cout << dienTich(d, r) << endl;
	cout << dienTichHtron(R) << endl;
	return 0;
}