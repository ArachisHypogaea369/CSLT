/* Ho va ten: Shih Gia Lac
	MSSV: 2651050097
	Ngay lam bai: 08/10/2026
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	float canNang, chieuCao;
	cout << " Nhap can nang (kg): ";
	cin >> canNang;
	cout << " Nhap chieu cao (m): ";
	cin >> chieuCao;
	
	cout << " Chi so BMI la: " << fixed << setprecision(1) << canNang / pow(chieuCao, 2) << endl;
	return 0;
}