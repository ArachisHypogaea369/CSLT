/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 20/10/2026
*/
#include <iostream>
using namespace std;

int main() {
	long long soDu = 5000000;
	int luaChon;
	do {
		cout << "Quy khach muon lam gi voi so tien " << soDu << " VND?" << endl;
		cout << "1. Xem so du" << endl;
		cout << "2. Nap tien" << endl;
		cout << "3. Rut tien" << endl;
		cout << "0. Thoat" << endl;
		cout << "Nhap vao lua chon cua quy khach: ";
		cin >> luaChon;
		switch (luaChon) {
		case 0:
			cout << "Cam on quy khach da su dung dich vu!" << endl;
			break;
		case 1:
			cout << "So du hien tai la: " << soDu << endl;
			break;
		case 2: {
			long long nap;

			cout << "Nhap vao so tien muon nap: ";
			cin >> nap;

			while (nap <= 0) {
				cout << "So tien nap phai lon hon 0. Nhap lai: ";
				cin >> nap;
			}

			soDu += nap;

			cout << "Nap tien thanh cong!" << endl;
			cout << "So du hien tai la: " << soDu << endl;

			break;
		}
		case 3: {
			long long rut;
			cout << "Nhap vao so tien muon rut: ";
			cin >> rut;
			while (rut > soDu) {
				cout << "Nhap lai so tien muon rut: ";
				cin >> rut;
			}
			if (rut < 50000) {
				cout << "So tien cua toi thieu de rut la 50000";
				cout << "So du hien tai: " << soDu;
			}
			else {
				for (int i = 1; i * 50000 <= soDu; i++) {
					cout << "So tien quy khach co the rut la: ";
					cout << 50000 * i << endl;
				}
				if (rut % 50000 == 0 && rut <= soDu && rut >= 50000) {
					soDu -= rut;
					cout << "Rut tien thanh cong!" << endl;
					cout << "So du con lai: " << soDu << endl;
				}
				else {
					cout << "So tien rut phai la boi so cua 50000!" << endl;
				}
			}
			break;
		}
		default:
			cout << "Lua chon cua quy khach khong hop le!" << endl;
			cout << "Nhap lai lua chon cua quy khach: ";
			cin >> luaChon;
		}
	} while (luaChon != 0);
	return 0;
}