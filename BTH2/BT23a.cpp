/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 18/10/2026
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {

		for (int j = 1; j <= n - i; j++) { // cong thuc in ra khoang trang: n - i ( tam giac can )
            cout << " ";
        }

		for (int j = 1; j <= 2 * i - 1; j++) { // cong thuc in ra dau sao: 2 * i - 1 ( tam giac can )
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}