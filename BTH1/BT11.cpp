/* Ho va ten: Shih Gia Lac
	MSSV: 2651050097
	Ngay lam bai: 07/10/2026
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double PI = 3.14159;
	float r;
	cout << " Nhap ban kinh cua hinh tron: ";
	cin >> r;
	cout << " Chu vi cua hinh tron la: " << fixed << setprecision(2) << 2 * PI * r << endl;
	cout << " Dien tich cua hinh tron la: " << fixed << setprecision(2) << PI * pow(r,2) << endl;
}