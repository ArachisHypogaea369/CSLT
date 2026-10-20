/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 20/10/2026
*/
#include <iostream>
using namespace std;
int max2(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}
int max3(int a, int b, int c) {
	int max = a;
	if (max2(b, c) > max) {
		max = max2(b, c);
	}
	return max;
}
int main() {
	int a, b, c;
	cout << "Nhap cac so nguyen a, b, c la: ";
	cin >> a >> b >> c;
	cout << "So lon hon giua " << a << " va " << b << " la: " << max2(a, b) << endl;
	cout << "So lon nhat la: " << max3(a, b, c) << endl;
	return 0;
}