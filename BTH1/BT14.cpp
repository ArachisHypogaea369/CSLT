/* Ho va ten: Shih Gia Lac
	MSSV: 2651050097
	Ngay lam bai: 08/10/2026
*/
#include <iostream>
using namespace std;
int main() {
	int a = 7, b = 2;
	cout << a / b << " " << a % b << endl;
	cout << (double)a / b << endl;
	int m = 3;
	int p = m++ * 2;
	int q = --m + 5;
	cout << p << " " << q << " " << m << endl;
	return 0;
}
/* Du doan:
3 1
3.5
6 8 3
*/

/*Giai thich:
+Dong 1: In ra phan nguyen cua phep toan a chia b va in ra phan du cua a/b duoc ngan cach boi " "
+Dong 2: In ra gia tri thuc cua ket qua a chia b
+Dong 3: Truoc tien khai bao bien m = 3
	Voi bien p, ban dau se ghi nhan gia tri hien tai cua m = 3 va nhan 2 => 6. Sau do m se tang 1 => m = 4
	Voi bien q, ban dau se giam gia tri hien tai cua m ( luc nay la 4 ) thanh 3 va cong 5 => 8
	Cuoi cung la in ra gia tri hien tai cua bien m = 3
*/