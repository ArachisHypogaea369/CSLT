/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 13/10/2026
*/
#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Nhap bieu thuc a op b: ";
    cin >> a >> op >> b;

    switch (op) {
    case '+':
        cout << a << " + " << b << " = " << a + b;
        break;

    case '-':
        cout << a << " - " << b << " = " << a - b;
        break;

    case '*':
        cout << a << " * " << b << " = " << a * b;
        break;

    case '/':
        if (b == 0){
            cout << "Loi: chia cho 0!";
        }
        else {
            cout << a << " / " << b << " = " << a / b;
        }
        break;

    default:
        cout << "Toan tu khong hop le!";
    }
    return 0;
}