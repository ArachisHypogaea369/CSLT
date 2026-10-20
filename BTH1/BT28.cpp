/* Ho va ten: Shih Gia Lac
	MSSV: 2651050097
	Ngay lam bai: 09/10/2026
*/
#include <iostream>
using namespace std;
int main() {
	int x = 2147483647;
	cout << sizeof(char) << endl; // bit
	cout << sizeof(bool) << endl;
	cout << sizeof(short) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(long long) << endl;
	cout << sizeof(float) << endl;
	cout << sizeof(double) << endl;

	cout << x + 1 << endl;
	long long X = static_cast <long long>(x); // tu int -> long long
	cout << X + 1 << endl;
	return 0;
}
/* Nhan xet:
+ Voi kieu du lieu int, khi x + 1 thi se them dau "-" vao boi vi int nhan gia tri tu  -2^31 -> 2^31 - 1
+ Voi kieu du lieu long long, khi x + 1 thi giu nguyen dau cua gia tri boi vi long long nhan gia tri tu -2^63 -> 2^63-1
*/