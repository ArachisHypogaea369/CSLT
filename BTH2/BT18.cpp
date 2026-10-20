/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 14/10/2026
*/
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
	cout << "Nhap vao 3 so nguyen a, b, c la: ";
    cin >> a >> b >> c;
    if (a <= b && b <= c)
        cout <<"Thu tu tang dan la: " << a << " " << b << " " << c;

    else if (a <= c && c <= b)
        cout << "Thu tu tang dan la: " <<  a << " " << c << " " << b;

    else if (b <= a && a <= c)
        cout << "Thu tu tang dan la: " << b << " " << a << " " << c;

    else if (b <= c && c <= a)
        cout << "Thu tu tang dan la: " << b << " " << c << " " << a;

    else if (c <= a && a <= b)
        cout << "Thu tu tang dan la: " << c << " " << a << " " << b;

    else
        cout << "Thu tu tang dan la: " << c << " " << b << " " << a;

    return 0;
}