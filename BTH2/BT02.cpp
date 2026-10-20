/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 13/10/2026
*/
#include <iostream>
using namespace std;
int main() {
	int tuoi;
	cout << " Nhap so tuoi cua ban: ";
	cin >> tuoi;
	if (tuoi >= 18) {
		cout << " Ban da du tuoi thi bang lai xe may ";
	}
	else {
		cout << " Ban con " << 18 - tuoi << " nam nua moi du tuoi ";
	}
	return 0;
}