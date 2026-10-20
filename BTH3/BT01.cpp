/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 20/10/2026
*/
#include <iostream>
using namespace std;
void inLoiChao() {
	cout << "Chao mung ban den voi C++!" << endl;
}
void inLoiChaoTen(string ten) {
	cout << "Xin chao " << ten << "!" << endl;
}
int main() {
	string ten;
	cout << "Nhap ten cua ban: ";
	cin >> ten;
	inLoiChao();
	inLoiChaoTen(ten);
	return 0;
}