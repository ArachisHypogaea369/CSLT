/* Ho va ten: Shih Gia Lac
	MSSV: 2651050097
	Ngay lam bai: 08/10/2026
*/
#include <iostream>
using namespace std;
int main() {
	int n,donVi,chuc,tram;
	cout << " Nhap 3 chu so: ";
	cin >> n;
	donVi = n % 10;
	chuc = (n / 10) % 10;
	tram = n / 100;
	cout << " Tram: " << tram << ", " << " Chuc: " << chuc << ", " << " Don vi: " << donVi << endl;
	cout << " Tong chu so: " << tram + chuc + donVi;
	return 0;
}