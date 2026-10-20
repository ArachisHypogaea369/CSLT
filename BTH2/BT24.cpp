/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 18/10/2026
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	for (int a = 2; a <= 5; a++) {
		for (int b = 1; b <= 9; b++) {
			cout << setw(2) << a << " x " << b << " = " << setw(2) << a * b;
		}
		cout << endl;
	}
	cout << endl;
	for (int c = 6; c <= 9; c++) {
		for (int d = 1; d <= 9; d++) {
			cout << setw(2) << c << " x " << d << " = " << setw(2) << c * d;
		}
		cout << endl;
	}
	cout << endl;
	cout << "NGUOC LAI" << endl;
	cout << endl;
	for (int e = 1; e <= 9; e++) {
		for (int f = 2; f <= 5; f++) {
			cout << setw(2) << f << " x " << e << " = " << setw(2) << e * f;
		}
		cout << endl;
	}
	cout << endl;
	for (int g = 1; g <= 9; g++) {
		for (int h = 6; h <= 9; h++) {
			cout << setw(2) << h << " x " << g << " = " << setw(2) << g * h;
		}
		cout << endl;
	}
	return 0;
}