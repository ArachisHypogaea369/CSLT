/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 20/10/2026
*/
#include <iostream>
using namespace std;
bool laSoChan(int n) {
	if (n % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int n;
	cout << "Nhap so nguyen n: ";
	cin >> n;
	cout << laSoChan(n);
	return 0;
}
/* Dinh nghia : ham laSoChan nhan gia tri n tu ban phim sau do xem xet co phai so chan ko.
* + So chan: in ra true ( 1 )
* + So le: in ra false ( 0 ) 
*/