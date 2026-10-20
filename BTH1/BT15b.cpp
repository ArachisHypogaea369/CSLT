/* Ho va ten: Shih Gia Lac
	MSSV: 2651050097
	Ngay lam bai: 09/10/2026
*/
#include <iostream>
using namespace std;
int main(){
	int a, b;
	cout << " Nhap so nguyen a va b: "; 
	cin >> a >> b;
	a = a ^ b;
	b = b ^ a; 
	a = a ^ b;
	cout << " Hoan doi hai so a va b la :" << a << " " << b;
	return 0;
}