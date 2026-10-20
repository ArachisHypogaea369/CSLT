/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 14/10/2026
*/
#include <iostream>
using namespace std;

int main() {
	float quaTrinh,giuaKy, cuoiKy,tongKet;
	cout << "Nhap diem qua trinh, giua ky, cuoi ky (thang 10): ";
	cin >> quaTrinh >> giuaKy >> cuoiKy;
	tongKet = quaTrinh * 0.2 + giuaKy * 0.3 + cuoiKy * 0.5;
	if (tongKet >= 0.0 && tongKet < 4.0) { // F
		cout << "Diem: F" << endl;
	}
	else if (tongKet >= 4.0 && tongKet < 5.5) { // D
		cout << "Diem: D" << endl;
	}
	else if (tongKet >= 5.5 && tongKet < 7.0) { // C
		cout << "Diem: C" << endl;
	}
	else if (tongKet >= 7.0 && tongKet < 8.5) { // B
		cout << "Diem: B" << endl;
	}
	else if (tongKet >= 8.5 && tongKet < 10.0) { // A
		cout << "Diem: A" << endl;
	}
	else {
		cout << "Diem so khong hop le" << endl;
	}
}