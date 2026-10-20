/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 19/10/2026
*/
#include <iostream>
using namespace std;

int main() {
    int ngay, thang, nam, maxNgay;

    cout << "Nhap ngay thang nam: ";
    cin >> ngay >> thang >> nam;

    switch (thang) {
    case 1: case 3: case 5: case 7:
    case 8: case 10: case 12:
        maxNgay = 31;
        break;

    case 4: case 6: case 9: case 11:
        maxNgay = 30;
        break;

    case 2:
        maxNgay = ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0)
            ? 29 : 28;
        break;

    default:
        cout << "Thang khong hop le!";
        return 0;
    }

    if (ngay < 1 || ngay > maxNgay) {
        cout << "Ngay khong hop le!";
        return 0;
    }

    ngay++;

    if (ngay > maxNgay) {
        ngay = 1;
        thang++;

        if (thang > 12) {
            thang = 1;
            nam++;
        }
    }

    cout << "Ngay tiep theo la: "
        << ngay << "/"
        << thang << "/"
        << nam;

    return 0;
}