/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 13/10/2026
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    int dem = 0;
    int tong = 0;

    cout << "Nhap so nguyen duong n la: ";
    cin >> n;

    int cur = n;

    while (cur > 0) {
        tong += cur % 10;  // lay chu so cuoi
        dem++;              // dem chu so
        cur /= 10;         // bo chu so cuoi
    }

    cout << "So chu so: " << dem << endl;
    cout << "Tong chu so: " << tong << endl;

    return 0;
}