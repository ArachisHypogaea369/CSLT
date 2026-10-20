/* Ho va ten: Shih Gia Lac
	MSSV: 2651050097
	Ngay lam bai: 09/10/2026
*/
#include <iostream>
using namespace std;
int main(){
	float P, r, A;
	int n;
	cout << " Nhap so tien gui tiet kiem (dong): ";
	cin >> P;
	cout << " Nhap lai suat (%): ";
	cin >> r;
	cout << " Nhap so nam: ";
	cin >> n;
	A = P * pow((1 + r / 100), n);
	int tienNhan = static_cast<int>(A);
	int tienLai = static_cast<int>(A - P);

	cout << " Tien nhan duoc la: " << tienNhan << endl;
	cout << " Tien lai la: " << tienLai << endl;
	return 0;
}