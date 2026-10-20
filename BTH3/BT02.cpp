/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 20/10/2026
*/
#include <iostream>
using namespace std;
int tong(int a, int b) {
	cout << "Tong cua " << a << " va " << b << " la: ";
	return a + b;
}
int hieu(int a, int b) {
	cout << "Hieu cua " << a << " va " << b << " la: ";
	return a - b;
}
int tich(int a, int b) {
	cout << "Tich cua " << a << " va " << b << " la: ";
	return a * b;
}
double thuong(int a, int b) {
	cout << "Thuong cua " << a << " va " << b << " la: ";
	return double(a) / b;
}
int main() {
	int a, b;
	cout << "Nhap a va b: ";
	cin >> a >> b;
	cout << tong(a, b) << endl;
	cout << hieu(a, b) << endl;
	cout << tich(a, b) << endl;
	cout << thuong(a, b) << endl;
	return 0;
}