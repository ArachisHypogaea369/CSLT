/* Ho va ten: Shih Gia Lac
	MSSV: 2651050097
	Ngay lam bai: 08/10/2026
*/
#include <iostream>
using namespace std;
int main(){
	float xA, yA, xB, yB;
	cout << " Nhap toa do x cua diem A: ";
	cin >> xA;
	cout << " Nhap toa do y cua diem A: ";
	cin >> yA;
	cout << " Nhap toa do x cua diem B: ";
	cin >> xB;
	cout << " Nhap toa do y cua diem B: ";
	cin >> yB;

	cout << " Do dai doan thang AB la: " << sqrt(pow((xB - xA), 2) + pow((yB - yA), 2)) << endl;
	return 0;
}