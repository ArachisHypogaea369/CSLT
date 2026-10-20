/* Ho va ten: Shih Gia Lac
	MSSV: 2651050097
	Ngay lam bai: 08/10/2026
*/
#include <iostream>
using namespace std;
int main() {
	int tien, mot, hai, nam, MOT, HAI, NAM;
	cout << " Nhap so tien can rut: ";
	cin >> tien;
	NAM = tien / 500000;
	HAI = (tien - NAM * 500000) / 200000;
	MOT = ((tien - NAM * 500000) - HAI * 200000) / 100000;
	nam = (((tien - NAM * 500000) - HAI * 200000) - MOT * 100000) / 50000;
	hai = ((((tien - NAM * 500000) - HAI * 200000) - MOT * 100000) - nam * 50000) / 20000;
	mot = (((((tien - NAM * 500000) - HAI * 200000) - MOT * 100000) - nam * 50000) - hai * 20000) / 10000;
	cout << "500000: " << NAM << " to " << endl;
	cout << "200000: " << HAI << " to " << endl;
	cout << "100000: " << MOT << " to " << endl;
	cout << "50000: " << nam << " to " << endl;
	cout << "20000: " << hai << " to " << endl;
	cout << "10000: " << mot << " to " << endl;
}