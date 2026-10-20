/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 18/10/2026
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    int dem = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << dem << " ";
            dem++;
        }
        cout << endl;
    }
    return 0;
}