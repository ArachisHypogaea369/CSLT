/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 14/10/2026
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    char choiLai;

    do {
        int doan;
        int dem = 0;
        int dapAn = rand() % 100 + 1;

		cout << "Hay doan mot so tu 1 den 100" << endl;

        while (dem < 7) {
            cout << "Nhap vao so can doan: ";
            cin >> doan;

            dem++;

            if (doan == dapAn) {
                cout << "Ban da doan dung sau " << dem << " lan doan!" << endl;
                break;
            }

            if (doan < dapAn) {
                cout << "So ban doan nho hon dap an" << endl;
            }
            else {
                cout << "So ban doan lon hon dap an" << endl;
            }
        }

        if (doan != dapAn) {
            cout << "Ban da dung het 7 luot doan!" << endl;
            cout << "Dap an la: " << dapAn << endl;
        }

        cout << "Ban co muon choi lai khong? (y/n): ";
        cin >> choiLai;

    } while (choiLai == 'y');
    cout << "Cam on ban da choi!" << endl;

    return 0;
}
