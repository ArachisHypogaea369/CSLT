/* Ho va ten: Shih Gia Lac
	MSSV: 2651050097
	Ngay lam bai: 08/10/2026
*/
#include <iostream>
using namespace std;
int main(){
	string ten;
	int soLuong;
	float donGia;
	cout << " Nhap ten mat hang: ";
	cin >> ten;
	cout << " Nhap so luong: ";
	cin >> soLuong;
	cout << " Nhap don gia: ";
	cin >> donGia;

	cout << "=======================================" << endl;
	cout << "|" << " Mat hang: " << ten << endl;
	cout << "|" << " So luong: " << soLuong << endl;
	cout << "|" << " Don gia: " << donGia << endl;
	cout << "|" << " Thanh tien (bao gom VAT 8%): " << donGia * soLuong * 1.08 << endl;
	cout << "=======================================" << endl;
	return 0;
}