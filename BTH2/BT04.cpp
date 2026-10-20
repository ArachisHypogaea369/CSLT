/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 13/10/2026
*/
#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Nhap so nguyen n: ";
	cin >> n;
	switch (n) {
	case 1:
		cout << "Thu Hai";
		break;
	case 2:
		cout << "Thu Ba";
		break;
	case 3:
		cout << "Thu Tu";
		break;
	case 4:
		cout << "Thu Nam";
		break;
	case 5:
		cout << "Thu Sau";
		break;
	case 6:
		cout << "Thu Bay";
		break;
	case 7:
		cout << "Chu Nhat";
		break;
	default:
		cout << "Khong hop le";
	}
return 0;
}