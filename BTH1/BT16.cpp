/* Ho va ten: Shih Gia Lac
	MSSV: 2651050097
	Ngay lam bai: 08/10/2026
*/
#include <iostream>
using namespace std;
int main() {
	int gio,phut,giay,tongGiay;
	cout << " Nhap tong so giay: ";
	cin >> tongGiay;
	gio = tongGiay / 3600;
	phut = (tongGiay - gio*3600) / 60;
	giay = ((tongGiay - gio*3600) - phut * 60);
	cout << gio << " gio " << phut << " phut " << giay << " giay ";
	return 0;
}