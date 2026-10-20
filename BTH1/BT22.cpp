/* Ho va ten: Shih Gia Lac
	MSSV: 2651050097
	Ngay lam bai: 08/10/2026
*/
#include <iostream>
using namespace std;
int main(){
	int soNgay,nam,tuan,ngay;
	cout << " Nhap so ngay: ";
	cin >> soNgay;
	nam = soNgay / 365;
	tuan = (soNgay - nam * 365) / 7;
	ngay = (soNgay - nam * 365) - tuan * 7;
	cout << nam << " nam, " << tuan << " tuan, " << ngay << " ngay";
	return 0;
}