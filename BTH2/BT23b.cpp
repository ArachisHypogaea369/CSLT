/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 18/10/2026
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << " Nhap so nguyen duong n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) { // cot
        if (i == 1 or i == n) {
            for (int j = 1; j <= 2 * n;j++) {
                cout << "*";
            }
        }
        else {
            cout << "*";
            for (int j = 1; j <= 2 * n - 2; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}