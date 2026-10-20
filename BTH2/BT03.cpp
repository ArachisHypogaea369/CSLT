/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 13/10/2026
*/
#include <iostream>
using namespace std;

int main() {
    int a, b, A, B, C, max;

    cout << "Nhap 2 so nguyen a va b: ";
    cin >> a >> b;

    if (a > b) {
        cout << a << " lon hon " << b << endl;
    }
    else if (a == b) {
        cout << a << " va " << b << " bang nhau" << endl;
    }
    else {
        cout << a << " nho hon " << b << endl;
    }

    cout << "Nhap 3 so nguyen A, B, C: ";
    cin >> A >> B >> C;

    max = A;

    if (B > max) {
        max = B;
    }

    if (C > max) {
        max = C;
    }

    cout << max << " la so lon nhat";

    return 0;
}