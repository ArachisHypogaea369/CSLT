/* Ho va ten: Shih Gia Lac
	MSSV: 2651050097
	Ngay lam bai: 08/10/2026
*/
#include <iostream>
using namespace std;
int main(){
	int a, b;
	cout << " Nhap so nguyen a: ";
	cin >> a;
	cout << " Nhap so nguyen b: ";
	cin >> b;
	cout << " Thuong nguyen cua " << a << " va " << b << " la: " << a / b << endl;
	cout << " Phan du cua " << a << " va " << b << " la: " << a % b << endl;
	float A = static_cast<float> (a);
	float B = static_cast<float> (b);
	cout << " Thuong thuc cua " << a << " va " << b << " la: " << A / B << endl;
	return 0;
}