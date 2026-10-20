/* Ho va ten: Shih Gia Lac
	MSSV: 2651050097
	Ngay lam bai: 09/10/2026
*/
#include <iostream>
using namespace std;
int main(){
	float a, b, c, p;
	cout << " Nhap vao canh a: ";
	cin >> a;
	cout << " Nhap vao canh b: ";
	cin >> b;
	cout << " Nhap vao canh c: ";
	cin >> c;
	p = (a + b + c) / 2;
	cout << " Chu vi cua tam giac la: " << p * 2 << endl;
	cout << " Dien tich tam giac la: " << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
	return 0;
}