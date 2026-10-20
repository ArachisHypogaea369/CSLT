/* Ho va ten: Shih Gia Lac
	MSSV: 2651050097
	Ngay lam bai: 09/10/2026
*/
#include <iostream>
using namespace std;
int main(){
	float tongTien, soNguoi;
	cout << " Nhap tong tien mon an va so nguoi: ";
	cin >> tongTien >> soNguoi;
	cout << " VAT: " << tongTien * 0.08 << endl;
	cout << " Phi phuc vu: "<< tongTien * 0.05 << endl;
	cout << " Tong thanh toan: " << tongTien + (tongTien * 0.05) + (tongTien * 0.08) << endl;
	cout << " Moi nguoi tra: " << ceil((tongTien + (tongTien * 0.05) + (tongTien * 0.08))/4000) * 1000 << endl;
	return 0;
}